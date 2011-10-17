#include "mainwindow.h"
#include <QToolBar>
#include <QDebug>
#include <QGraphicsView>
#include <QAction>
#include <QIcon>
#include <QActionGroup>
#include <QVBoxLayout>
#include <QWidget>
#include <QPushButton>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    createToolbar();
}

MainWindow::~MainWindow()
{

}

void MainWindow::createToolbar()
{
    actionGroup = new QActionGroup(this);

    QToolBar * toolbar = addToolBar(tr("Figures"));
    toolbar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    toolbar->setIconSize(QSize(70, 70));

    toolbar->addAction(createAction("line.png", "Line"));
    toolbar->addAction(createAction("ray.png", "Ray"));
    toolbar->addAction(createAction("segment.png", "Segment"));
    toolbar->addSeparator();
    toolbar->addAction(createAction("circle.png", "Circle"));
    toolbar->addAction(createAction("ellipse.png", "Ellipse"));
    toolbar->addSeparator();
    toolbar->addAction(createAction("polygon.png", "Polygon"));
    toolbar->addAction(createAction("triangle.png", "Triangle"));
    toolbar->addSeparator();
    toolbar->addAction(createAction("rectangle.png", "Rectangle"));
    toolbar->addAction(createAction("rhombus.png", "Rhombus"));
    toolbar->addAction(createAction("square.png", "Square"));

    createColorToolbar();

    createCentralWidget();
}

QAction * MainWindow::createAction(const QString& filename, const QString& text)
{
    QAction * action = new QAction(QIcon(":/images/" + filename), text, this);
    action->setCheckable(true);
    actionGroup->addAction(action);
    connect(action, SIGNAL(triggered()), this, SLOT(figureChanged()));

    return action;
}

void MainWindow::createCentralWidget()
{
    scene = new GraphicsScene;
    scene->setSceneRect(0, 0, 1000, 800);
    graphicsView = new QGraphicsView(scene);
    graphicsView->setRenderHint(QPainter::Antialiasing);
    graphicsView->setMinimumSize(500, 400);
    QVBoxLayout * layout = new QVBoxLayout;
    layout->addWidget(graphicsView);

    QWidget * mainWidget = new QWidget;
    mainWidget->setLayout(layout);
    setCentralWidget(mainWidget);
}

void MainWindow::figureChanged() {

//    qDebug() << qVariantValue<GraphicsScene::FigureType>(actionGroup->checkedAction()->data());

    scene->setFigureType(actionGroup->checkedAction()->text());
}

void MainWindow::createColorToolbar() {
    QToolBar * colorBar = addToolBar(tr("Colors"));
    colorBar->setIconSize(QSize(70, 70));
    colorBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

    fillColorAction = new QAction(createColorToolButtonIcon(scene->getFillColor()), "Fill color", this);
    colorBar->addAction(fillColorAction);
//    fillColorAction->setEnabled(false);
    connect(fillColorAction, SIGNAL(triggered()), this, SLOT(fillColorChanged()));
}

QIcon MainWindow::createColorToolButtonIcon(QColor color)
{
    QPixmap pixmap(70, 70);
    pixmap.fill(Qt::transparent);
    QPainter painter(&pixmap);
    painter.fillRect(QRect(20, 20, 30, 30), color);

    return QIcon(pixmap);
}

void MainWindow::fillColorChanged() {
    scene->setFillColor(QColorDialog::getColor(scene->getFillColor()));
    fillColorAction->setIcon(createColorToolButtonIcon(scene->getFillColor()));
}

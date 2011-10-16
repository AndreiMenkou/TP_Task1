#include "mainwindow.h"
#include <QToolBar>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QAction>
#include <QIcon>
#include <QButtonGroup>
#include <QVBoxLayout>
#include <QWidget>

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
    toolBarGroup = new QButtonGroup;

    QToolBar * toolbar = addToolBar(tr("Figures"));
    toolbar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

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

    createCentralWidget();
}

QAction * MainWindow::createAction(const QString& filename, const QString& text)
{
    QAction * action = new QAction(QIcon(":/images/" + filename), text, this);
    action->setCheckable(true);

    return action;
}

void MainWindow::createCentralWidget()
{
    scene = new QGraphicsScene;
    graphicsView = new QGraphicsView(scene);
    graphicsView->setMinimumSize(500, 400);
    QVBoxLayout * layout = new QVBoxLayout;
    layout->addWidget(graphicsView);

    QWidget * mainWidget = new QWidget;
    mainWidget->setLayout(layout);
    setCentralWidget(mainWidget);
}


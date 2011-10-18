#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtGui/QMainWindow>
#include <QColorDialog>
#include "GraphicsScene.h"

class QGraphicsView;
class QGraphicsScene;
class QAction;
class QActionGroup;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    QGraphicsView * graphicsView;
    GraphicsScene scene;
    QActionGroup * actionGroup;
    QAction* fillColorAction;
    QAction* borderColorAction;

    QAction * createAction(const QString& iconFilename, const QString& text);
    void createToolbar();
    void createCentralWidget();
    void createColorToolbar();
    QIcon createColorToolButtonIcon(QColor color);

private slots:
    void figureChanged();
    void fillColorChanged();
    void borderColorChanged();
};

#endif // MAINWINDOW_H

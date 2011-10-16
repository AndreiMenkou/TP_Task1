#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtGui/QMainWindow>
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
    GraphicsScene * scene;
    QActionGroup * actionGroup;

    QAction * createAction(const QString& iconFilename, const QString& text, GraphicsScene::FigureType);
    void createToolbar();
    void createCentralWidget();

private slots:
    void figureChanged();
};

#endif // MAINWINDOW_H

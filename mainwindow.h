#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtGui/QMainWindow>

class QButtonGroup;
class QGraphicsView;
class QGraphicsScene;
class QAction;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    QButtonGroup * toolBarGroup;
    QGraphicsView * graphicsView;
    QGraphicsScene * scene;

    QAction * createAction(const QString& iconFilename, const QString& text);
    void createToolbar();
    void createCentralWidget();
};

#endif // MAINWINDOW_H

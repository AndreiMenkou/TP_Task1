#ifndef GRAPHICSSCENE_H
#define GRAPHICSSCENE_H

#include <QGraphicsScene>
#include <QMetaType>
#include <QDebug>
#include "figures/AbstractFigure.h"

class GraphicsScene : public QGraphicsScene
{
    Q_OBJECT

public:
    GraphicsScene();

    void setFigureType(const QString& type) { figureType = type; }
    QString getFigureType() const { return figureType; }

    QColor getFillColor() const { return fillColor; }
    void setFillColor(const QColor& color) { fillColor = color; }

    QColor getBorderColor() const { return borderColor; }
    void setBorderColor(const QColor& color) { qDebug() << "set scene border color " << color; borderColor = color; }
    void addItem(QGraphicsItem *);
    void removeTempPoints();

public slots:
    void fillColorChanged();
    void borderColorChanged();


protected:
    void mouseMoveEvent(QGraphicsSceneMouseEvent * event);
    void mousePressEvent(QGraphicsSceneMouseEvent * event);
    void mouseReleaseEvent(QGraphicsSceneMouseEvent * event);
    void mouseDoubleClickEvent(QGraphicsSceneMouseEvent * event);

private:
    QColor fillColor;
    QColor borderColor;
    int numberClicks;
    QList<QPoint> * listPoints;
    QString figureType;
    AbstractFigure * figure;

};

#endif // GRAPHICSSCENE_H

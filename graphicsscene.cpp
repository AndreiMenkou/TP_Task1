#include "graphicsscene.h"
#include "figures/Circle.h"

GraphicsScene::GraphicsScene()
{
    numberClicks = 0;
    listPoints = new QList<QPoint>;
    fillColor = Qt::white;
    borderColor = Qt::black;
}

void GraphicsScene::mousePressEvent(QGraphicsSceneMouseEvent * event)
{
    ++numberClicks;
    listPoints->append(event->scenePos().toPoint());
    if (figureType == "Circle") {

        if (numberClicks % 2 == 0) {
            Figure2D * figure = new Circle(listPoints->at(numberClicks - 2),
                                                 listPoints->at(numberClicks - 1));
            figure->setFillColor(&fillColor);
            addItem(figure);
        }
    }
    qDebug() << "FigureType = " << figureType;
    QGraphicsScene::mousePressEvent(event);

}

void GraphicsScene::mouseMoveEvent(QGraphicsSceneMouseEvent * event)
{
    QGraphicsScene::mouseMoveEvent(event);
}

void GraphicsScene::mouseReleaseEvent(QGraphicsSceneMouseEvent * event)
{
    QGraphicsScene::mouseReleaseEvent(event);
}

void GraphicsScene::fillColorChanged() {
    setFillColor(QColorDialog::getColor(fillColor));
}

void GraphicsScene::borderColorChanged() {
    setBorderColor(QColorDialog::getColor(borderColor));
}

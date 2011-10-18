#include "graphicsscene.h"
#include "figures/Circle.h"
#include "figures/Square.h"


GraphicsScene::GraphicsScene()
{
    numberClicks = 0;
    listPoints = new QList<QPoint>;
    fillColor = Qt::white;
    borderColor = Qt::black;
}

void GraphicsScene::mousePressEvent(QGraphicsSceneMouseEvent * event)
{
    QGraphicsScene::mousePressEvent(event);
    if (!selectedItems().isEmpty()) {
        return;
    }
    ++numberClicks;
    listPoints->append(event->scenePos().toPoint());
    Figure2D * figure = 0;
    if (figureType == "Circle") {
        if (numberClicks == 2) {
            figure = new Circle(listPoints->at(numberClicks - 2),
                                                 listPoints->at(numberClicks - 1));
        }
    } else if (figureType == "Ellipse") {
        if (numberClicks == 2) {
            figure = new Ellipse(listPoints->at(numberClicks - 2),
                                                 listPoints->at(numberClicks - 1));
        }
    } else if (figureType == "Square") {
        if (numberClicks == 2) {
            figure = new Square(listPoints->at(numberClicks - 2),
                                                 listPoints->at(numberClicks - 1));
        }
    } else if (figureType == "Rectangle") {
        if (numberClicks == 2) {
            figure = new Rectangle(listPoints->at(numberClicks - 2),
                                                 listPoints->at(numberClicks - 1));
        }
    } else if (figureType == "Rhombus") {
        if (numberClicks == 3) {
            figure = new Parallelogramm(listPoints->at(numberClicks - 3),
                                   listPoints->at(numberClicks - 2),
                                   listPoints->at(numberClicks - 1));
        }
    }
    if (figure != 0) {
        figure->setFillColor(fillColor);
        addItem(figure);
        numberClicks = 0;
        listPoints->clear();
    }
    qDebug() << "FigureType = " << figureType;
    qDebug() << "ItemAt = " << itemAt(event->scenePos());

    qDebug() << "Is ItemAT selected : " << itemAt(event->scenePos());

}

void GraphicsScene::mouseMoveEvent(QGraphicsSceneMouseEvent * event)
{
    QGraphicsScene::mouseMoveEvent(event);
}

void GraphicsScene::mouseReleaseEvent(QGraphicsSceneMouseEvent * event)
{
    QGraphicsScene::mouseReleaseEvent(event);
}

void GraphicsScene::mouseDoubleClickEvent(QGraphicsSceneMouseEvent * event)
{
    foreach (QGraphicsItem * item, items())
    {
        ((AbstractFigure*) item)->move(QPoint(40, 40));
    }
    QGraphicsScene::mouseDoubleClickEvent(event);
}

void GraphicsScene::fillColorChanged() {
    setFillColor(QColorDialog::getColor(fillColor));
}

void GraphicsScene::borderColorChanged() {
    setBorderColor(QColorDialog::getColor(borderColor));
}

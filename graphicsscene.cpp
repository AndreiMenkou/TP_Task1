#include "graphicsscene.h"
#include "figures/Circle.h"
#include "figures/Square.h"
#include "figures/Line.h"
#include "figures/Triangle.h"
#include "figures/Rhombus.h"


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
    figure = 0;
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
        if (numberClicks == 2) {
            figure = new Rhombus(listPoints->at(numberClicks - 2),
                                   listPoints->at(numberClicks - 1));
        }
    } else if (figureType == "Segment") {
        if (numberClicks == 2) {
            figure = new Segment(listPoints->at(numberClicks - 2),
                                                 listPoints->at(numberClicks - 1));
        }
    } else if (figureType == "Triangle") {
        if (numberClicks == 3) {
            figure = new Triangle(listPoints->at(numberClicks - 3),
                                   listPoints->at(numberClicks - 2),
                                   listPoints->at(numberClicks - 1));
        }
    } else if (figureType == "Ray") {
        if (numberClicks == 2) {
            figure = new Ray(listPoints->at(numberClicks - 2),
                                                 listPoints->at(numberClicks - 1));
        }
    } else if (figureType == "Line") {
        if (numberClicks == 2) {
            figure = new Line(listPoints->at(numberClicks - 2),
                                                 listPoints->at(numberClicks - 1));
        }
    }
    if (figure != 0) {
        addItem(figure);
    }
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
    if (figureType == "Polygon" && numberClicks >= 3) {
        qDebug() << *listPoints;
        Polygon * polygon = new Polygon(listPoints);
        addItem(polygon);
    }
    QGraphicsScene::mouseDoubleClickEvent(event);
}

void GraphicsScene::fillColorChanged() {
    setFillColor(QColorDialog::getColor(fillColor));
}

void GraphicsScene::borderColorChanged() {
    setBorderColor(QColorDialog::getColor(borderColor));
}

void GraphicsScene::addItem(QGraphicsItem *item) {
    if (dynamic_cast<AbstractFigure*>(item) != 0) {
        item->setZValue(AbstractFigure::maxZOrder += 0.1);
        Figure2D * figure2D = dynamic_cast<Figure2D*>(item);
        if (figure2D != 0) {
            figure2D->setFillColor(fillColor);
        }
        ((AbstractFigure*) item)->setBorderColor(borderColor);
    }
    removeTempPoints();
    QGraphicsScene::addItem(item);

}

void GraphicsScene::removeTempPoints() {
    listPoints->clear();
    numberClicks = 0;
}

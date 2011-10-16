#include "graphicsscene.h"
#include "figures/Circle.h"

GraphicsScene::GraphicsScene() : figureType(TCircle)
{
    qRegisterMetaType<GraphicsScene::FigureType>("FigureType");
    qRegisterMetaTypeStreamOperators<int>("FigureType");
    numberClicks = 0;
    listPoints = new QList<QPoint>;
}

void GraphicsScene::mousePressEvent(QGraphicsSceneMouseEvent * event)
{
    ++numberClicks;
    listPoints->append(event->scenePos().toPoint());
    if (figureType == TCircle) {

        if (numberClicks % 2 == 0) {
            AbstractFigure * figure = new Circle(listPoints->at(numberClicks - 2),
                                                 listPoints->at(numberClicks - 1));
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

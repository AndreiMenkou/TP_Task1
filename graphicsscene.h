#ifndef GRAPHICSSCENE_H
#define GRAPHICSSCENE_H

#include <QGraphicsScene>
#include <QMetaType>

class GraphicsScene : public QGraphicsScene
{
    Q_OBJECT
    Q_ENUMS(FigureType)
    Q_FLAGS(FigureType FigureTypes)
//    Q_PROPERTY(FigureType figureType READ getFigureType WRITE setFigureType)


public:
    GraphicsScene();

    enum FigureType {
        TLine = 0, TRay, TSegment, TCircle, TEllipse, TPolygon, TTriangle, TRectangle, TRhombus, TSquare
    };
    Q_DECLARE_FLAGS(FigureTypes, FigureType)

    void setFigureType(FigureType type) { figureType = type; }
    FigureType getFigureType() const { return figureType; }

protected:
    void mouseMoveEvent(QGraphicsSceneMouseEvent * event);
    void mousePressEvent(QGraphicsSceneMouseEvent * event);
    void mouseReleaseEvent(QGraphicsSceneMouseEvent * event);

private:
    QColor * fillColor;
    QColor * borderColor;
    int numberClicks;
    QList<QPoint> * listPoints;
    FigureType figureType;

};
Q_DECLARE_METATYPE(GraphicsScene::FigureType)

#endif // GRAPHICSSCENE_H

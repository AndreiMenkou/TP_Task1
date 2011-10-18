///////////////////////////////////////////////////////////
//  AbstractFigure.h
//  Implementation of the Class AbstractFigure
//  Created on:      16-Oct-2011 17:54:55
///////////////////////////////////////////////////////////

#if !defined(EA_A029224C_BC6C_4b75_9DBB_3AE7E10C9B6D__INCLUDED_)
#define EA_A029224C_BC6C_4b75_9DBB_3AE7E10C9B6D__INCLUDED_

#include <QtGui>

class AbstractFigure : public QGraphicsItem
{

public:

	virtual ~AbstractFigure();

        QColor getBorderColor();
	int getBorderWidth();
        QPoint getCenter();
        void move(const QPoint&);
        void setBorderColor(const QColor&);
	void setBorderWidth(int newVal);
        void setCenter(const QPoint&);
        void setPainter(QPainter* painter);
        void paint(QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget);
        QRectF boundingRect() const;
        QPainterPath shape() const;
        void mousePressEvent(QGraphicsSceneEvent *);
        void mouseMoveEvent(QGraphicsSceneMouseEvent *);
        QVariant itemChange(GraphicsItemChange change, const QVariant &value);

private:
        QColor borderColor;
	int borderWidth;
        static qreal maxZOrder;



protected:
        QPainter* painter;
        QPainterPath painterPath;
        QPoint center;

        AbstractFigure();
        virtual void draw();

};
#endif // !defined(EA_A029224C_BC6C_4b75_9DBB_3AE7E10C9B6D__INCLUDED_)

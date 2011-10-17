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
	AbstractFigure();
	virtual ~AbstractFigure();

        virtual void draw() = 0;
	QColor* getBorderColor();
	int getBorderWidth();
        QPoint getCenter();
	void move(QPoint* center);
	void setBorderColor(QColor* newVal);
	void setBorderWidth(int newVal);
        void setCenter(const QPoint&);
        void setPainter(QPainter* painter);
        void paint(QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget);
        QPainterPath shape() const;

private:
        QColor* borderColor;
	int borderWidth;

protected:
        QPainter* painter;
        QPoint center;

};
#endif // !defined(EA_A029224C_BC6C_4b75_9DBB_3AE7E10C9B6D__INCLUDED_)

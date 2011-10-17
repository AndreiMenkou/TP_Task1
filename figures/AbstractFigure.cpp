///////////////////////////////////////////////////////////
//  AbstractFigure.cpp
//  Implementation of the Class AbstractFigure
//  Created on:      16-Oct-2011 17:54:55
///////////////////////////////////////////////////////////

#include "AbstractFigure.h"


AbstractFigure::AbstractFigure(){

}



AbstractFigure::~AbstractFigure(){

}


void AbstractFigure::paint(QPainter * aPainter, const QStyleOptionGraphicsItem * option, QWidget * widget)
{
    painter = aPainter;
    qDebug() << "AbstractFigure::paint " << center << " pos =" << pos();
    draw();
}



QColor* AbstractFigure::getBorderColor(){

	return borderColor;
}


int AbstractFigure::getBorderWidth(){

	return borderWidth;
}


QPoint AbstractFigure::getCenter() {

	return center;
}


void AbstractFigure::move(QPoint* center){

}


void AbstractFigure::setBorderColor(QColor* newVal){

	borderColor = newVal;
}


void AbstractFigure::setBorderWidth(int newVal){

	borderWidth = newVal;
}

QPainterPath shape() const {
    QPainterPath painterPath;
    return painterPath;
}


void AbstractFigure::setCenter(const QPoint& newCenter){
        center = newCenter;
        qDebug() << "AbstractFigure::setCenter " << center;
        setPos(QPointF(center));
}

void AbstractFigure::setPainter(QPainter * aPainter) {
    painter = aPainter;
}

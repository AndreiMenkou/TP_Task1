///////////////////////////////////////////////////////////
//  AbstractFigure.cpp
//  Implementation of the Class AbstractFigure
//  Created on:      16-Oct-2011 17:54:55
///////////////////////////////////////////////////////////

#include "AbstractFigure.h"


AbstractFigure::AbstractFigure(){
    setFlags(ItemIsSelectable | ItemIsMovable);
}


AbstractFigure::~AbstractFigure(){

}


void AbstractFigure::paint(QPainter * aPainter, const QStyleOptionGraphicsItem * option, QWidget * widget)
{
    painter = aPainter;
    draw();
}



QColor AbstractFigure::getBorderColor(){

	return borderColor;
}


int AbstractFigure::getBorderWidth(){

	return borderWidth;
}


QPoint AbstractFigure::getCenter() {

	return center;
}


void AbstractFigure::move(const QPoint& delta){
    center += delta;
    update(boundingRect());
}


void AbstractFigure::setBorderColor(const QColor& newVal){

	borderColor = newVal;
}


void AbstractFigure::setBorderWidth(int newVal){

	borderWidth = newVal;
}

QPainterPath AbstractFigure::shape() const {
    return painterPath;
}

QRectF AbstractFigure::boundingRect() const {
    return painterPath.controlPointRect();
}


void AbstractFigure::setCenter(const QPoint& newCenter){
        center = newCenter;
        qDebug() << "AbstractFigure::setCenter " << center;
        setPos(QPointF(center));
}

void AbstractFigure::setPainter(QPainter * aPainter) {
    painter = aPainter;
}


void AbstractFigure::draw() {
    QPen tempPen(borderColor);
    if (isSelected()) {
        tempPen.setWidth(3);
        tempPen.setStyle(Qt::DotLine);
    }
    painter->setPen(tempPen);
    painter->drawPath(painterPath);
}

void AbstractFigure::mousePressEvent(QGraphicsSceneEvent * event) {
    setSelected(true);
    qDebug() << this << " selected";
}

void AbstractFigure::mouseMoveEvent(QGraphicsSceneMouseEvent * event) {
    qDebug() << "Move item " << this;
    QGraphicsItem::mouseMoveEvent(event);
}

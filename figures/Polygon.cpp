///////////////////////////////////////////////////////////
//  Polygon.cpp
//  Implementation of the Class Polygon
//  Created on:      16-Oct-2011 17:54:56
///////////////////////////////////////////////////////////

#include "Polygon.h"


Polygon::Polygon() {

}

Polygon::Polygon(QList<QPoint> * list) {
    setPoints(list);
}



Polygon::~Polygon(){

}

QList<QPoint>* Polygon::getPoints() {

	return points;
}


void Polygon::setPoints(QList<QPoint>* newVal){
        points = newVal;
        setCenter(points->first());
        painterPath = QPainterPath();
        qDebug() << "d";
        for (int i = 0; i < points->size() - 1; ++i) {
            qDebug() << i;
            painterPath.lineTo(points->at(i + 1) - center);
        }
        painterPath.lineTo(0, 0);
}

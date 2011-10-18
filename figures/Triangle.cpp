///////////////////////////////////////////////////////////
//  Triangle.cpp
//  Implementation of the Class Triangle
//  Created on:      16-Oct-2011 17:54:57
///////////////////////////////////////////////////////////

#include "Triangle.h"


Triangle::Triangle(){

}

Triangle::Triangle(const QPoint& p1, const QPoint& p2, const QPoint& p3) {
    QList<QPoint> list;
    list.append(p1);
    list.append(p2);
    list.append(p3);
    setPoints(&list);
}


Triangle::~Triangle(){

}

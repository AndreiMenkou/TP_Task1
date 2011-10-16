///////////////////////////////////////////////////////////
//  Segment.cpp
//  Implementation of the Class Segment
//  Created on:      16-Oct-2011 17:54:57
///////////////////////////////////////////////////////////

#include "Segment.h"


Segment::Segment(){

}



Segment::~Segment(){

}





void Segment::draw(){

}


QPoint* Segment::getLineEnd(){

	return lineEnd;
}


void Segment::setLineEnd(QPoint* newVal){

	lineEnd = newVal;
}

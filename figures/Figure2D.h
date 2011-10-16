///////////////////////////////////////////////////////////
//  Figure2D.h
//  Implementation of the Class Figure2D
//  Created on:      16-Oct-2011 17:54:55
///////////////////////////////////////////////////////////

#if !defined(EA_00D0A2DB_9C8E_4124_9A3B_D27CE6448DBE__INCLUDED_)
#define EA_00D0A2DB_9C8E_4124_9A3B_D27CE6448DBE__INCLUDED_

#include "AbstractFigure.h"

class Figure2D : public AbstractFigure
{

public:
	Figure2D();
	virtual ~Figure2D();

        QColor* getFillColor();
	void setFillColor(QColor* color);

private:
        QColor* fillColor;

};
#endif // !defined(EA_00D0A2DB_9C8E_4124_9A3B_D27CE6448DBE__INCLUDED_)

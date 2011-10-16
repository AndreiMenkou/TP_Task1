///////////////////////////////////////////////////////////
//  Circle.h
//  Implementation of the Class Circle
//  Created on:      16-Oct-2011 17:54:55
///////////////////////////////////////////////////////////

#if !defined(EA_E79AA340_82F6_41fd_A610_924C2B9312D8__INCLUDED_)
#define EA_E79AA340_82F6_41fd_A610_924C2B9312D8__INCLUDED_

#include "Ellipse.h"

class Circle : public Ellipse
{

public:
        Circle(const QPoint&, const QPoint&);
	virtual ~Circle();

};
#endif // !defined(EA_E79AA340_82F6_41fd_A610_924C2B9312D8__INCLUDED_)

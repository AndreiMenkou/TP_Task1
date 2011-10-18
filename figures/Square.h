///////////////////////////////////////////////////////////
//  Square.h
//  Implementation of the Class Square
//  Created on:      16-Oct-2011 17:54:57
///////////////////////////////////////////////////////////

#if !defined(EA_295AD1E6_4BE7_44f5_9E1A_F717756945C8__INCLUDED_)
#define EA_295AD1E6_4BE7_44f5_9E1A_F717756945C8__INCLUDED_

#include "Rectangle.h"

class Square : public Rectangle
{

public:
	Square();
        Square(const QPoint&, const QPoint&);
	virtual ~Square();

};
#endif // !defined(EA_295AD1E6_4BE7_44f5_9E1A_F717756945C8__INCLUDED_)

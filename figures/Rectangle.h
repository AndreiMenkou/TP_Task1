///////////////////////////////////////////////////////////
//  Rectangle.h
//  Implementation of the Class Rectangle
//  Created on:      16-Oct-2011 17:54:56
///////////////////////////////////////////////////////////

#if !defined(EA_42607CBC_8829_400a_ABCF_E4D83BE96049__INCLUDED_)
#define EA_42607CBC_8829_400a_ABCF_E4D83BE96049__INCLUDED_

#include "Parallelogramm.h"

class Rectangle : public Parallelogramm
{

public:
        Rectangle() {}
        Rectangle(const QPoint&, const QPoint&);
	virtual ~Rectangle();

};
#endif // !defined(EA_42607CBC_8829_400a_ABCF_E4D83BE96049__INCLUDED_)

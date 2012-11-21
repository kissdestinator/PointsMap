//=======================================================================
// Basic C++: classe Point
//      Specification of class Point
//-----------------------------------------------------------------------
// Auzias Maël - Constantina Ioannou
// For the project: http://bit.ly/kiss-web
//=======================================================================

/*!
 * \file Point.cpp
 *
 * \brief Implementation of class Point.
 */

#include "Point.h"

//-----------------------------------------------------------------------
// Mutators
//-----------------------------------------------------------------------

void Point::add_destination(Point p)
{
  if()
}



//-----------------------------------------------------------------------
// Relational operators (implemented as friend functions)
//-----------------------------------------------------------------------

/*!
 * Return true if the point in parameter is close enough from this one.
 */
bool is_area_reached(Point p)
{
  return false;
}

/*!
 * All members must be equal except.
 *
 * \note We give a direct definition here because it is simple, but a
 * definition of this operator can be derived from operator<().
 */
bool operator==(Point p1, Point p2)
{
    return p1._year  == p2._year
        && p1._month == p2._month
        && p1._day   == p2._day;
}

//-----------------------------------------------------------------------
// IO operators
//-----------------------------------------------------------------------

/*!
 * We produce a printable form, with the name of the month.
 *
 * \param[in,out] os the output stream
 * \param[in] p the point to print
 */
ostream& operator<<(ostream& os, Point p)
{
    os << '(' << p._x << ',' << p._y << "), destination:" << p._destinations;
    return os;
}

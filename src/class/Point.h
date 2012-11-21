//=======================================================================
// Basic C++: classe Point
//      Specification of class Point
//-----------------------------------------------------------------------
// Auzias Maël - Constantina Ioannou
// For the project: http://bit.ly/kiss-web
//=======================================================================

/*!
 * \file Point.h
 *
 * \brief Definition of class Point.
 */

#ifndef _POINT_H_
#define _POINT_H_

#include <iostream>
#include <vector>

using namespace std;

/*!
 * \brief Class Point.
 *
 * Represent a point (x, y, list of points related) to allow the representation
 * of roads, calcul angles, distance, etc.
 */
class Point
{
private:
  int _x;  //!< x coordinate
  int _y; //!< y coordinate
  vector<Point> _destinations; //!< Reachable point from this one

public:
  // Constructors
  //! Regular constructor.
  Point(int x = 0, int y = 0, vector<Point> destinations = NULL)
    : _x(x), _y(y), _destinations(destinations) {}

  // Accessors
  //! Get this x coordinate.
  int x() const {return _x;}
  //! Get this y coordinates.
  int y() const {return _y;}
  //! Get this reachable points destinations.
  vector<Point> destinations() const {return _destinations;}

  // Mutators
  //! Set a new x coordinate
  void setX(int x) {_x = x;}
  //! Set a new y coordinate
  void setY(int y) {_y = y;}
  //! Set a new destinations vector
  void set_destinations(vector<Point> destinations) {_destinations = destinations;}
  //! Add a new destination if this one does not exist
  void add_destination(Point p);

  //! Check if the distance between the paramater and the point is low enough.
  friend bool is_area_reached(Point p);

  // Relational operators
  //! Equality operator on Point
  friend bool operator==(Point p1, Point p2);
  //! Unequality operator on Date
  friend bool operator!=(Point p1, Point p2) {return !(p1 == p2);}

  // IO operations
  //! Print out a Date.
  friend ostream& operator<<(ostream& os, Point p);
};

#endif


//=======================================================================
// Basic C++: classe Road
// Specification of class Road
//-----------------------------------------------------------------------
// Auzias Maël - Constantina Ioannou - Grzegorczyk Lucas
// For the project: http://bit.ly/kiss-web
//=======================================================================

/*!
* \file Road.h
*
* \brief Definition of class Road.
*/

#ifndef _ROAD_H_
#define _ROAD_H_
#define DEFAULT_ANGLE -1
#define DEFAULT_DIST -1
#define DEFAULT_VALUE (_start.x() == -1 && _start.y() == -1)

#include <iostream>
#include <list>
#include "Destination.h"
#include "Calcul.h"

using namespace std;

/*!
* \brief Class Road.
*
* Represent road between two destinations
* calculate the angle, the distance of the road.
*/
class Road
{
private:
  Destination _start; //!< Beginning of road
  Destination _end; //!< End of the road
  int _id; //!< id of the road *nothing related with the destination's id*
  double _angle; //!< Angle of the road
  double _distance; //!< Distance between the start and the end of the road

  //! Update the angle and the distance
  void update_road();


public:
  // Constructors
  //! Regular constructor.
  Road(Destination start, Destination end, int id = -1, double angle = DEFAULT_ANGLE, double distance = DEFAULT_DIST)
    : _start(start), _end(end), _id(id), _angle(angle), _distance(distance) { if(!DEFAULT_VALUE) update_road(); }

  // Accessors
  //! Get the start destination
  Destination start() const {return _start;}
  //! Get the end destination
  Destination end() const {return _end;}
  //! Get the id of the road
  int id() const {return _id;}
  //! Get the angle of the road
  double angle() const {return _angle;}
  //! Get the distance of the road
  double distance() const {return _distance;}

  // Mutators
  //! Set a new start and update the road
  void set_start(Destination start) {_start = start;update_road();}
  //! Set a new end and update the road
  void set_end(Destination end) {_end = end;update_road();}
  //! Set a new y id
  void set_id(int id) {_id = id;}

  // Relational operators
  //! Equality operator on Road
  friend bool operator==(Road r1, Road r2);
  //! Unequality operator on Road
  friend bool operator!=(Road r1, Road r2) {return !(r1 == r2);}

  // IO operations
  //! Print out a Point.
  friend ostream& operator<<(ostream& os, Road r);
};

#endif

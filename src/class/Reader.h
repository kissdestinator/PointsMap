//=======================================================================
// Basic C++: classe Reader
// Specification of class Reader
//-----------------------------------------------------------------------
// Auzias Maël - Constantina Ioannou
// For the project: http://bit.ly/kiss-web
//=======================================================================

/*!
* \file Reader.h
*
* \brief Definition of class READER.
*/

#ifndef _READER_H_
#define _READER_H_
#include "Map.h"

using namespace std;

/*!
* \brief Class Reader.
*
* The reader read the csv file and fullfil a Map
*/
class Reader
{
private:
  Map _map; //!< The map from the csv file

public:
  // Constructors
  //! Regular constructor.
  Reader() { }
};

#endif



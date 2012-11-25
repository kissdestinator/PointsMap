#include <iostream>
#include "../class/Road.h"
using namespace std;

/**
 * Test for the Road class.
 * Create the roads using an array according to the example
 * The roads should contain the *right* values of distance and angle
 * Print them
 */
int main() {

Destination d[3];
for (int i=0; i<3; i++){
  d[i].set_id(i);
}
  d[0].set(0,0);
  d[1].set(1,1);
  d[2].set(1,0);
  d[0].add_destination(1);        // Triangle of destinations
  d[0].add_destination(2);
  d[1].add_destination(0);
  d[1].add_destination(2);
  d[2].add_destination(0);
  d[2].add_destination(1);


  void* raw_memory = operator new[]( 6 * sizeof( Road ) );    //creating 6 roads, back and forth
  Road* roads = static_cast<Road*>( raw_memory );
  for( int i = 0; i < 6; ++i ) {
    if (i<3)
      new( &roads[i] )Road(d[i%3],d[(i+1)%3]);
    if (i>2)
      new( &roads[i] )Road(d[(i+1)%3],d[i%3]);
    roads[i].set_id(i);
    cout << roads[i] << endl;
  }

  for( int i = 5; i >= 0; --i ) {     // Cleaning after myeslf
    roads[i].~Road();
  }
  operator delete[]( raw_memory );
  return 0;
}

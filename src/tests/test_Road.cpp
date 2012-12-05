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

  Destination d[7];                                            // Creating destinations to reflect CSV file
  for (int i=0; i<7; i++){
    d[i].set_id(i);
  }

  d[0].set(141,643);                                             // Coordinates multiplied by 10 because Mael included halfs
  d[1].set(2255,660);
  d[2].set(3480,1730);
  d[3].set(3815,778);
  int arr0[] = {1};
  int arr1[] = {0,2,3};
  int arr2[] = {1,3};
  int arr3[] = {1,2};
  int destArr[][2] = {{0,1},{1,0},{1,2},{2,1},{1,3},{3,1},{2,3},{3,2}};

  std::list<int> list0 (arr0, arr0 + sizeof(arr0) / sizeof(int));
  std::list<int> list1 (arr1, arr1 + sizeof(arr1) / sizeof(int));
  std::list<int> list2 (arr2, arr2 + sizeof(arr2) / sizeof(int));
  std::list<int> list3 (arr3, arr3 + sizeof(arr3) / sizeof(int));
  d[0].set_destinations(list0);                                 // Coordinates multiplied by 10 because Mael included halfs
  d[1].set_destinations(list1);
  d[2].set_destinations(list2);
  d[3].set_destinations(list3);
 
  void* raw_memory = operator new[]( 8 * sizeof( Road ) );    //creating 6 roads, back and forth
  Road* roads = static_cast<Road*>( raw_memory );
  for (int i = 0; i < 8; ++i) {
    new( &roads[i] )Road(d[destArr[i][0]],d[destArr[i][1]]);
    roads[i].set_id(i);
    cout << roads[i] << endl;
  }

  for( int i = 5; i >= 0; --i ) {     // Cleaning after myeslf
    roads[i].~Road();
  }
  operator delete[]( raw_memory );
  return 0;
}

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

  d[0].set(10,50);                                             // Coordinates multiplied by 10 because Mael included halfs
  d[1].set(50,0);
  d[2].set(75,10);
  d[3].set(60,30);
  d[4].set(40,50);
  d[5].set(5,55);
  d[6].set(35,30);
  int arr0[] = {1,4,5};
  int arr1[] = {0,2,3};
  int arr2[] = {1,4};
  int arr3[] = {0,3,5,6};
  int arr4[] = {0,4};
  int destArr[][2] = {{0,5},{5,0},{0,4},{4,0},{5,4},{4,5},{4,6},{6,4},{3,4},{4,3},{0,1},{1,0},{1,2},{2,1},{1,3},{3,1}};

  std::list<int> list0 (arr0, arr0 + sizeof(arr0) / sizeof(int));
  std::list<int> list1 (arr1, arr1 + sizeof(arr1) / sizeof(int));
  std::list<int> list2; 
  list2.push_back(1);
  std::list<int> list3 (arr2, arr2 + sizeof(arr2) / sizeof(int));
  std::list<int> list4 (arr3, arr3 + sizeof(arr3) / sizeof(int));
  std::list<int> list5 (arr4, arr4 + sizeof(arr4) / sizeof(int));
  std::list<int> list6;
  list6.push_back(4);
  d[0].set_destinations(list0);                                 // Coordinates multiplied by 10 because Mael included halfs
  d[1].set_destinations(list1);
  d[2].set_destinations(list2);
  d[3].set_destinations(list3);
  d[4].set_destinations(list4);
  d[5].set_destinations(list5);
  d[6].set_destinations(list6);

  void* raw_memory = operator new[]( 16 * sizeof( Road ) );    //creating 6 roads, back and forth
  Road* roads = static_cast<Road*>( raw_memory );
  for (int i = 0; i < 16; ++i) {
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

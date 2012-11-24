#include <iostream>
#include "../class/Point.h"
using namespace std;

/**
 * Test for the Point class.
 * Create some points using an array, modify and copy them
 * Print them
 */
int main() {

  Point* points = new Point[10];  // Create arrray of points using defualt constructor
  for (int i = 0; i < 10; i++)    // Change in a loop values of points
    points[i].set(i, -i);
  for (int i = 0; i < 10; i++)    // Output points in a loop
    cout << i+1 << ": " << points[i] << endl;
  points[0].setX(20);             // Change only X of 1st point
  points[2].setY(19);             // Change only Y of 3rd point
  cout << "1st point after change" << points[0] << endl;
  cout << "3rd point after change" << points[2] << endl;
  cout << "1st point: x - " << points[0].x() << " y - " << points[0].y() << endl;
  points[0].set(3,3);
  points[1].set(3,3);
  points[2] = points[0];
  // Code below will check if overloaded boolean operators work as they should
  if (points[0] == points[1] && points[1] == points[2] && points[2] != points[3]) 
    cout << "Everything works as expected" << endl;
  else
    cout << "Ooops, something went wrong... Lucas.learnToCode()" << endl;


  return 0;
}

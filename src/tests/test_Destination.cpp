#include <iostream>
#include "../class/Destination.h"
using namespace std;

/**
 * Test for the Destination class.
 * Create some Destination using an array, modify and copy them
 * Print them
 */
int main() {

list<int> list1;
for (int i=0; i<10; i++){
list1.push_back(i);
}
Destination d[5];
for (int i=0; i<5; i++){
  d[i].set_id(i);
  d[i].set_destinations(list1);
}
d[0].set(4,6);
d[1].setX(4);
d[1].setY(3);
d[1].add_destination(5);
d[0].rm_destination(2);
for (int i=0; i<5; i++){
  cout<< d[i]<<endl;
}

  return 0;
}

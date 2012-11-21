#include <iostream>
#include "class/Point.h"
using namespace std;

#define NB_OF_DESTINATIONS 7

int main() {
  int id = 0;
  //Array of list below:
  list<int> list[NB_OF_DESTINATIONS];
  int coordinates[][NB_OF_DESTINATIONS] = {
	{10,30}, {50,00}, {75,10}, {60,30},
	{40,50}, {05,65}, {35,30}
  };
  Point p[NB_OF_DESTINATIONS];

  list[0].push_back(1);
  list[0].push_back(4);
  list[0].push_back(5);
  list[1].push_back(0);
  list[1].push_back(2);
  list[1].push_back(3);
  list[2].push_back(1);
  list[3].push_back(1);
  list[3].push_back(4);
  list[4].push_back(0);
  list[4].push_back(3);
  list[4].push_back(5);
  list[4].push_back(6);
  list[5].push_back(0);
  list[5].push_back(4);
  list[6].push_back(4);

  for(; id < 7; id++) {
    p[id].setX(coordinates[id][0]);
    p[id].setY(coordinates[id][1]);
    p[id].set_id(id);
    p[id].set_destinations(list[id]);
    cout << p[id] << endl;
  }
  
  
    
  //cout << "p0:" << p0 << endl;

  return 0;
}

/*
10,30,1,4,5
50,0,2,3
75,10
60,30,4
40,50,5,6
5,65
35,30
*/
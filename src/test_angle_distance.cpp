#include <iostream>
#include "class/Point.h"
using namespace std;
#include <stdio.h>
#include <math.h>
#define NB_OF_DESTINATIONS 7
#define PI 3.14159265359
//! Calculate the dinstance between two points
int cal_distance(Point p1,Point p2){
  int disx = p2.x() - p1.x();
  int disy = p2.y() - p1.y();
  int dis_points = sqrt( pow(disx,2) +pow(disy,2));
   
  return dis_points;
} 
//! Calculate the angle.
double angle(Point p1, Point p2){
  int difx = p2.x()-p1.x();
  int dify = p2.y()-p1.y();
  double angle_in_degrees;
  angle_in_degrees = 180/PI * atan(dify)/(difx);
 return angle_in_degrees;
}
int main() {
  Point p1(0,0,0);
  Point p2(1,1,1);
  //test to see that cal_distance works.
  int dis_2_points = 0;
  dis_2_points = cal_distance(p1,p2);
  cout<< dis_2_points << " mm, "; 
  // cal_distance function worked.
  //test to see that angle works
  double gonia=0;
  gonia = angle(p1,p2);
  cout << gonia << " degree" << endl;
  // worked but returns a double value, if it returns int then answer is not precised
    return 0;
}

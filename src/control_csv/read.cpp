//==================
//=====================================================
// Basic C++: read.cpp
// Specification of the reader - reads the csv file and organize it.
// unfinished and not compiled with ubuntu
//-----------------------------------------------------------------------
// Auzias Maël - Constantina Ioannou
// For the project: http://bit.ly/kiss-web
//=======================================================================
#include <vector>
#include <iostream>  
#include <string>
#include <sstream>
#include <fstream>
#include <stdio.h>
#include <string.h>
using namespace std;

vector<string> split_sentence(const string& sentence){
  string a;
  vector<string> words;
  istringstream buf(sentence);
  while (getline(buf, a, ';'))
    words.push_back(a);
  return words;
}
/*
vector<string> split_word(const string& sentence){
  string a;
  vector<string> words;
  istringstream buf(sentence);
  while (getline(buf, a, '#'))
    words.push_back(a);
  return words;
}
*/
int convert_string_to_integer(string a){ //get this function to work
	
}
double points_x_y(int variable){
	double z = (double)variable*0.001; //miliseconds
	return z;
}

int main (){
	ifstream myfile;
	string line;
	myfile.open("example.csv");
	vector<string> v;
	vector<string> v1;
	vector<string> v2;
	if (myfile.is_open()){
		cout<< "My File is open \n";
		while(getline(myfile, line)){

			v = split_sentence(line);	
			int id = atoi(v[0].c_str());
			double x = points_x_y(atoi(v[1].c_str())); //converting to int and then to double - m = 10^-3
			double y = points_x_y(atoi(v[2].c_str())); 
			//each time call the object points to store the info.
			string roads1 = v[3].c_str();
			//v1 = split_word(roads1); //v1[0..] - depends how we are going touse the existing-knowing roads
			string roads2 = v[4].c_str();//v2[0..]
			//v2 = split_word(roads2);	
		}

	}
	else{
	cout<< "Invalid";
	}
return 0;
}

// *****************************************************
// * This example is about AP Calculator HW            *
// * Created by Sevki Bekir                            *
// * Date: March 17, 2015                              *
// *****************************************************
#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

void rectangle(int &edge1, int &edge2,int &area, int &perimeter)
{
  perimeter=2*(edge1+edge2);
  area=edge1*edge2;

}

int main ()
{
  int area, perimeter,edge1,edge2;
  cout << "Welcome to AP Calculator.\nNow I want youto enter edges."<<endl;
  cout << "Enter the number of edge1: ";
  cin >> edge1;
  cout << "Enter the number of edge2: ";
  cin >> edge2;
  cout << "Thanks. I'm calculating now..."<<endl;
  rectangle(edge1,edge2,area,perimeter);
  cout << "Area: "<<area<< "\nPerimeter: "<<perimeter <<endl;
  return 0;
}

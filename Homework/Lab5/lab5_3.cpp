// *****************************************************
// * This example is about Triangle Area using class   *
// * Created by Sevki Bekir                            *
// * Date: March 31, 2015                              *
// *****************************************************
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#define SIZE 3
using namespace std;

class Triangle{

private:
    double sides[SIZE];
    string type;
    double s;

public:
  Triangle(double* arr);
  double* getSides();
  double computeArea();
  string getType();
  void identifyType();

};

Triangle::Triangle(double* arr)
{
  //sides=arr;
  //std::copy(arr, arr+sizeof(arr)/sizeof(arr[0]), sides);
  int i;
  for(i=0;i<SIZE;i++)
    sides[i]=arr[i];
}

double* Triangle::getSides()
{
  return sides;
}
double Triangle::computeArea()
{
  double area=0;
  int i;
  for(i=0;i<SIZE;i++)
    s+=sides[i];
  s/=2;
  area=s;
  for(i=0;i<SIZE;i++)
    area*=(s-sides[i]);
  area=sqrt(area);

  return area;
}
void Triangle::identifyType()
{
  if(sides[0]==(s*2)/3)
    type="equilateral";
  else if(sides[0]==sides[1] || sides[0]==sides[2] || sides[1]==sides[2])
    type="isosceles";
  else
    type="scalene";
}

string Triangle::getType()
{
  return type;
}

int main ()
{
  double myArr[SIZE]={3,3,3}, newArr[SIZE];
  int i;
  Triangle test(myArr);
  cout<<"Let's write the sides. :)"<<endl;

  for(i=0;i<SIZE;i++)
  {
    cout << i+1 << ". Side:"<<test.getSides()[i]<<endl;
  }
  cout << "Now, I'm computing the area..."<<endl;
  cout << "The area is "<< test.computeArea()<<endl;
  test.identifyType();
  cout << "The type of triangle is "<<test.getType()<<endl;
  return 0;
}

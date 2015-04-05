// *************************************************************
// * This example is about check ascending or not.             *
// * Created by Sevki Bekir                                    *
// * Date: April 2, 2015                                       *
// *******************************************************************
// 3.	Write a program that inputs 10 integers into an array and
// determines if it is in ascending order or not.
// *******************************************************************
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#define SIZE 10
using namespace std;

void check(int numbers[])
{
  int i;
  bool status=false;
  for(i=0;i<SIZE;i++)
  {
    if(numbers[i]>numbers[i+1])
      {
        cout <<"Numbers are not in ascending order"<<endl;
        status=true;
        break;
      }

  }
  if(status==false)
    cout <<"Numbers are in ascending order"<<endl;
}
int main ()
{
  cout << "Welcome..."<<endl;
  cout << "Enter 10 integers:";
  int i,numbers[SIZE];
  for (i=0;i<SIZE;i++)
  {
    cin >> numbers[i];
  }
  check(numbers);

  return 0;
}

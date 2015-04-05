// *************************************************************
// * This example is about Sorting to the avg. of numbers gets *
// * Created by Sevki Bekir                                    *
// * Date: April 1, 2015                                       *
// *******************************************************************
// 1.	Write a program that gets 10 real numbers into an array.
// It will create and display the new array which consists of
// the input numbers that are greater than the average of the array.
// *******************************************************************
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#define SIZE 10
using namespace std;

int main ()
{
  int i,j=0,k=0;
  bool swapped=true;
  double numbers[SIZE],average=0,temp=0,orderNumbers[SIZE];
  cout << "Welcome, welcome...I do sorting numbers to the average of them you get..."<<endl;
  cout << "Write 10 numbers :";
  for (i=0;i<SIZE;i++)
  {
    cin>>numbers[i];
    average+=numbers[i];
  }
  average/=SIZE;
  for(i=0;i<SIZE;i++)
    if(average<=numbers[i])
    {
      orderNumbers[j]= numbers[i];
      j++;
    }
  while(swapped)
  {
    k++;
    swapped=false;
    for(i=0;i<j-k;i++)
    {
      if(orderNumbers[i+1]>orderNumbers[i])
      {
        temp=orderNumbers[i];
        orderNumbers[i]=orderNumbers[i+1];
        orderNumbers[i+1]=temp;
        swapped=true;
      }
      
    }
  }
  for(i=0;i<j;i++)
    cout << orderNumbers[i]<< " ";
  cout <<endl;
  return 0;
}

// *************************************************************
// * This example is about interval numbers in integer.        *
// * Created by Sevki Bekir                                    *
// * Date: April 2, 2015                                       *
// *******************************************************************
// 5. Write a program to input n and n elements into an integer array.
// It will display the number of positive, negative and zero elements
// in the array. For this purpose use the following:
// • A function that inputs an integer n and then inputs n integers into
// the array. This function should return the integer n and the array.
// • A function that receives an array and its size and then returns
// the number of zero, negative and positive integers of the array tot
// he calling function
// • A function that receives an array and its size and then outputs
// the position of the zero integers in the array.
// *******************************************************************
#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
void theLocationOfZ(int numbers[],int &size)
{
  int i;
  cout <<"Position of zero integers in the array:";
  for(i=0;i<size;i++)
  {
    if(numbers[i]==0)
      cout << i << " ";
  }
  cout << endl;
}
void theNumberOfZNP(int numbers[],int &size)
{
  int count[3],i; // 0=>zero 1=>positive 2=>negative

  for(i=0;i<3;i++)
    count[i]=0;
  for(i=0;i<size;i++)
  {
    if(numbers[i]==0)
      count[0]++;
    else if(numbers[i]>0)
      count[1]++;
    else if(numbers[i]<0)
      count[2]++;
  }
  cout << "Number of negative integers:" << count[2] << endl;
  cout << "Number of positive integers:" << count[1] << endl;
  cout << "Number of zero: " << count[0] << endl;

  theLocationOfZ(numbers,size);
}


int* doArray(int &size)
{
  while(1)
  {
    cout << "Enter a positive integer(n<100):";
    cin >> size;
    if(size>0 && size<100)
      break;
  }
  int myArray[size],i;
  cout<< "Enter "<<size <<" integers:";
  for(i=0;i<size;i++)
    cin >> myArray[i];
  theNumberOfZNP(myArray,size);
  return myArray;
}


int main ()
{
  cout << "Welcome..."<<endl;
  int i,size=0;
  int *number=doArray(size);

  return 0;
}

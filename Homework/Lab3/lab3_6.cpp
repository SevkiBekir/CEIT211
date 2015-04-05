// *************************************************************
// * This example is about interval numbers in integer.        *
// * Created by Sevki Bekir                                    *
// * Date: April 2, 2015                                       *
// *******************************************************************
// 6. Write a program that inputs N (assume N<30), and N integers into
// a 1-Dimensional array and an integer value num. Program searches
// value num in the array and deletes it from the array, displaying
// the updated array. Use function find() that receives an array and an
// integer, it updates the array by removing all occurrences of the
// received integer from the array.
// *******************************************************************
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <algorithm>
#include <vector>

using namespace std;


int main ()
{
  cout << "Welcome..."<<endl;
  int i,size=0,find;
  cout << "Enter a positive integer(N<30):"<<endl;
  cin >> size;
  int myArray[size];
  cout << "Enter "<< size<<" integer:";
  for(i=0;i<size;i++)
    cin >>myArray[i];
  cout << "Enter to delete:";
  cin>>find;
  vector <int> myVector(myArray,myArray+sizeof(myArray)/sizeof(int));

  //int index=distance(myArray,find(myVector.begin(),myVector.end(),find));
  vector<int>::iterator myIt = std::find(myVector.begin(), myVector.end(), find);
  int x=-1;
  if (myIt != myVector.end())
  {
      x = myIt - myVector.begin();
  }
  cout <<x <<" <=Deleting..."<<endl;
  for(i=x;i<size;i++)
    if(i+1!=size)
      myArray[i]=myArray[i+1];
  cout << "Yes. Deleted. New array:";
  for(i=0;i<size-1;i++)
    cout << myArray[i]<< " ";
  cout<<endl;

  return 0;
}

// *************************************************************
// * This example is about matrix in matematical.              *
// * Created by Sevki Bekir                                    *
// * Date: April 2, 2015                                       *
// *******************************************************************
// 4. Write a C program that creates a one-dimensional integer array A
// of size 50. It will set the ith element of array A to 0 +1+ 2 + 3 +L+
// (where 0 £) < 50
// *******************************************************************
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#define SIZE 50
using namespace std;

void assign(int numbers[])
{
  int i,j,sum;

  for(i=0;i<SIZE;i++)
  {
    sum=0;
    for(j=i;j>=0;j--)
        sum+=j;
    numbers[i]=sum;
    cout <<"A["<<i<<"]=" <<numbers[i];
    if(i<10 && ((i+1)%5!=0 || i==0))
      cout<< "\t\t";
    else if((i+1)%5!=0 || i==0)
      cout<< "\t";
    else
      cout <<"\n";
  }

}
int main ()
{
  cout << "Welcome..."<<endl;

  int numbers[SIZE];
  assign(numbers);

  return 0;
}

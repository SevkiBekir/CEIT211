// *****************************************************
// * This example is about Find Min Max HW             *
// * Created by Sevki Bekir                            *
// * Date: March 17, 2015                              *
// *****************************************************
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#define SIZE 3

using namespace std;

void findMaxMin(int num1,int num2,int num3,int &max,int &min)
{
  int array[3]={num1,num2,num3},i;
  min=array[0];
  max=array[0];
  for(i=1;i<SIZE;i++)
  {
    if(min>array[i])
    {
      min=array[i];
    }
    if(max<array[i])
    {
      max=array[i];
    }

  }


}

int main ()
{
  int num1, num2, num3, min, max;
  cout << "Welcome the FindMaxMinator.\n Now, I want to enter three numbers." << endl;
  cout << "First number: ";
  cin >> num1;
  cout << "Second number: ";
  cin >> num2;
  cout << "Third number: ";
  cin >> num3;
  cout << "Thank you! Now I'm calculating..."<< endl;
  findMaxMin(num1,num2,num3,max,min);
  cout << "Max: "<<max << " Min: "<<min<<endl;

  return 0;
}

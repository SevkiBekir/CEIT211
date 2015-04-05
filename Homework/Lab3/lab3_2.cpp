// *************************************************************
// * This example is about Sorting to the avg. of numbers gets *
// * Created by Sevki Bekir                                    *
// * Date: April 1, 2015                                       *
// *******************************************************************
// 2.	Write a program that inputs N (assume N<30), and N integers into
// a 1-Dimensional array. It will find and display how many times the
// array elements are repeated in the array.
// *******************************************************************
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#define SIZE 29
using namespace std;

int main ()
{
  int i,n,numbers[SIZE],search,j,location;
  bool added=false;
  cout << "Welcome...The program is find and display how many times numbers are repeated"<<endl;
  cout << "Now, Enter how many numbers you input N (N<30): ";
  while(1)
  {
    cin >> n;
    if(n>0 && n<30)
      break;
    cout << "wrong number. Try again";
  }
  cout << "Now, Enter "<<n<<" integers:";
  for(i=0;i<n;i++)
  {
    cin >> numbers[i];

  }
  int countArray[n][2],k,dd=0;
  for(k=0;k<n;k++)
    countArray[k][0]=0;
  location=0;
  for(i=0;i<n;i++)
  {

    search=numbers[i]; //For Each numbers to search
    for(j=0;j<n;j++) // Check Equal to the numbers
    {
      if(search==numbers[j])
      {
        if(added==true)
        {
          for(k=0;k<n;k++) // Check assign to countArray before.
          {
            if(search==countArray[k][0])
            {
              countArray[k][1]++;
              added=false;
              cout << dd++<<endl;
              break;

            }
            cout <<"deneme"<<endl;
          }

        }
        else if(added==false)
        {
          countArray[location][0]=search;
          countArray[location][1]=0;
          countArray[location][1]++;
          location++;
          added=true;
          cout <<"first=>"<< dd++<<endl;

        }

      }

    }
    added=false;

  }
  for(i=0;i<n;i++)
    if (countArray[i][0]!=0)
      cout << countArray[i][0] <<" occurs "<<countArray[i][1]<<" times"<<endl;



  return 0;
}

// *****************************************************
// * This example is about Skater Calculation          *
// * Created by Sevki Bekir                            *
// * Date: March 24, 2015                              *
// *****************************************************
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#define POINT_SIZE 3
#define SKATER_SIZE 2

using namespace std;

struct skaters
{
  string name;
  string country;
  int points[POINT_SIZE];
  double average;
};

skaters f1(skaters fSkater[])
{
  int i,j;
  double sum=0;
  for(i=0;i<SKATER_SIZE;i++)
  {
    cout << i<<". Skater Name:";
    cin >> fSkater[i].name;
    cout << i<<". Skater Country:";
    cin >> fSkater[i].country;
    for(j=0;j<POINT_SIZE;j++)
    {
      cout << i+1<<". Skater points-:"<<j+1;
      cin >> fSkater[i].points[j];
      sum+=fSkater[i].points[j];
    }
    fSkater[i].average=sum/POINT_SIZE;

  }
  return fSkater;
}

skaters f2(skaters fSkater[])
{
  int i,count=0;
  double dummy=0;
  for(i=0;i<SKATER_SIZE;i++)
  {
    if(fSkater[i].average>dummy)
    {
      dummy=fSkater[i].average;
      count=i;
    }

  }

  return fSkater[count];
}

int main ()
{
  skaters mySkater[SKATER_SIZE];
  mySkater=f1(mySkater);
  mySkater[0]=f2(mySkater);
  cout << "WINNER\nSkater Name:"<<mySkater[0].name<<"\nSkater Country:"<<mySkater[0].country<<endl;
  int i;
  for(i=0;i<POINT_SIZE<i++)
  {
    cout << "Skater Point-"<<i+1<<":"<<mySkater[0].points[i]<<endl;
  }


  return 0;
}

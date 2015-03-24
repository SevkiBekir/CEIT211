// *****************************************************
// * This example is about Function Structure          *
// * Created by Sevki Bekir                            *
// * Date: March 24, 2015                              *
// *****************************************************
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#define SIZE 2

using namespace std;

struct cities
{
  string cityName;
  int LTemp;
  int HTemp;
};

cities CityInformation(cities city)
{
  cout << "City Name:";
  cin >> city.cityName;
  cout << "Lowest Tempature:";
  cin >> city.LTemp;
  while(1)
  {
    cout << "Highest Tempature:";
    cin >> city.HTemp;
    if(city.LTemp<city.HTemp)
      break;
    else
      cout << "Again..."<<endl;
  }


  return city;
}

int CityLargest(cities city[])
{
  int i,diff=0,dummy=0;
  for(i=0;i<SIZE;i++)
  {
    dummy=city[i].HTemp-city[i].LTemp;
    if(diff<dummy)
    {
      diff=dummy;
    }
  }

  return diff;
}

int main ()
{

  cities myCities[SIZE];
  int i,highest=0;
  string hCity="";
  for(i=0;i<SIZE;i++)
  {
    myCities[i]=CityInformation(myCities[i]);
    if(myCities[i].HTemp>highest)
    {
      highest=myCities[i].HTemp;
      hCity=myCities[i].cityName;
    }

  }


  cout << "Highest Tempature is "<<highest <<" in "<<hCity<<endl;
  // SECOND QUESTION
  cout << "The largest difference btw highest and lowest "<<CityLargest(myCities)<<endl;

  return 0;
}

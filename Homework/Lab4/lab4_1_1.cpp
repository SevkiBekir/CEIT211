// *****************************************************
// * This example is about Function Structure          *
// * Created by Sevki Bekir                            *
// * Date: March 24, 2015                              *
// *****************************************************
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#define SIZE 10

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
  cout << "Highest Tempature:";
  cin >> city.HTemp;
  return city;
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

  return 0;
}

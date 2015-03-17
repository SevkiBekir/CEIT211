// *****************************************************
// * This example is about Simple Calculator  HW       *
// * Created by Sevki Bekir                            *
// * Date: March 17, 2015                              *
// *****************************************************
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
using namespace std;

double slope(double a,double b)
{
  return (-1*a)/b;;
}

void ETCalculator(double &a, double &height,double &area, double &perimeter)
{
  height=sqrt(3)*a/2;
  area=(height*height)/sqrt(3);
  perimeter=3*a;

}

void secondToHMS(int &second,int &minute,int &hour)
{


  minute=second/60;
  hour=minute/60;
  second=second-(minute*60);
  minute=minute-(hour*60);
}

void TCCalculator(double celcius,double &kelvin,double &fahrenheit,double &ranking)
{

  kelvin=celcius+273.15;
  fahrenheit=(1.8)*celcius+32;
  ranking=(1.8)*kelvin;
}

double velocityCalculator(double travelTime,double distance)
{
  return distance/travelTime;
}

double DCalculator(double x1,double y1,double x2,double y2)
{
  return 6371*acos(sin(y1)*sin(y2)+cos(y1)*cos(y2)*cos(x1-x2));
}

int main ()
{
  int selection;
  cout << "Welcome to AP Calculator.\nNow I want you to select menu by entering number."<<endl;
  while(1)
  {
    cout << "-----MENU-----"<<endl;
    cout << "[1] Mathematics\n[2] Life\n[3] Science\n[4] Quıit"<<endl;
    cin>>selection;
    if(selection==1)
    {
      cout << "-----SUB MENU-----"<<endl;
      cout << "[1] Slope\n[2] Equilateral Triangle\n[3] Quıit"<<endl;
      cin>>selection;
      if(selection==1)
      {
        cout << "Slope calculator is beginnig.Now I want you to enter numbers."<<endl;
        cout << "For example, the format is ax+by+c=0. Then the inputs are a=2, b=4, c=3"<<endl;
        double a,b,c,dummy;
        cout << "Enter the value of a: ";
        cin >>a;
        cout << "Enter the value of b: ";
        cin >>b;
        cout << "Enter the value of c: ";
        cin >>c;
        cout << "You write the function "<<a<<"x+"<<b<<"y+"<<c<<"=0 and also the slope of it is="<<slope(a,b)<<endl;

      }
      else if(selection==2)
      {
        cout << "Equilateral Triangle calculator is beginnig.Now I want you to enter number."<<endl;

        double a,height,area,perimeter;
        cout << "Enter the side value: ";
        cin >>a;
        ETCalculator(a,height,area,perimeter);
        cout << "Height: "<<height<<"\nArea: "<<area<<"\nPerimeter :"<<perimeter<<endl;

      }
      else if(selection==3)
        exit(0);
    }
    else if(selection==2)
    {
      cout << "-----SUB MENU-----"<<endl;
      cout << "[1] Time Conversion\n[2] Temperature Conversion\n[3] Quıit"<<endl;
      cin>>selection;
      if(selection==1)
      {
        cout << "Time Conversion is beginnig.Now I want you to enter number."<<endl;
        int hour,minute,second;
        cout << "Enter time in seconds: ";
        cin >>second;
        secondToHMS(second,minute,hour);
        if(hour!=0)
          cout << hour<<" Hours ";
        if(minute!=0)
          cout << minute<<" Minute ";
        if(second!=0)
          cout << second<<" Seconds";
        cout <<endl;
      }

      else if(selection==2)
      {
        cout << "Temperature Conversion calculator is beginnig.Now I want you to enter number."<<endl;

        double celcius,kelvin,fahrenheit,ranking;
        cout << "Enter tempature: ";
        cin >>celcius;
        TCCalculator(celcius,kelvin,fahrenheit,ranking);
        cout << "Celcius: "<<celcius<<"\nKelvin: "<<kelvin<<"\nFahrenheit :"<<fahrenheit<<"\nRanking :"<<ranking<<endl;

      }

      else if(selection==3)
        exit(0);
    }
    else if(selection==3)
    {
      cout << "-----SUB MENU-----"<<endl;
      cout << "[1] Velocity\n[2] Distance between two places on earth\n[3] Quıit"<<endl;
      cin>>selection;
      if(selection==1)
      {
        cout << "Velocity calculator is beginnig.Now I want you to enter number."<<endl;

        double travelTime,distance;
        cout << "Travel time: ";
        cin >>travelTime;
        cout << "Distance: ";
        cin >>distance;

        cout << "Velocity: "<<velocityCalculator(travelTime,distance)<<endl;

      }

      if(selection==2)
      {
        cout << "Distance between two places on earth is beginnig. Now I want you to enter number."<<endl;

        double x1,x2,y1,y2;
        cout << "Enter x1,y1: ";
        cin >>x1 >>y1;
        cout << "Enter x2,y2 ";
        cin >>x2>>y2;

        cout << "Distance: "<<DCalculator(x1,y1,x2,y2)<<endl;

      }
      else if(selection==3)
        exit(0);

    }
    else if(selection==4)
      exit(0);

  }

  return 0;
}

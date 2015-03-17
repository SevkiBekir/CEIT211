// *****************************************************
// * This example is about Day Calculator HW           *
// * Created by Sevki Bekir                            *
// * Date: March 17, 2015                              *
// *****************************************************
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#define YEARTODAY 365
#define MONTHTODAY 30

using namespace std;

void calculatorDays(int number,int &day, int &month, int &year)
{
  int dummy;
  if(number<YEARTODAY)
  {
    month=number/MONTHTODAY;
    day=number-(month*MONTHTODAY);
  }
  else if (number>=YEARTODAY)
  {
    year=number/YEARTODAY;
    number=number-(year*YEARTODAY);
    month=number/MONTHTODAY;
    day=number-(month*MONTHTODAY);

  }

}



int main ()
{
  int number,day=0,month=0,year=0;
  cout << "Welcome to Day Calculator. Now, I want you to enter a number as days."<<endl;
  cout << "For example, 366 That implies 1 year 1 day."<<endl;
  cout << "Enter a number as day: ";
  cin >> number;
  //cout <<endl <<213/30<<endl;
  calculatorDays(number,day,month,year);
  if(year!=0)
    cout <<year<<" year ";
  if(month!=0)
    cout <<month<<" month ";
  if(day!=0)
    cout <<day<<" day";
  cout << endl;

  return 0;
}

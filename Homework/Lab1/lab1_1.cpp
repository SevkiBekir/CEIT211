// *****************************************************
// * This example is about Calendar Lab1 HW            *
// * Created by Sevki Bekir                            *
// * Date: March 10, 2015                               *
// *****************************************************
#include <iostream>
#include <stdlib.h>
#define WeekDays 7
using namespace std;

void calendar(int startingDay, int daysMonth)
{
  int i,count=1;
  //Starting
  for (i=1;i<startingDay;i++) // Location
  {
    if(startingDay!=1)
      cout <<"\t";

  }
  for (i=startingDay;i<=WeekDays;i++) // Print First Row Numbers
  {

    cout << count << "\t";
    count++;
    if(i==WeekDays)
      cout << "\n";
  }

  for (i=1;i<=WeekDays;i++) // Other rows
  {
    cout << count << "\t";
    if(i==WeekDays)
    {
      cout << "\n";
      i=0;
    }

    if(daysMonth==count)
    {
      cout << endl;
      break;

    }

    count++;
  }

}

int main()
{
cout << "Welcome the calendar application. Now, I will ask a question. Please answer it\n";
int startDay,monthDay;
string yesNo="";
while (1)
{
  cout << "Enter days of month (28,29,30,31): ";
  cin >> monthDay;
  if (monthDay<28 || monthDay>31)
      continue;
  cout << "Enter starting day (1,2,...,7):";
  cin >> startDay;
  if (startDay<1 || startDay>7)
      continue;
  calendar(startDay,monthDay);
  cout << "This is calender...\nDo you want to form a calender again?\nJust write 'yes' or 'no'\n Answer :";
  cin >> yesNo;
  if(yesNo=="yes")
    continue;
  else if(yesNo=="no")
    exit(0);
  else
  {
    cout << "You do not listen to me. You are going to start again.\n";
    continue;
  }

}



  return 0;
}

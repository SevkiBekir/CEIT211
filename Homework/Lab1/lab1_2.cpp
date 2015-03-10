// ********************************************************
// * This example is about Drug Force Calculator Lab1 HW  *
// * Created by Sevki Bekir                               *
// * Date: March 10, 2015                                 *
// ********************************************************
#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

double drugForce(double area, double CD, double velocity)
{

  double p=1.23,force=0;
  force=0.5*p*CD*area*velocity*velocity;

  return force;
}

int main()
{
  cout << "Welcome the calculator drug force. Now, I will ask questions. Please answer it\n";
  double area,cd,velocity,force;
  int i;
  string yesNo="";
  while (1)
  {
    force=0;
    cout << "Please enter drag coefficient value :";
    cin >> cd;
    if(cd<0.2 || cd >0.5)
    {
      cout << "Invalid coefficient value !!!";
      continue;
    }
    cout << "Please enter projected area :";
    cin >> area;
    cout << "Velocity\tDrag Coefficient\tArea\tForce\n";
    velocity=5;
    for(i=0;i<8;i++)
    {
      force=drugForce(area,cd,velocity);
      printf("%.0f\t\t%.1f\t\t\t%.0f\t%.1f\n",velocity,cd,area,force);
      velocity+=5;
    }
    cout << "This is calculation...\nDo you want to try to compute again?\nJust write 'yes' or 'no'\n Answer :";
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

// ********************************************************
// * This example is about Energy Recipt Lab1 HW          *
// * Created by Sevki Bekir                               *
// * Date: March 10, 2015                                 *
// ********************************************************
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#define SIZE 100
using namespace std;
int calculation(int kwh)
{ int recipt=1, partion[4],partionNumber=0;
  if(kwh<=300)
    partionNumber=1;
  else if (kwh>300 && kwh<=600)
    partionNumber=2;
  else if(kwh>600 && kwh<=1000)
      partionNumber=3;
  else if(kwh>1000)
    partionNumber=4;
  if(partionNumber==1)
  {
    partion[0]=kwh;
    recipt=partion[0]*9;
  }
  else if(partionNumber==2)
  {
    partion[0]=300;
    partion[1]=kwh-300;
    recipt=partion[0]*9+partion[1]*8;
  }
  else if(partionNumber==3)
  {
    partion[0]=300;
    partion[1]=300;
    partion[2]=kwh-600;
    recipt=partion[0]*9+partion[1]*8+partion[2]*6;
  }
  else if(partionNumber==4)
  {
    partion[0]=300;
    partion[1]=300;
    partion[2]=400;
    partion[3]=kwh-1000;
    recipt=partion[0]*9+partion[1]*8+partion[2]*6+partion[3]*5;
  }
  return recipt;
}


int main()
{

  int arrayCaKwh[SIZE][2]={123,725,205,115,464,600,596,327,601,915,613,1011,722,47};
  int countArray=7,i;
  cout << "Welcome the Energy Recipt. Now, I will ask questions. Please answer it\n";
  string yesNo="";
  int selection=0;
  while (1)
  {
    cout << "Do you want to show embedded data? Write 'yes' or 'no'";
    cin >> yesNo;
    if(yesNo=="yes")
    {
      cout << "ID\tCustumer Number\tUsed Kwh"<<endl;
      for(i=0;i<countArray;i++)
      {
        cout << i+1<<"\t"<<arrayCaKwh[i][0] << "\t"<< arrayCaKwh[i][1]<<endl;
      }
      cout << "Please write id number to compute recipt"<<endl;
      cin >> selection;
      cout<< calculation(arrayCaKwh[selection-1][1])<<endl;

    }
    else if(yesNo=="no")
    {
      cout << "Add a person"<<endl;
      countArray++;
      cout << "Custumer Number :";
      cin >> selection;
      arrayCaKwh[countArray-1][0]=selection;
      cout << "Used Kwh :";
      cin >> selection;
      arrayCaKwh[countArray-1][1]=selection;
      cout << "Successfully added. Now you are going to main menu"<<endl;
      continue;


    }
    else
    {
      cout << "You do not listen to me. You are going to start again.\n";
      continue;
    }
    yesNo="";
    cout << "Are you try again? 'yes' or 'no'\n";
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

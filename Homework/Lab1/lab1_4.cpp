// ********************************************************
// * This example is about Calculator Lab1 HW             *
// * Created by Sevki Bekir                               *
// * Date: March 10, 2015                                 *
// ********************************************************
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

using namespace std;
double calculation (char type,double newNumber,double total )
{
  if(type=='+')
  {

    total+=newNumber;
    cout << total<<endl;
    return total;
  }
  else if(type=='-')
  {
    total-=newNumber;
    cout << total<<endl;
    return total;
  }
  else if(type=='*')
  {
    total*=newNumber;
    cout << total<<endl;
    return total;
  }
  else if(type=='/')
  {
    total/=newNumber;
    cout << total<<endl;
    return total;
  }
  else if(type=='^')
  {
    int mod=round(newNumber);
    int totalForMod=round(total);
    total=totalForMod%mod;
    cout << total<<endl;
    return total;
  }

  else
  {
    cout << "Don't play with me!!!";
    return 0;
  }


}


int main()
{
  cout << "Welcome the calculator. Now, I will ask questions. Please answer it\n";
  double totalScore=0;
  char type;
  double number;
  while (1)
  {
    cin >> type;
    if(type=='q')
    {
      cout << totalScore<<endl;
      exit(0);
    }
    cin >> number;
    totalScore=calculation(type,number,totalScore);


  }



  return 0;
}

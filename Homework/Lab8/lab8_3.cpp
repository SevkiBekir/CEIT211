// *****************************************************
// * This example is about Calendar Lab1 HW            *
// * Created by Sevki Bekir                            *
// * Date: May 04, 2015                                *
// *****************************************************
// In the following program, use a class Money to add two
// dollar amounts.  The class is defined with a member
// function add that adds the dollars and cents amounts
// for the two inputs.  Complete the following program.
// (1$=100 cents)
// Modify the above program to include the following changes.
// 1) make function add of type Money.  Thus, this function now computes the sum of dollars and cents and returns it as Money object.
// 2) add a new friend function, subtract, that computes the subtraction of one money from the other.
// 3) Make read_money a member function.  Note that if you make read_money a member function, then you can use it to directly initialize the dollars and cents of an Money type object directly.

// *******************************************************
#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;
class Money
{
    public:
        Money();
        Money(int d, int c);
        friend Money add(Money m1, Money m2);
        friend Money substract(Money m1, Money m2);
        void display_money( );
        int getDollars()
        {
          return dollars;
        }
        int getCents()
        {
          return cents;
        }
    private:
        int dollars;
        int cents;
};
void read_money(int& d, int& c);
int main()
{
     int d, c;
     Money m1, m2, sum;
     sum = Money(0,0);
     read_money(d, c);
     m1 = Money(d,c);
     cout << "The first money is:";
     m1.display_money();
     read_money(d, c);
     m2 = Money(d,c);
     cout << "The second money is:";
     m2.display_money();
     cout << "The sum is:";
     add(m1,m2).display_money();
     cout << "The subtraction is:";
     substract(m1,m2).display_money();


     return 0;
}

//constructor to initialize data members to the parameters it receives
Money::Money(int d, int c)
{
  dollars=d;
  cents=c;
}
Money::Money()
{
  dollars=0;
  cents=0;
}
//add member function to add two Money objects and store the result in the resultant obj
 Money add(Money m1, Money m2)
{
    Money fMoney;
    fMoney.dollars=m1.dollars+m2.dollars;
   if((m1.cents+m2.cents)<100)
   {
     fMoney.cents=m1.cents+m2.cents;
   }
   else
   {
     fMoney.dollars+=(m1.cents+m2.cents)/100;
     fMoney.cents=(m1.cents+m2.cents)%100;
   }
   return fMoney;

}
//Substract
Money substract(Money m1, Money m2)
{
   Money fMoney;
   fMoney.dollars=abs(m1.dollars-m2.dollars);
  if((m1.cents-m2.cents)<100)
  {
    fMoney.cents=abs(m1.cents-m2.cents);
  }
  else
  {
    fMoney.dollars-=(m1.cents-m2.cents)/100;
    fMoney.cents=(m1.cents-m2.cents)%100;
  }
  return fMoney;

}
// display money
void Money::display_money()
{
    cout <<  dollars<<"."<<cents<<endl;
}


// read_money() function to input dolar and cent values and returning them as reference parameters
void read_money(int& d, int& c)
{
  cout<<"Enter dollars of money: ";
  cin>>d;
  cout<<"Enter cents of money: ";
  cin>>c;
  if(c<10)
  {
     c=c*10; //due to decimal...
  }
}

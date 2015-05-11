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
// Modify the above program to write add as a friend function.
// *******************************************************
#include <iostream>
#include <cstdlib>
using namespace std;
class Money
{
    public:
        Money();
        Money(int d, int c);
        friend void add(Money m1, Money m2);
        void display_money( );
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
     add(m1,m2);


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
 void add(Money m1, Money m2)
{
    int fDollars, fCents;
    fDollars=m1.dollars+m2.dollars;
   if((m1.cents+m2.cents)<100)
   {
     fCents=m1.cents+m2.cents;
   }
   else
   {
     fDollars+=(m1.cents+m2.cents)/100;
     fCents=(m1.cents+m2.cents)%100;
   }
   cout << fDollars<<"."<<fCents<<endl;

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
}

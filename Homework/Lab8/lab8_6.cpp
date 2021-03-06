// *****************************************************
// * This example is about Calendar Lab1 HW            *
// * Created by Sevki Bekir                            *
// * Date: May 12, 2015                                *
// *****************************************************
// In the following program, use a class Money to add two
// dollar amounts.  The class is defined with a member
// function add that adds the dollars and cents amounts
// for the two inputs.  Complete the following program.
// (1$=100 cents)
// In Money class overload >> to read an object of type Money
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
        friend Money operator+( Money&, Money&) ;
        friend Money substract(Money m1, Money m2);
        friend istream& operator>>(istream &myCin, Money &m);
        void display_money( );
        int getDollars()
        {
          return dollars;
        }
        int getCents()
        {
          return cents;
        }

        Money operator>(Money& m)
        {
          Money myMoney;
          if(this->dollars>m.dollars)
          {
            myMoney.dollars=this->dollars;
            myMoney.cents=this->cents;
          }
          else if(this->dollars==m.dollars)
          {
            if(this->cents>m.cents)
            {
              myMoney.dollars=this->dollars;
              myMoney.cents=this->cents;
            }
            else if(this->cents==m.cents)
            {
              cout <<"They are the same."<<endl;
              myMoney.dollars=this->dollars;
              myMoney.cents=this->cents;
            }

          }
          else
          {
            myMoney.dollars=m.dollars;
            myMoney.cents=m.cents;
          }



          return myMoney;
        }
    private:
        int dollars;
        int cents;
};
istream& operator>>(istream &myCin, Money &m){
	cout<<"Enter dollars of money (with operator >> overloading): ";
  myCin>>m.dollars;
	cout<<"Enter cents of money: (with operator >> overloading) ";
  myCin>>m.cents;

	return myCin;
}

void read_money(int& d, int& c);
int main()
{
     int d, c;
     Money m1, m2, sum,compare;
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
     sum=m1+m2;
     sum.display_money();
     cout << "The subtraction is:";
     substract(m1,m2).display_money();
     cout << "The comparation of moneys is (bigger one):";
     compare=m1>m2;
     compare.display_money();

     cout<<">> Operator >>"<<endl;
     cin>>m1;
     cout<<endl;
     cin>>m2;
     cout << "The first money is:";
     m1.display_money();
     cout<<endl;
     cout << "The second money is:";
     m2.display_money();
     cout<<endl;
     cout << "The sum is:";
     sum=m1+m2;
     sum.display_money();


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
Money operator+(Money& m1, Money& m2)
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

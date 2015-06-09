// *****************************************************
// * This example is about Lab6 HW                     *
// * Created by Sevki Bekir                            *
// * Date: May 18, 2015                                *
// *****************************************************
// 1. Write a program to simulate elections. For this purpose, create class Candidate with data
// members name (string), vote(int), percent (double), win_or_not(bloolean). Program will create
// an array of this class type for 10 candidates. It will input candidate names, then will update vote
// of each candidate as user inputs data until user stops. Once the votes are entered, program will
// calculate percentage of each candidate and update the percent of each candidate. It will then
// set the data member win_or_not then display the winner on the screen.
// Class will have:
// -Constructor to set vote, percent, win_or_not members to zero
// -member function to set the name to the parameter it receives
// -member function that receives an integer parameter and updates vote member by that
// parameter value
//-member function that sets win_or_not member to the parameter it receives
// -member functions that return each data member
// Sample run:
// Enter name of candidate 1: ahmet
// Enter name of candidate 2: ayse
// ……………
// Enter candidate name and vote: ayse 12345
// Do you wanna continue(Y/N): y
// ………….
// Enter candidate name and vote: veli 98765
// Do you wanna continue(Y/N): n
// The winner is ayse with 1234567 votes and 32%.
// *******************************************************
#include <iostream>
#include <ctime>
#include <cstdlib>
#define SIZE 10
using namespace std;
class Candidate
{
      string name;
      int vote;
      static int sum;
    
      double percent;
      bool winornot;

      public:
      Candidate()
      {
           vote=0;
           percent=0;
           winornot=0;
      }

      void setName(string name2)
      {
           name=name2;
      }

      void setVote(int number)
      {
           vote=number; sum += number;
      }

      void setWinorNot(bool WoN)
      {
           winornot=WoN;
      }

      void setPercent(double p)
      {
           percent=p;
      }

      string getName()
      {
           return name;
      }

      int getVote()
      {
           return vote;
      }

      static int getSum()
      {
           return sum;
      }

      double getPercent()
      {
           return percent;
      }

      bool getWinornot()
      {
           return winornot;
      }

};

int main()
{
    Candidate array[SIZE];
    string n;
    int v;
    double p;
    bool worn;


    for(int i=0;i<SIZE;i++)
    {
         cout<<"Please enter your name: ";
         cin>>n;
         array[i].setName(n);
    }

    char devam='y';

    while(devam!='n')
    {
         cout<<"Enter name and vote: ";
         cin>>n>>v;
         for(int j=0;j<SIZE;j++)
         {
              if(n==array[j].getName())
              {
                  array[j].setVote(v);
              }
         }
         cout << "Do you want to continue again?(y or n) ";
         cin >> devam;
    }

    double maxPercent=0;
    string maxName="";
    int maxVote;

    for(int p=0;p<SIZE;p++)
    {
        array[p].setPercent(array[p].getVote()*100/Candidate::getSum());
        if(array[p].getPercent()>maxPercent)
        {
           maxPercent=array[p].getPercent();
           maxName=array[p].getName();
           maxVote=array[p].getVote();
        }
    }

     cout<<"The winner is "<<maxName<<" with "<<maxVote<<" votes and "<<maxPercent<<"%"<<endl;


 return 0;
}

int Candidate::sum=0;

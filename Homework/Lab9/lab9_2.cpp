// *****************************************************
// * This example is about Calendar Lab1 HW            *
// * Created by Sevki Bekir                            *
// * Date: May 18, 2015                                *
// *****************************************************
// 2.	From a library, books can be borrowed by students and teachers. A student can borrow a book for 3 days and a teacher for 5 days. For every day exceeding the due day of a book, the student is expected to pay 2 YTL, and a teacher is required to pay 1 YTL. The system works on monthly basis. Develop  a C++ program composed of:

//-Person class including
//	- name, day_borrowed  data members
// - constructor to input the data members
// - print member function to output the data members
//- Student class derived from Person class including
// - student id data member
// - constructor to input the data members
// - calculate member function to output the amount to be paid if the due day is passed or how many days are left till the due day.
// - print member function to output the name, id and borrow day

// - Teacher class derived from Person class including
// - employee id data member
// - constructor to input the data members
// - calculate member function to output the amount to be paid if the due day is passed or how many days are left till the due day.
// - print member function to output the name, employee id and borrow day

// -main function to input a character (S for student, T for teacher) and according to the character read, create the required object dynamically. For the object created, output the amount to be paid if the borrow day is exceeded or the number of days left till the due day.

// *******************************************************
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

class Person{
      protected:
                string name;
                int day_borrowed;
      public:
             Person(){
                      cout << "Enter your name: ";
                      cin >> name;
                      do
                      {
                          cout << "Enter the day that you want to borrow(at most 31 days): ";
                          cin >> day_borrowed;
                          }
                      while(day_borrowed>31 || day_borrowed<0);
                  }
             void print(){
                  cout<<name << " borrowed: " << day_borrowed;
                  }
      };

class Student: public Person
{
      int studentID;
      public:
             Student(){
                       cout << "Enter your student ID: ";
                       cin >> studentID;
                       }

             void calculate(){
                  if(day_borrowed>3)
                       {
                           int extra_day=day_borrowed-3;
                           cout << "Because of the " << extra_day << " exceeding day, you need to pay " << 2*extra_day << " TL"<<endl;
                       }
                  else if(day_borrowed<=3)
                        {
                            int remaining_day=3-day_borrowed;
                            cout << "You have " << remaining_day << " days to deliver the book";
                        }

                       }


                  virtual void print(){

                       cout << name << "(" << studentID << ") has borrowed the book for " << day_borrowed << "days."<<endl;
                       }


     };

     class Teacher: public Person
     {
           int employeeID;
           public:
                  Teacher(){
                            cout << "Enter your employee ID: ";
                            cin >> employeeID;
                            }

                  void calculate(){
                       if(day_borrowed>5)
                            {
                                int extra_day=day_borrowed-5;
                                cout << "Because of the " << extra_day << " exceeding day, you need to pay " << 1*extra_day << " TL"<<endl;
                            }
                       else if(day_borrowed<=5)
                            {
                                int remaining_day=5-day_borrowed;
                                cout << "You have " << remaining_day << " days to deliver the book"<<endl;
                            }

                       }


                  virtual void print(){

                       cout << name << "(" << employeeID << ") has borrowed the book for " << day_borrowed << "days."<<endl;
                       }
           };

 int main(){

     char n;
            cout << "-----Welcome-----"<<endl;
            do
            {
            cout << "[S] Student"<<endl;
            cout << "[T] Teacher"<<endl;
            cout << "[Q] Quit"<<endl;
            cout << "Input a character: ";
            cin >> n;

            if(n=='S' || n=='s')
            {
                Student *s=new Student();
                s->print();
                s->calculate();
                delete s;
            }

            if(n=='T' || n=='T')
            {
                Teacher *t=new Teacher();
                t->print();
                t->calculate();
                delete t;
            }

            }while(n!='Q' && n!='q');
            return 0;
        }

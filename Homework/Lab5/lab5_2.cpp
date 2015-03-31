// *****************************************************// * This example is about MonthTeller by using class  *// * Created by Sevki Bekir                            *// * Date: March 31, 2015                              *// *****************************************************////  This program defines and tests a class named Month.//  The class has one member variable (an integer) to represent//  the month.  It has a constructor to set the month using//  the first three letters in the name of the month as three//  arguments, a constructor to set the month using an//  integer argument (1 for January, 2 for February, and so//  forth), a default constructor that sets the month to 1//  (January), an output function that outputs the month as an//  integer, an output function that outputs the month as the//  first three letters in the name of the month.//// *************************************************************#include <iostream>using namespace std;// Definition of the Month classclass Month{public:  Month (char firstLetter, char secondLetter, char thirdLetter);  // Precondition: The parameters contain the first three characters  // in the name of the month - all lowercase.  // Postcondition: The member variable month has been set to  // the integer value corresponding to the letters (1 for jan,  // (2 for feb, and so on). month is set to 0 and a message is  // printed if the letters do not correspond to a valid month.  Month (int monthNum);  // Precondition: The parameter monthNum contains a valid  // month number (1 - 12)  // Postcondition: The member variable month has been set to  // the value of the parameter monthNum.  Month();  // Sets the member variable month to 1 (defaults to January).  void outputMonthNumber();  // Postcondition: The member variable month has been output  // to the screen if it is valid; otherwise a "not valid"  // message is printed.  void outputMonthLetters();  // Postcondition: The first three letters of the name of the  // month has been output to the screen if the month is  // valid (1 - 12); otherwise a message indicating the month  // is not valid is output.private:  int month;};Month::Month(){  month = 1;}Month::Month(int monthNum){  month=monthNum;}Month::Month(char firstLetter, char secondLetter, char thirdLetter){  if(firstLetter=='j')  {    if(secondLetter=='a' && thirdLetter=='n')    {      month=1;    }    else if(secondLetter=='u')    {      if(thirdLetter=='n')        month=6;      else if(thirdLetter=='l')        month=7;    }  }  else if(firstLetter=='a')  {    if(secondLetter=='p' && thirdLetter=='r')    {      month=4;    }    else if(secondLetter=='u' && thirdLetter=='g')    {        month=8;    }  }  else if(firstLetter=='m')  {    if(secondLetter=='a')    {      if(thirdLetter=='r')        month=3;      else if(thirdLetter=='y')        month=5;    }  }  else if(firstLetter=='f'&& secondLetter=='e' && thirdLetter=='b')    month=2;  else if(firstLetter=='s'&& secondLetter=='e' && thirdLetter=='p')    month=9;  else if(firstLetter=='o'&& secondLetter=='c' && thirdLetter=='t')    month=10;  else if(firstLetter=='n'&& secondLetter=='o' && thirdLetter=='v')    month=11;  else if(firstLetter=='d'&& secondLetter=='e' && thirdLetter=='c')    month=12;  else    month=0;}void Month::outputMonthNumber(){  if(month>0 && month<13)    cout << month<<endl;  else    cout << "Not valid";}void Month::outputMonthLetters(){  string threeLetter;  if(month>0 && month<13)    {      if(month==1)        threeLetter="jan";      else if(month==2)        threeLetter="feb";      else if(month==3)        threeLetter="mar";      else if(month==4)        threeLetter="apr";      else if(month==5)        threeLetter="may";      else if(month==6)        threeLetter="jun";      else if(month==7)        threeLetter="jul";      else if(month==8)        threeLetter="aug";      else if(month==9)        threeLetter="sep";      else if(month==10)        threeLetter="oct";      else if(month==11)        threeLetter="nov";      else if(month==12)        threeLetter="dec";      cout << threeLetter << endl;    }  else    cout << "Not valid";}int main (){  //  // Variable declarations  //  int monthNum;  char letter1, letter2, letter3;    // first 3 letters of a month  char testAgain;                    // y or n - loop control  //  // Loop to test the constructors  //  do {    //    // Construct a default month    //    cout << endl;    cout << "Testing the default constructor ..." << endl;    Month defaultMonth;    defaultMonth.outputMonthNumber();    defaultMonth.outputMonthLetters();    //    // Construct a month using the constructor with one integer argument    //    cout << endl;    cout << "Testing the constructor with one integer argument..." << endl;    cout << "Enter a month number: ";    cin >> monthNum;    Month testMonth1(monthNum);    testMonth1.outputMonthNumber();    testMonth1.outputMonthLetters();    //    // Construct a month using the constructor with three letters as arguments    //    cout << endl;    cout << "Testing the constructor with 3 letters as arguments ..." << endl;    cout << "Enter the first three letters of a month (lowercase): ";    cin >> letter1 >> letter2 >> letter3;    cout << endl;    Month testMonth2(letter1, letter2, letter3);    testMonth2.outputMonthNumber();    testMonth2.outputMonthLetters();    //    // See if user wants to try another month    //    cout << endl;    cout << "Do you want to test again? (y or n) ";    cin >> testAgain;  }  while (testAgain == 'y' || testAgain == 'Y');  return 0;}
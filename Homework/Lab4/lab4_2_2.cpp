// *****************************************************
// * This example is about Class                       *
// * Created by Sevki Bekir                            *
// * Date: March 24, 2015                              *
// *****************************************************
#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
class CounterType
{
private:
  int count;

public:
  CounterType();
  //Initializes the count to 0.

  CounterType(int initCount);
  //Precondition: initCount holds the initial value for the count.
  //Postcondition:
  //  If initCount > 0,initializes the count to initCount.
  //  If initCount <= 0,initializes the count to 0.

  void increment();
  //Postcondition:
  //  The count is one more than it was.

  void decrement();
  //Postcondition:
  //  If the count was positive, it is now one less than it was.
  //  If the count was 0, it is still 0

  int getCount();
  void output(ostream& outStream);
  //Precondition: outStream is ready to write to
  //Postcondition: count has been written to outStream

};

CounterType::CounterType()
{
  count=0;
}
CounterType::CounterType(int initCount)
{
  if(initCount>0)
    count=initCount;
  else if(initCount<=0)
    count=0;
}
void CounterType::increment()
{
  count++;
}
void CounterType::decrement()
{
  if(count>0)
    count--;
  else if(count==0)
    count=0;
}
int CounterType::getCount()
{
  return count;
}

void CounterType::output(ostream& outStream)
{
  outStream.setf(ios::fixed);
  outStream.setf(ios::showpoint);
  outStream.precision(0);
  outStream << count<<endl;
}
	// --------------------------------
	// ----- ENTER YOUR CLASS DEFINITION HERE -----
	// --------------------------------



	// --------------------------------
	// --------- END USER CODE --------
	// --------------------------------


// --------------------------------
	// ----- ENTER YOUR MAIN FUNCTION TO TEST THE MEMBER FUNCTIONS HERE -----
	// --------------------------------



int main ()
{
  CounterType test(5);
  //test();
  //test(5);
  //test(0);
  test.getCount();
  test.increment();
  test.decrement();
  test.getCount();
  test.output(cout);

  return 0;
}

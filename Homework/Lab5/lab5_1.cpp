// *****************************************************// * This example is about Counter by using class      *// * Created by Sevki Bekir                            *// * Date: March 31, 2015                              *// *****************************************************//// Defines and tests class CounterType, which is used to count things.// CounterType contains both a default constructor and a constructor that// sets the count to a specified value, plus methods to increment, decrement,// return, and output the count.  The count is always nonnegative.//// **************************************************************************#include <iostream>#include <fstream>#include <cstdlib>using namespace std;class CounterType{private:  int count;public:  CounterType(){  //Initializes the count to 0.  count=0;}  CounterType(int initCount){  //Precondition: initCount holds the initial value for the count.  //Postcondition:  //  If initCount > 0,initializes the count to initCount.  //  If initCount <= 0,initializes the count to 0.  if(initCount>0)    count=initCount;  else if(initCount<=0)    count=0;  }  void increment(){  //Postcondition:  //  The count is one more than it was.  count++;}  void decrement(){  //Postcondition:  //  If the count was positive, it is now one less than it was.  //  If the count was 0, it is still 0  if(count>0)    count--;  }  int getCount(){    return count;  }  void output(ostream& outStream){  //Precondition: outStream is ready to write to  //Postcondition: count has been written to outStream  outStream<< count<<endl;  }};	int main()  {    CounterType my(5);    my.decrement();    my.output(cout);    CounterType test;    test.increment();    test.output(cout);    return 0;  }
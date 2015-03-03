// *****************************************************
// * This example is about Constructor and Destructor. *
// * Created by Sevki Bekir                            *
// * Date: Feb 23, 2015                                *
// *****************************************************
#include <iostream>
using namespace std;

class cLength
{
public:
  void setLength(double len);
  void getLength(void);
  cLength();
  ~cLength();

private:
  double length;


};

cLength::cLength(void){
cout << "Constructor is created.\n";
}

cLength::~cLength(void){
  cout << "Destructor is created and all data is deleted.\n";

}
void cLength::setLength(double len)
{

  length=len;
}

void cLength::getLength()
{
  cout  << length << "\n";

}



int main() {

cLength lengthOne;
lengthOne.setLength(4.2);
lengthOne.getLength();





return 0;
}

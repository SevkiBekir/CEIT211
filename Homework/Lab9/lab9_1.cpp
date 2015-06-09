// *****************************************************
// * This example is about Calendar Lab1 HW            *
// * Created by Sevki Bekir                            *
// * Date: May 18, 2015                                *
// *****************************************************
// 1.	A polynomial such as: can be represented as an array in which every element of the array is  a term of the polynomial. The index of the array element is the exponent of a term and the array element holds the coefficient.

// Construct a polynomial class which dynamically allocate an array for a polynomial of degree 5(maximum exponent).The class should include:
// •	a pointer to an array
// •	a constructor which creates an array elements dynamically for 6 elements
// •	an overloaded stream insertion operator >> to input array elements.
// •	a member function overloaded + operator (prefix) which will find and return the derivative of the polynomial
// The derivative of a polynomial
// •	destructor to destroy the array
// print() member function to display the coefficients
// Write main function to create a polynomial and test the functions described above.
// *******************************************************
#include <iostream>
#include <ctime>
#include <cstdlib>
#define SIZE 5
using namespace std;
class Polynomial
{
    private:
        int degree;
        int* coeffs;
    public:
        //constructors
        Polynomial() {
              degree=0;
              coeffs=new int[1];
        }
        Polynomial(int deg)
        {
              degree=deg;
              coeffs=new int[deg+1];
        }

        void GetCoeffs(istream& myIn)
        {
          for (int i=degree; i>=0; i--)
          {
            myIn >> coeffs[i];
          }
          myIn.ignore();
        };


        void Print()
        {
          for (int i=degree; i>=0; i--)
          {

              if (coeffs[i]==0)
              {
                 continue;
              }

              else if (coeffs[i]>=0)
              {
                  if (i!=degree)
                      cout << " + ";
                  cout << coeffs[i];


              }
              else
              {
                  if (coeffs[i]<0)
                      cout << " - ";
                      cout << 0-coeffs[i];
              }
              if (i>1)
                  cout << "x^" << i;
              else if (i==1)
                  cout << "x";

          }
        };

        Polynomial operator+()
        {
          Polynomial C(5);
          for (int i=degree; i>=1; i--)
              {
                C.coeffs[i-1]=coeffs[i]*i;
              }

          return C;
        };
        friend istream &operator>>( istream  &input, Polynomial &P )
      {

         for (int i=P.degree; i>=0; i--)
          {
            // cout<<i<<". Degree please enter (^"<<i<<")")<<endl;
             input>>P.coeffs[i];
          }

         return input;
      }

};


int main()
{
    Polynomial A(SIZE);

    cin>>A;
    A.Print();
    cout<<endl;

    Polynomial C(SIZE);
    C=+A;

    C.Print();
  
    return 0;
}

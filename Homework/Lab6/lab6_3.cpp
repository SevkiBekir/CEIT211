// *****************************************************
// * This example is about Lab6 HW                     *
// * Created by Sevki Bekir                            *
// * Date: May 18, 2015                                *
// *****************************************************
// 3. Write a program to implement composition.
// Class Book will hold information name,book id, price of books. It will have a constructor to
// initialize the data members by user input. It will have set and get functions as necessary.
// Write another class Writer to hold info of a writer. It will have name of the writer and array of
// books to hold books’ data of the writer. Constructor will initialize the data members by user
// input. It will have a member function that will input book id and number of sold for 10 books
// and will calculate and display the money paid to the writer.
// *******************************************************
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <math.h>
#define SIZE 3
using namespace std;
class Book
{
    string name;
    int bookId;
    int price;
public:
    Book()
    {
        cout<<"Enter Book Name, Id, Price respectively: ";
        cin>>name>>bookId>>price;
    }
    int getid()
    {
        return bookId;
    }
    string getName()
    {
        return name;
    }
    int getPrice()
    {
        return price;
    }
    
    void setid(int ID)
    {
        bookId=ID;
    }
    void setName(string NAME)
    {
        name=NAME;
    }
    
};

class Writer
{
    string writerName;
    Book *mybook;
public:
    Writer()
    {
        cout<<"Enter writer's name: ";
        cin>>writerName;
        mybook = new Book[3];
    }
    
    void calculate()
    {
        int total=0,n,i;
        for(i=0;i<SIZE;i++)
        {
            cout<<"Enter number of sold books: "<<mybook[i].getName()<<" ";
            cin>>n;
            total= total + mybook[i].getPrice()*n;
        }
        cout<<"Total income is "<<total<<endl;
    }
};

int main()
{
    Writer myWriter;
    myWriter.calculate();
    return 0;
}
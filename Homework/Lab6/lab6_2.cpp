// *****************************************************
// * This example is about Lab6 HW                     *
// * Created by Sevki Bekir                            *
// * Date: May 18, 2015                                *
// *****************************************************
// 2. Write a class to represent a line ax+b=c. Assume both a and be b cannot be zero. If a =0, it is a
// horizontal line, if b=0 it is a vertical line. The slope is defined as –a/b. Two lines are parallel if
// they have the same slope or if they both are vertical lines. Two lines are perpendicular if one is
// vertical and other is horizontal or if product of their slope is -1. Class will have:
// a. Data members a,b,c
// b. Constructor that inputs a,b,c from user
// c. Member function findSlope() finds the slope if it is non vertical
// d. Member function that determines if two lines are parallel.
// e. Friend function that determines if two lines are perpendicular
// f. Member function that finds the point of intersection if the lines are not parallel.
// g. Necessary set and get functions
// Test your program for two lines which are parallel, perpendicular and non parallel
// *******************************************************
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <math.h>
using namespace std;
class Line{
    int a,b,c;
public:
    
    Line(){
        cout<<"Enter line a(x)+b(y)=c : "<<endl;
        cout<<"Enter a :";cin>>a;
        cout<<"Enter b :";cin>>b;
        cout<<"Enter c :";cin>>c;
        
    };
    double findSlope(){
        
        double slope=0.0;
        
        if(b!=0)
        {
            slope=(1.0*(-a)/b);
        }
        return slope;
    };
    void detParallel(Line &secondLine){
        
        if(b==0 && secondLine.getb()==0)
            cout<<"The two lines are parallel because they are vertical lines.\n";
        else if(((-a)/b)==((-secondLine.geta())/secondLine.getb()))
            cout<<"The two lines are parallel."<<endl;
        else
            cout<<"They are not parallel."<<endl;
        
    };
    friend void findIntersection(Line,Line);
    friend void detPer(Line &l1,Line &l2);
    int geta(){return a;};
    int getb(){return b;};
    int getc(){return c;};
    
};



void detPer(Line &l1,Line &l2){
    
    if((((-1)*l1.a)/l1.b)*(((-1)*l2.a)/l2.b)==(-1))
    {
        cout<<"They are perpendicular lines..\n";
    }
    else
        cout<<"They are not perpendicular..\n";
    
}

void findIntersection(Line ln2,Line ln1){
    
    double intery,interx;
    
    interx=1.0*((ln2.getb()*ln1.getc())-(ln2.getc()*ln1.getb()))/((ln1.geta()*ln2.getc())-(ln2.geta()*ln1.getc()));
    
    intery=1.0*((ln1.geta()*interx)+ln1.getb())/ln1.getc();
    
    cout<<"Intersection point is ("<<interx<<","<<intery<<")...\n";
}

int main(){
    Line line1;
    Line line2;
    
    cout<<"Line 1 slope: "<<line1.findSlope()<<endl;
    cout<<"Line 2 slope: "<<line2.findSlope()<<endl;
    cout<<"Are they parellel? : ";
    line1.detParallel(line2); //member function
    detPer(line1,line2);      //friend function
    findIntersection(line2,line1);
    
    return 0;
}
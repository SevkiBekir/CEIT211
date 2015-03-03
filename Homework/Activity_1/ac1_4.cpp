// *****************************************************
// * This example is Arrays on the Menu Homework.	   *
// * Created by Sevki Bekir                            *
// * Date: March 1, 2015                               *
// *****************************************************

#include <iostream>
#include <stdlib.h>
#include <string>
#define SIZE 7
using namespace std;


int main()
{
	// 1=Eagle Way, 2=I-234 3=Daltry Lane 4=Park Street
	double cost[4][4]={0,1.33,1.56,2.28,1.33,0, 0.58, 1.33, 1.56, 0.58,0,0.95, 2.28, 1.33, 0.95, 0};
	while(1)
	{
		int start=-1,end=-1;
		cout << "Welcome to Cost Meter. There are two steps.\nThe first question is Where are you?\nPlease select the number for \n[1]=Eagle Way [2]=I-234 [3]=Daltry Lane [4]=Park Street\n";
		cin >> start;
		if(start<0 || start>4)
		{
			cout<< "Please write right selection..Try Again\n";
			continue;
		}
		cout << "Now, Where do you arrive?\nPlease select the number for \n[1]=Eagle Way [2]=I-234 [3]=Daltry Lane [4]=Park Street\n";
		cin >> end;
		if(end<0 || end>4)
		{
			cout <<"Please write right selection..Try Again\n";
			continue;
		}
		cout << "Calculating...\n";
		if(start==end)
			cout << "Calculation is successfull\nCost is " << cost[start-1][end-1] << " because you are in which you want to arrive. :)\n"; 
		else
			cout << "Calculation is successfull\nCost is " << cost[start-1][end-1] << "\n"; 
		cout << "Do you want to calculate again?\n[1]=Yes [2]=No\n";
		cin >> start;
		if(start==1)
			continue;
		else if (start==2)
			exit(0);
	}
	return 0;
}

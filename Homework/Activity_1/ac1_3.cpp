// *****************************************************
// * This example is Parallel Arrays Homework.		   *
// * Created by Sevki Bekir                            *
// * Date: March 1, 2015                               *
// *****************************************************

#include <iostream>
#include <stdlib.h>
#include <string>
#define SIZE 7
using namespace std;

int searchArray(string arrayS[][2],int type, string searchString)
{
	int i;
	if(type==0 || type==1)
	{
		for(i=0;i<SIZE;i++)
		{
			if(searchString==arrayS[i][type])
				
				return i;
			else 
				continue;
			
		}
		if(i==SIZE)
			return -1;
	}
	
	else
		return -1;
}

int main()
{
	//string model[]={"0123AV","3938DD","4384CD","5162WD","5673AX","6783EW","7892GW"};
	//string bin[]={"A1","B12","D7","B3","C13","A4","B5"};
	string allString[SIZE][2]={"0123AV","A1","3938DD","B12","4384CD","D7","5162WD","B3","5673AX","C13","6783EW","A4","7892GW","B5"};
	int selection;
	string search;
	while(1)
	{
		search="";
		cout << "Please select which type you want to search.\n [0]=>by model\n [1]=>by bin\n [2]=>exit\n";
		cin >> selection;
		if(selection==0 || selection==1)
		{
			cout << "Now, write search text\n";
			cin >> search;
			int result=-1;
			result=searchArray(allString,selection,search);
			if(result==-1)
				cout << "Not Found\n";
			else if(selection==0)
				cout << "This is found "<< allString[result][1]<<"\n";
			else if(selection==1)
				cout << "This is found "<< allString[result][0]<<"\n";
			cout << "Do you want to search again?\n [1]=> Yes \t [0]=>No\n";
			cin >> selection;
			if(selection==1)
				continue;
			else
				exit(0);
		}
		
		else if (selection==2)
			exit(0);
		else
			continue;
	}
	return 0;
}

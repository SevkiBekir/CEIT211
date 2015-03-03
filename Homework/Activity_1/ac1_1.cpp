// *****************************************************
// * This example is about Arrays and Whole Numbers HW *
// * Created by Sevki Bekir                            *
// * Date: March 2, 2015                               *
// *****************************************************
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <fstream>
#define SIZE 100

using namespace std;

void createNumber()
{
    ofstream file;
    file.open("scores.txt");
    srand (time(NULL));
    int randomNumber, i;
    for (i=0; i<SIZE; i++) {
        randomNumber=rand()%(SIZE+1);
        file << randomNumber << "\n";
    }
    file.close();
}


void readNumber()
{
    string line;
    ifstream file ("scores.txt");
    if (file.is_open())
    {
		
        int scores[SIZE];
        int i=0;
        while ( getline (file,line) )
        {
            scores[i]=atoi(line.c_str());
            //cout << scores[i] << '\n';
            i++;
        }
        file.close();
        
        //Scores
    
        int counterScores[SIZE],j,value;
		for (j=0; j<SIZE; j++)
		{
			counterScores[j]=0;
		}
		for(i=0;i<SIZE;i++)
		{
			value=scores[i];
			counterScores[value-1]++;
		}
		
		
		//PRINT
		 cout << "Calculating...\nThis operation is succesful!\nScores\tOccured\n";
		for(i=SIZE-1;i>=0;i--)
		{
			if(counterScores[i]!=0)
				printf("%d\t%d\n",i+1,counterScores[i]);
		   
		}
    }
    else cout << "I cannot open file.";
}


int main() 
{
    createNumber();
    readNumber();
    
    
return 0;
}

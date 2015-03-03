// *****************************************************
// * This example is average function. 				   *
// * Created by Sevki Bekir                            *
// * Date: March 1, 2015                               *
// *****************************************************

#include <iostream>

using namespace std;

int average (int Myarray[],int size)
{
	
	int sum=0,i;
	
	
	for(i=0;i<size;i++)
	{
		sum+=Myarray[i];
		cout << Myarray[i] <<"=>\t Sum="<<sum<<"\n";
		
	}
	return sum/size;
}

int main()
{
	int deneme[]={400,100,500,600};
	int size=sizeof(deneme)/sizeof(int);
	int printAverage=average(deneme,size);
	cout <<"Average=" <<printAverage<<"\n";
	return 0;
}

// *****************************************************
// * This is Letter Grade Calculator  				         *
// * Created by Sevki Bekir                            *
// * Date: June 10, 2015                               *
// *****************************************************
#include <iostream>
#define QUIZNUMBER 7
#define LABNUMBER 9
using namespace std;



int main()
{
	cout << "Hosgeldiniz. CEIT 211 Not hesaplama" << endl;
	cout << "Program genel not çıktısı verip bu tabloya göre harf notunuzu öğrenebilirsiniz."<<endl;
	cout << "90-100: AA"<<endl;
	cout<< "85-89: BA"<<endl ;
	cout<<"80-84: BB" <<endl;
	cout<< "75-79: CB" <<endl;
	cout<< "70-74: CC" <<endl ;
	cout<<"65-69: DC" <<endl;
	cout<< "60-64: DD" <<endl;
	cout<< "50-59: FD" <<endl;
	cout<< "0-49: FF"<<endl;
	cout << "Midterm 1 giriniz:";
	double  mt1, mt2, final, lab[9], quiz[7];
	cin >> mt1;
	cout << "Midterm 2 giriniz:";
	cin >> mt2;
	cout << "Final notu giriniz:";
	cin >> final;
	cout << "Lab notlarını sıra ile giriniz:";
	int i;
	double labTotal=0;
	for (i=0;i<LABNUMBER;i++)
	{
		cin >> lab[i];
		labTotal+=lab[i];

	}
	labTotal/=LABNUMBER;
	double quizTotal=0;
	cout << "Quiz notlarını sıra  giriniz:";
	for(i=0;i<QUIZNUMBER;i++)
	{
		cin >>quiz[i];
		quizTotal+=quiz[i];

	}
	quizTotal/=QUIZNUMBER;
	final=((final*30)/100)+((mt2*20)/100)+((mt1*20)/100)+((labTotal*25)/100)+((quizTotal*5)/100);
	cout << "Sonuc:"<< final<<endl;

	return 0;
}

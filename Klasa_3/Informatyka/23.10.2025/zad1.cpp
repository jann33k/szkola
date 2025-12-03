#include<iostream>
using namespace std;
main()
{
	double a,b,c,d,suma,roznica,iloczyn,wynik;
	cout<<"Podaj a, b, c, d   "<<endl;
	cin>>a;
	cin>>b;
	cin>>c;
	cin>>d;
	suma = a+b;
	roznica = c-d;
	iloczyn = suma*roznica;
	if (roznica == 0) {
		cout<<"Blad! Nie dzielimy przez 0!"<<endl;
	}
	else {
		wynik = suma+(d/roznica)-c+2*a;
		cout<<"suma = "<<suma<<", roznica = "<<roznica<<", iloczyn = "<<iloczyn<<", wynik = "<<wynik<<endl;
	}
}

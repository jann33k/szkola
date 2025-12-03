#include<iostream>
using namespace std;
main()
{
	float n, a, wynik, wynik1;
	cout<<"Podaj n oraz a:\n"<<endl;
	cin>>n;
	cin>>a;
	
	if (n==-4) {
		cout<<"Blad"<<endl;
	}
	else {
		wynik = (4+(n-1))/(5+n-1);
		wynik1 = 2*(a-(n+1));
		cout<<"Wynik = "<<wynik<<endl;
		cout<<"Wynik1 = "<<wynik1<<endl;
	}
}

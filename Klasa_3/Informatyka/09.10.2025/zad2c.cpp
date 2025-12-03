#include<iostream>
using namespace std;
main()
{
	int a, b, n; //a to 1 liczba, b to co ile się wypisuje kolejna, n to ile ma być znaków
	a=1;
	b=3;
	n=30;
	
	for (int i = 0; i < n; i++) {
		cout<<a<<""<<endl;
		a=a+b;
	}
	
	return 0;
}

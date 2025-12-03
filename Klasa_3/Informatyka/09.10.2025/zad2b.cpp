#include<iostream>
using namespace std;
main()
{
	int a, b, n;
	a=20;
	b=5;
	n=30;
	
	for (int i = 0; i < n; i++) {
		cout<<a<<""<<endl;
		a=a+b;
	}
	
	return 0;
}

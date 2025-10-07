#include<iostream>
using namespace std;
main()
{
	double M,N,X,A,B,C,D,SUMA,ROZNICA,FORMULA1,FORMULA2;
	cout<<"Podaj M, N, X";
	cin>>M;
	cin>>N;
	cin>>X;

	A = X+2;
	cout<<"A = "<<A<<endl;
	B = M+A;
	cout<<"B = "<<B<<endl;
	SUMA = M+N+X;
	cout<<"SUMA = "<<SUMA<<endl;
	C = SUMA-B;
	cout<<"C = "<<C<<endl;
	
	if(C==0) {
		cout<<"Blad"<<endl;
	}
	else {
		ROZNICA = (M-X)/C;
		cout<<"ROZNICA = "<<ROZNICA<<endl;
	}
	
	if(B==0) {
		cout<<"Blad"<<endl;
	}
	else {
		FORMULA1 = (A+2)/B;
		cout<<"FORMULA 1 = "<<FORMULA1<<endl;
		FORMULA2 = (A/B)+(2+B);
		cout<<"FORMULA 2 = "<<FORMULA2<<endl;
	}
	
}


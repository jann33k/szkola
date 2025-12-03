#include<iostream>
using namespace std;
main()
{
	double a,b,c,d,e,f,g,h,i,j,w,w1,w2,w3,w4,w5,w6,w7,w8,w9,w10,w11,w12,w13,w14;
	cout<<"Podaj e, f, g, h, i, j ";
	cin>>e;
	cin>>f;
	cin>>g;
	cin>>h;
	cin>>i;
	cin>>j;
	a = 2;
	b = 5;
	c = 10;
	d = 3;
	w1 = a+b+c+f;
	w2 = (j-h)/2;
	w3 = w1-w2;
	w4 = f-b;
	w5 = g-e;
	if(w5==0) {
		cout<<"Blad"<<endl;
	}
	else {
		w6 = w4/w5;
	}
	
	if(w6==0) {
		cout<<"Blad"<<endl;
	}
	else {
		w7 = w3/w6;
	}
	
	w8 = 2*(a+c);
	if(d==2 and d==0) {
		cout<<"Blad"<<endl;
	}
	else {
		w9 = b/(d-2);
		w12 = c/d;
	}
	w10 = w8+w9;
	w11 = (j-h)/2;
	w13 = w11+w12;
	if(w13==0) {
		cout<<"Blad"<<endl;
	}
	else {
		w14 = w10/w13;
	}
	
	if(w14==0) {
		cout<<"Blad"<<endl;
	}
	else {
		w = w7/w14;
		cout<<"W = "<<w<<endl;
	}
}

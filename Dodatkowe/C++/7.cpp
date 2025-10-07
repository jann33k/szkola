#include<iostream>
using namespace std;
main()
{
	double a,b,c,w,w1,w2,w3,w4,w5;
	cout<<"Podaj a, b, c";
	cin>>a;
	cin>>b;
	cin>>c;
	
	int opcja;
	if(a==b and b==0 and b==5) {
		cout<<"Blad"<<endl;
	}
	else {
		cout<<"Podaj opcje 1, 2, 3, 4, 5, 6"<<endl;
		cin>>opcja;
		switch(opcja)
			{
				case 1:
					w = a-b;
					cout<<"w = "<<w<<endl;
				break;
				
				case 2:
					w = a-b;
					cout<<"w = "<<w<<endl;
					if(w==0){
						cout<<"Blad"<<endl;
					}
					else {
						w1 = (a+b)/w;
						cout<<"w1 = "<<w1<<endl;
						w2 = (2*a+a*b)/w;
						cout<<"w2 = "<<w2<<endl;
					}
				break;
				
				case 3:
					
					
			}

		w3 = 2*b+(a-b)/b*(a/(5-b));
		cout<<"w3 = "<<w3<<endl;
		w4 = (a+b)*(a-3)+5*(a*b);
		cout<<"w4 = "<<w4<<endl;
		w5 = (a/b)+c;
		cout<<"w5 = "<<w5<<endl;
	}
	return 0;
}


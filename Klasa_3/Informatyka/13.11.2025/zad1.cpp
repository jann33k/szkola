#include <iostream>
#include <cmath>
using namespace std;
main()
{
	double a,b,c,d,x,y,z;
    const int n = 10;
    double wynik[n];
    int wybor;
    
    cout << "Podaj a, b, c, d, x, y, z: ";
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    cin>>x;
    cin>>y;
    cin>>z;
    
    wynik[0] = 1;
    cout << "\nwybierz dzialanie (1-9): ";
    cin >> wybor;
    
    if (wybor < 1 || wybor > 9) {
        cout << "bledny wybor!" << endl;
        return 1;
    }
    
    for (int i=1; i<n; i++) {
        switch (wybor) {
            case 1:
                wynik[i] = wynik[i-1]+2*x*y*c+i;
                break;
            case 2:
                wynik[i] = wynik[i-1]+(6*x-2)*(3*y+8*i);
                break;
            case 3:
                wynik[i] = wynik[i-1]+12*(a*b-z)+6*(a-b)-i;
                break;
            case 4:
                wynik[i] = wynik[i-1]+3.0/(4*(x+y)+9*i);
                break;
            case 5:
                wynik[i] = wynik[i-1]+a*(b-i)*pow((2*z+8),3);
                break;
            case 6:
                wynik[i] = wynik[i-1]+a*b/2*(x+y)+i;
                break;
            case 7:
                wynik[i] = wynik[i-1]+3*z+8*a-2*z*i*b;
                break;
            case 8:
                if ((3*d-1)==0) {
                    cout<<"blad ; nie dziel przez 0"<<i<<endl;
                    return 1;
                }
                wynik[i] = wynik[i-1]+2*b+(3*d-1)/(2+i);
                break;
            case 9:
                if (d==0) {
                    cout<<"blad ; nie dziel przez 0"<<i<< endl;
                    return 1;
                }
                wynik[i] = wynik[i-1]+12*(y + c)/2-d*i;
                break;
        }
    }
    
    cout << "\nwyniki obliczen:\n";
    for (int i=0; i<n; i++) {
        cout<<"wynik["<<i<<"] = "<<wynik[i]<<endl;
    }
    
    return 0;
}

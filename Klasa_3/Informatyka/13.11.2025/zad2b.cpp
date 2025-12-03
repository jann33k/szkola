#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Podaj ilosc liczb: "<<endl;
    cin>>n;

    int tab[n];

    tab[0] = 5;
    for (int i=1; i<n; i++) {
        tab[i] = tab[i-1]+2;
    }
    
    for (int i=0; i<n; i++) {
        cout<<"liczby = "<<tab[i]<<endl;
    }

    return 0;
}


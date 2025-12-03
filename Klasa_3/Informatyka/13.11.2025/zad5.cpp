#include <iostream>
using namespace std;
main() {
    int n = 350;
    int tab[n];

    tab[0] = -4;

    for (int i=1; i<n; i++) {
        tab[i]=tab[i-1]+2;
    }

    cout<<"1 element: "<<tab[0]<<endl;
    cout<<"20 element: "<<tab[19]<<endl;
    cout<<"200 element: "<<tab[199]<<endl;
    cout<<"349 element: "<<tab[348]<<endl;

    return 0;
}


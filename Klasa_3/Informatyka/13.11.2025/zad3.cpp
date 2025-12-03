#include <iostream>
using namespace std;
main() {
    int n=15;
    int a[n],b[n],c[n];

    cout << "Podaj 15 liczb do tablicy A:\n";
    for (int i=0; i<n; i++) {
        cout<<"a["<<i+1<<"]: "<<endl;
        cin>>a[i];
    }

    cout << "\nPodaj 15 liczb do tablicy b:\n";
    for (int i=0; i<n; i++) {
        cout<<"b["<<i+1<<"]: "<<endl;
        cin>>b[i];
    }

    for (int i=0; i<n; i++) {
        c[i]=a[i]+b[i];
    }

    cout<<"\nSuma elementow tablic (tylko wybrane):\n"<<endl;
    cout<<"1: "<<c[1]<<endl;
    cout<<"5: "<<c[5]<<endl;
    cout<<"12: "<<c[12]<<endl;
    cout<<"15: "<<c[15]<<endl;

    return 0;
}

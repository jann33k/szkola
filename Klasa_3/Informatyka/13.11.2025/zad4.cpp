#include <iostream>
using namespace std;
main() {
    int n=10;
    int a[n],b[n],c[n];

    cout<<"Podaj 10 liczb do tablicy a:\n"<<endl;
    for (int i=0; i<n; i++) {
        cout<<"a["<<i+1<<"]: "<<endl;
        cin>>a[i];
    }

    cout<<"\nPodaj 10 liczb do tablicy b:\n"<<endl;
    for (int i=0; i<n; i++) {
        cout<<"b["<<i+1<<"]: "<<endl;
        cin>>b[i];
    }

    for (int i=0; i<n; i++) {
        c[i]=a[i]-b[i];
    }

    cout<<"\nRoznice wybranych elementow tablic:\n"<<endl;
    cout<<"1: "<<c[1]<<endl;
    cout<<"4: "<<c[4]<<endl;
    cout <<"9: "<<c[9]<<endl;

    return 0;
}

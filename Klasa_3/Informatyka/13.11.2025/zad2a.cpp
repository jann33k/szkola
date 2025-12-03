#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Podaj ilosc liczb: "<<endl;
    cin>>n;

    int liczba=5;
    cout<<"liczba = "<<liczba<<endl;

    for (int i=1; i<n; i++) {
        liczba+=2;
        cout<<"liczba = "<<liczba<<endl;
    }
    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int dmin, dmax;
    cout << "pershe chuslo: ";
    cin >> dmin;
    cout << "druge chuslo: ";
    cin >> dmax;
    
    cout << "vsi chusla yaki ye:" << endl;
    for (int a = dmin; a <= dmax; a++) {
        cout << a << endl;
    }
    cout << endl;

    cout << "parni chusla:" << endl;
    for (int a = dmin; a <= dmax; a++) {
        if (a % 2 == 0) {
            cout << a << endl;
        }
    }
    cout << endl;

    cout << "ne parni chusla:" << endl;
    for (int a = dmin; a <= dmax; a++) {
        if (a % 2 != 0) {
            cout << a <<endl;
        }
    }
    cout << endl;

    cout << "kratni7 chusla:" << endl;
    for (int a = dmin; a <= dmax; a++) {
        if (a % 7 == 0) {
            cout << a << " ";
        }
    }
}






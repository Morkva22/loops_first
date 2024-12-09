#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "vvedit chuslo ne bilshe 500: ";
    cin >> a;

    if (a <= 500) {
        int sum = 0;
        for (int i = a; i <= 500; ++i) {
            sum += i;
        }
        cout << "suma chusel vid " << a << " do 500 = " << sum << endl;
    } else {
        cout << "Chuslo bilshe 500, pakedava!!" << endl;
        
    }
}


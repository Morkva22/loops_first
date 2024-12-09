#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "vvedit chuslo ne bilshe 20 i ne menshe 1: ";
    cin >> a;
    int dob = 1;
    if (1 <= a && a<= 20) {
        
        for (int i = a; i <= 20;i++ ) {
            dob  *= i;
        }
        cout << "dobytok chusel " << a << " do 20 = " << dob << endl;
    } else {
        cout << "Chuslo bilshe 20 abo menshe 1, nizya tak)))0)))0)0))" << endl;
        
    }
    
}
#include <iostream>
using namespace std;

int main()
{
    int n;
    int sum = 0;
    cout << "enter number(0 to stop): ";
    while (true){
        cin >> n;
        if (n == 0){
            break;
        }
        sum += n;
    }
        
        cin >> n;
        cout << sum<< endl;
    }



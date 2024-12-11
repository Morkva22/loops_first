#include <iostream> Користувач вводить дві межі діапазону. Порахувати суму всіх чисел діапазону.
using namespace std;

int main() {
    int a;
    int b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    int sum = 0;
    for (int i = a; i <= b; i++) {
        sum += i;
    }
    cout << "Sum: " << sum << endl;
}













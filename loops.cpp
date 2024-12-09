/*#include <iostream>
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
}*/

//Напишіть програму, яка запитує два цілих числа x і y, після чого обчислює і виводить значення x у степені y.


/*#include <iostream>
using namespace std;

void main()
{
    int x;
    int y;
    cout<<"vvedu X yak osnovu"<<endl;
    cin >> x;
    cout<<"vvedu Y yak stepin"<<endl;
    cin >> y;
    if (y<64) {
    int result = pow(x,y);
    cout << "x^y = " << result << endl;
    }
    else
    {
        cout<<"y bilshe 64,no no no, perepobu"<<endl;
    }
}\*/

/*#include <iostream>
using namespace std;

int main()
{
    double i  = 0;
    cout<<"seredne arefmetuchne chusel vid 1 do 1000 = "<<(1.0+1000.0)/2.0<<endl;
    i++;
}Знайти добуток усіх цілих чисел від a до 20 (значення a вводиться з клавіатури: 1 <=a <= 20).
*/


/*#include <iostream>
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
    
} */
















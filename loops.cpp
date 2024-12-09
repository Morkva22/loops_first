#include <iostream>
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
}
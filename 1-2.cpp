#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter all sides: ";
    cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a)
    {
        cout << "Possible";
    }
    else
    {
        cout << "Impossible";
    }
}
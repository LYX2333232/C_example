#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "x=";
    cin >> x;
    switch (x)
    {
    case 1:
        cout << "one  ";
    case 2:
        cout << "two  ";
    case 3:
        cout << "three  ";
    default:
        cout << "other  ";
    }
    cout << endl;
    switch (x)
    {
    case 1:
        cout << "one";
        break;
    case 2:
        cout << "two";
        break;
    case 3:
        cout << "three";
        break;
    default:
        cout << "other";
    }
    cout << endl;
}
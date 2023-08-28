#include <iostream>
using namespace std;
int max(int, int);
int max(int, int, int);
int main()
{
    cout << max(3, 5) << endl;
    cout << max(4, 8, 5) << endl;
}
int max(int a, int b)
{
    return a > b ? a : b;
}
int max(int a, int b, int c)
{
    int t;
    t = max(a, b);
    return max(t, c);
}
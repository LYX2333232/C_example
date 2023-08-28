#include <iostream>
using namespace std;
long fact(int n)
{
    if (n == 0)
        return 1; //递归终止情况
    else
        return n * fact(n - 1); //递归调用
}
int main()
{
    int n;
    cout << "Enter n(>=0):";
    cin >> n;
    cout << fact(n) << endl;
}
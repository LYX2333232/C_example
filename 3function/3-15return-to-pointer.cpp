#include <iostream>
using namespace std;
int *maxpoint(int *x, int *y) //������������ָ��
{
    if (*x > *y)
        return x;
    else
        return y;
}
int main()
{
    int a, b;
    cout << "Input a,b:";
    cin >> a >> b;
    cout << *maxpoint(&a, &b) << endl;
}
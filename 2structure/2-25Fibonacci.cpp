#include <iostream>
using namespace std;
int main()
{
    int n, i, a0, a1, a2;
    cout << "n=";
    cin >> n;
    a0 = 0; //�Ե�0���ֵ
    a1 = 1; //�Ե�1���ֵ
    cout << a0 << '\t' << a1 << '\t';
    for (i = 3; i <= n; i++)
    {
        a2 = a0 + a1; //�������ֵ
        cout << a2 << '\t';
        if (i % 10 == 0)
            cout << endl;
        a0 = a1;
        a1 = a2;
    }
    cout << endl;
}
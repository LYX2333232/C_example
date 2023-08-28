#include <iostream>
using namespace std;
long fibonacci(long);
int main()
{
    long value, n;
    cout << "Enter an integer :";
    cin >> n;
    value = fibonacci(n);
    cout << "Fibonacci(" << n << ")=" << value << endl;
}
long fibonacci(long n)
{
    if (n == 0 || n == 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}
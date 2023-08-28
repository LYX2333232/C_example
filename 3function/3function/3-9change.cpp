#include <iostream>
using namespace std;
void swap(int *, int *);
int main()
{
    int a = 3, b = 8;
    cout << "before swapping…\n";
    cout << "a=" << a << ",b=" << b << endl;
    swap(&a, &b); //实参是整型变量的地址
    cout << "after swapping…\n";
    cout << "a=" << a << ",b=" << b << endl;
}
void swap(int *x, int *y) //形参是整型指针
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
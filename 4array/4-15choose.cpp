#include <iostream>
#include <ctime>
using namespace std;
void sort(int[], int);
int main()
{
    int i, a[10];
    srand(int(time(0)));     //调用种子函数
    for (i = 0; i < 10; i++) //用随机函数初始化数组
        a[i] = rand() % 100;
    for (i = 0; i < 10; i++) //输出原始序列
        cout << a[i] << " ";
    cout << endl;
    sort(a, 10); //调用排序函数
    cout << "Order1: " << endl;
    for (i = 0; i < 10; i++) //输出排序后序列
        cout << a[i] << " ";
    cout << endl;
}
void sort(int x[], int n)
{
    int min, t;
    for (int i = 0; i < n - 1; i++) //对数组排序
    {
        t = i;
        for (int j = i + 1; j < n; j++) //寻找最小元素
            if (x[j] < x[t])
                t = j;
        if (t != i) //交换数组元素
        {
            min = x[i];
            x[i] = x[t];
            x[t] = min;
        }
    }
    return;
}
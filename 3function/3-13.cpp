#include <iostream>
using namespace std;
void display(const int &rk) //����const���ò���
{
    cout << rk << ":\n";
    cout << "dec:" << rk << endl;
    cout << "oct:" << oct << rk << endl;
    cout << "hex:" << hex << rk << endl;
}
int main()
{
    int m = 2618;
    display(m);    //ʵ���Ǳ���
    display(4589); //ʵ���ǳ���
}
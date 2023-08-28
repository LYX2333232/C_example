#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    const int k = 618;
    cout << setw(10) << setfill('#') << setiosflags(ios::right) << k << endl;
    cout << setw(10) << setbase(8) << setfill('*') << resetiosflags(ios::right) << setiosflags(ios::left) << k << endl;
}
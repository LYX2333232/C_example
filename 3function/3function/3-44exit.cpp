#include <iostream>
using namespace std;
#include <conio.h>
int main()
{
    int ch;
    _cputs("Yes or no?");
    ch = _getch();
    _cputs("\n");
    if (toupper(ch) == 'Y')
    {
        _cputs("Yes.\n");
        exit(1);
    }
    else
    {
        _cputs("No.\n");
            exit(0);
    }
}
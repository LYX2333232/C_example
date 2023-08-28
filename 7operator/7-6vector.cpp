#include <iostream>
using namespace std;
class vector
{
private:
    int *v;
    int len;

public:
    vector(int size = 1);
    ~vector();
    int &operator[](int i) const;
    int operator()() const;
};
vector::vector(int size)
{
    if (size <= 0 || size > 100)
    {
        cout << "The size of " << size << " is null!\n";
        exit(0);
    }
    v = new int[size];
    len = size;
}
vector::~vector()
{
    delete[] v;
    v = NULL;
    len = 0;
}
int &vector::operator[](int i) const //?????????[]?????????????
{
    if (i >= 0 && i < len)
        return v[i];
}
#include <iostream>
using namespace std;
class Location
{
public:
    Location(int xx = 0, int yy = 0)
    {
        X = xx;
        Y = yy;
    }
    Location(const Location &p);
    int getx() const { return X; }
    int gety() const { return Y; }

private:
    int X, Y;
};
Location::Location(const Location &p) //�������캯��
{
    X = p.X; //���ݸ���
    Y = p.Y;
    cout << "Copy_constructor called." << endl;
}
int main()
{
    Location A(1, 2);
    Location B(A); //˵������B����A��Ϊ��ֵ�����ÿ������캯��
    cout << "B:" << B.getx() << "," << B.gety() << endl;
}
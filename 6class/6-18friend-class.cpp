#include<iostream>
using namespace std;
class A{
    friend class B;//����B��A����Ԫ
    public:
    void show(){cout<<x<<endl;}
    private:
    int x;
};
class B{
    public:
    void set(int i)
    {Aobject.x=i;}//ʹ��A����Aobject��˽�����ݳ�Ա
    void show()
    {Aobject.show();}//����A�ĳ�Ա����
    private:
    A Aobject;//��A����Aobject��˽�����ݳ�Ա
};
int main(){
    B object;
    object.set(100);
    object.show();
}
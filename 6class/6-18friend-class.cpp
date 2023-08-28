#include<iostream>
using namespace std;
class A{
    friend class B;//声明B是A的友元
    public:
    void show(){cout<<x<<endl;}
    private:
    int x;
};
class B{
    public:
    void set(int i)
    {Aobject.x=i;}//使用A对象Aobject的私有数据成员
    void show()
    {Aobject.show();}//调用A的成员函数
    private:
    A Aobject;//类A对象Aobject是私有数据成员
};
int main(){
    B object;
    object.set(100);
    object.show();
}
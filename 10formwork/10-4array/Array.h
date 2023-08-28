#ifndef ARRAY_H
#define ARRAY_H
template <typename T> //定义类模板
class Array
{
private:
    int size;
    T *element; //数据成员是T类型的指针
public:
    Array(int s);
    virtual ~Array();
    virtual const T &Entry(int index) const;
    virtual void Enter(int index, const T &value);
};
template <typename T>
Array<T>::Array(int s) //成员函数是函数模板
{
    if (s > 1)
        size = s;
    else
        size = 1;
    element = new T[size];
}
template <typename T>
Array<T>::~Array()
{
    delete[] element;
}
template <typename T>
const T &Array<T>::Entry(int index) const
{
    return element[index];
}
template <typename T>
void Array<T>::Enter(int index, const T &value)
{
    element[index] = value;
}
#endif
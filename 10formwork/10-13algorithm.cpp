#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool greater10(int value)
{
    return value > 10;
}
bool inorder(int a, int b)
{
    return a > b;
}
int main()
{
    const int size = 10;
    int i;
    int a[size] = {10, 3, 17, 6, 15, 8, 13, 34, 25, 2};
    vector<int> v(a, a + size);     //用数组对模板向量赋初值
    vector<int>::iterator location; //说明迭代子
    cout << "vector v contains :\n";
    for (i = 0; i < size; i++)
        cout << v[i] << " ";
    cout << endl;
    location = find(v.begin(), v.end(), 15); //查找15的位置
    if (location != v.end())                 //判断成功，输出位置
        cout << "Found 15 at location " << (location - v.begin()) << endl;
    else
        cout << "15 not found\n";             //找不到
    location = find(v.begin(), v.end(), 100); //查找100
    if (location != v.end())
        cout << "Found 100 at location " << (location - v.begin()) << endl;
    else
        cout << "100 not found\n";
    location = find_if(v.begin(), v.end(), greater10); //找第一个大于10的元素
    if (location != v.end())
        cout << "The first greater than 10 is" << *location << ",foubd at location " << (location - v.begin()) << endl;
    else
        cout << "No value greater than 10 wrer found\n";
    sort(v.begin(), v.end()); //对向量按升序排序
    cout << "vector v after sort:\n";
    for (i = 0; i < size; i++)
        cout << v[i] << " ";
    cout << endl;
    if (binary_search(v.begin(), v.end(), 13)) //对升序向量的快速查找
        cout << "13 was found in v\n";
    else
        cout << "13 was not found in v\n";
    if (binary_search(v.begin(), v.end(), 50))
        cout << "50 was found in v\n";
    else
        cout << "50 was not found in v\n";
    sort(v.begin(), v.end(), inorder); //对向量按降序排序
    cout << "vector v after sor inorder :\n";
    for (i = 0; i < size; i++)
        cout << v[i] << " ";
    cout << endl;
    if (binary_search(v.begin(), v.end(), 8, inorder)) //对降序向量的快速查找
        cout << "8 was found in v\n";
    else
        cout << "8 was not found in v\n";
}
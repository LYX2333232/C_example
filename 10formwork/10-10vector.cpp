#include<iostream>
#include<vector>
using namespace std;
int main(){
    unsigned int i;
    vector<int>v(10,0);//实例化长度为10的向量v，置元素初值为0
    for(i=0;i<10;i++)v[i]=i;//使用重载运算符函数operator[]对元素赋值
    v.push_back(10);//在表尾追加一个元素
    v.insert(v.begin()+3,33);//在第三个位置插入一个元素
    cout<<"size of v is :";
    cout<<v.size()<<endl;//输出表长
    cout<<"the elements of v are :";
    for(i=0;i<v.size();i++)//输出表元素
    cout<<v[i]<<" ";
    cout<<endl;
    cout<<"The 6th element is :";
    cout<<v.at(5)<<endl;//输出索引（下标）为5的元素
    cout<<"The first element(use begin()) is :";
    cout<<*(v.begin())<<endl;//输出第一个元素
    cout<<"The last element(use rbegin()) is :";
    cout<<*(v.rbegin())<<endl;//输出最后一个元素
    cout<<"The last element(use end()) is :";
    cout<<*(v.end()-1)<<endl;//输出最后一个元素
    cout<<"The first element(use rend()) is :";
    cout<<*(v.rend())<<endl;//输出第一个元素
    vector<int>l;//说明第2个向量
    for(i=0;i<v.size();i++)//对l中的元素赋值
    l.push_back(v[i]);
    if(v==l)cout<<"v==l"<<endl;//对两个向量判等
    else cout<<"v!=l"<<endl;
}
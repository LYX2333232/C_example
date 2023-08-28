#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int i, j;
    fstream f; //说明文件流对象
    f.open("DATA.dat", ios::out | ios::binary);
    for (i = 1; i <= 10; i++)             //循环
        f.write((char *)&i, sizeof(int)); //写入i
    f.close();                            //关闭文件
    //修改文件，以读写的方式打开文件
    f.open("DATA.dat", ios::in | ios::out | ios::binary);
    for (i = 0; i < 10; i++) //遍历文件中的10个数据
    {
        f.seekg(long(sizeof(int) * i));  //移动流指针
        f.read((char *)&j, sizeof(int)); //读出指针所指数据，写入变量j
        if (j % 2)                       //若j为奇数
        {
            j += 10;                               //修改j
            f.seekp(-long(sizeof(int)), ios::cur); //流指针指示写位置
            f.write((char *)&j, sizeof(int));      //写入修改后的数据
        }
    }
    f.seekg(long(sizeof(int) * 10));      //流指针移到文件尾
    for (i = 91; i <= 95; i++)            //添加5个数据
        f.write((char *)&i, sizeof(int)); //把i写入文件
    //输出文件数据
    f.seekg(0, ios::beg);    //流指针移到文件头
    for (i = 0; i < 15; i++) //遍历
    {
        f.read((char *)&j, sizeof(int)); //读出流当前数据，写入变量j
        cout << j << " ";                //显示j
    }
    cout << endl;
    f.close(); //关闭文件
}
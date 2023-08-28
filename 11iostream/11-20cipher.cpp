#include <iostream>
#include <fstream>
using namespace std;
//加密/解密程序
int lockUnlock(char *fileName)
{
    int i, r = 13;
    unsigned char j;
    fstream f; //说明文件流对象
    //修改文件
    f.open(fileName, ios::in | ios::out | ios::binary); //以读/写方式打开文件
    f.seekp(0, ios::beg);                               //文件指针指向文件头
    for (i = 0; i < 1000; i++)                          //遍历文件中的前1KB数据
    {
        r = (25171 * r + 13859) % 127;          //生成伪随机数
        f.seekg(long(sizeof(char) * i));        //移动流指针
        f.read((char *)&j, sizeof(char));       //读出指针所指数据，写入变量j
        j ^ r;                                  //按位异或，修改j
        f.seekp(-long(sizeof(char)), ios::cur); //流指针指示写位置
        f.write((char *)&j, sizeof(char));      //写入修改后的数据
    }
    f.close();
    return 0;
}
int main()
{
    char fileName[30];
    cout << "input file name:\n";
    cin >> fileName;
    cout << "Lock···\n";
    lockUnlock(fileName);
    system("pause");
    cout << "Unlock···\n";
    lockUnlock(fileName);
}
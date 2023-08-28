#ifndef EX11_19_H
#define EX11_19_H
#include <iostream>
#include <fstream>
using namespace std;
struct bookdata //账单结构
{
    int TP;        //书号
    char name[40]; //书名
    long balance;  //库存量
};
const bookdata mark = {0, "noname\0", 0}; //全局变量，空记录
void Initial(const char *fileDat);        //账单文件初始化
void Append(const char *fileDat);         //入库
void Sale(const char *fileDat);           //销售
void Inquire(const char *fileDat);        //查询
void CreateTxt(const char *fileDat);      //建立文本文件
int endMark(bookdata book);               //判断空记录，即判断文件结束标志
#endif
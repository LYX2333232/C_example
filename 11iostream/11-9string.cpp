#include <iostream>
#include <sstream>
using namespace std;
int main()
{
    string testStr("Input test 256 * 0.5"); //建立串对象
    string s1, s2, s3;
    double x, y;
    istringstream input(testStr);      //建立istringstream类对象，与串对象连接
    input >> s1 >> s2 >> x >> s3 >> y; //通过input从testStr中提取数据
    cout << s1 << ' ' << s2 << ' ' << x << s3 << y << "=" << x * y << endl;
}
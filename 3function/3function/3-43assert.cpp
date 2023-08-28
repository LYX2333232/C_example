#include<iostream>
using namespace std;
#include<cassert>
void analyse(int s);
int main(){
    const int max=100;
    const int min=0;
    int score;
    cout<<"input a score:";
    cin>>score;
    analyse(score);
    cout<<"the score is effective.\n";
}
//测试，当score<0或score>100时终止程序，并报告出错位置
void analyse(int s){
    assert(s>=0);//score<0时终止程序
    assert(s<=100);//score>100时终止程序
}
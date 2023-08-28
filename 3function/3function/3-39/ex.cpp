#include<iostream>
using namespace std;
#include"c.h"
#include"c1.h"
int main(){
    double r,h;
    cout<<"input radius : \n";
    cin>>r;
    cout<<"input height : \n";
    cin>>h;
    cout<<"circle area : "<<circle(r)<<endl;
    cout<<"cylinder volume : "<<cylinder(r,h)<<endl;
    cout<<"cone vomlume : "<<cone(r,h)<<endl;
}
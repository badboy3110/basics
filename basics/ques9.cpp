#include<iostream>
using namespace std;
int main(){
    int si,p,t,r;
    cout<<"enter principal";
    cin>>p;
    cout<<"enter time";
    cin>>t;
    cout<<"enter rate";
    cin>>r;
    si=(p*r*t)/100;
    cout<<"simple interest is"<<si;
    return 0;
}
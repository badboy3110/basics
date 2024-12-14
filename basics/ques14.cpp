#include<iostream>
using namespace std;
int main(){
    int r,h;
    cout<<"enter radious of cylinder";
    cin>>r;
    cout<<"enter height of cylinder";
    cin>>h;
    float pie=3.14;
    float v;
    v=pie*r*r*h;
    cout<<"the volume of cyinder is: "<<v;
    return 0;
}
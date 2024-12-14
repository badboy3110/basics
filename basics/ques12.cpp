#include<iostream>
using namespace std;
int main(){
    float x;
    cout<<"enter the number";
    cin>>x;
    if(x<0){
        cout<<"the fractional part is "<<x+(int)x-1;
    }
    else{
    cout<<"the fractional part is "<<x-(int)x;
    }
    return 0;
}
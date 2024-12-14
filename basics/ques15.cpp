#include<iostream>
using namespace std;
int main(){
    char a,b;
    cout<<"enter first charracter";
    cin>>a;
    cout<<"enter second charracter";
    cin>>b;
    int x=(int)a;
    int y=(int)b;
    int d;
    if(x>y){
        d=x-y;
    }
    else{
        d=y-x;
    }
    cout<<"the difference between ascii values of 2 charracters are: "<<d;
    return 0;
}
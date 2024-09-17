#include<iostream>
using namespace std;

int main(){
    float a, b;
    cout<<"Enter your number: ";
    cin>> a ;
    cout<<"Enter your number: ";
    cin>> b ;
    float sum,sub,mul,div;
    sum = a + b;
    sub = a-b;
    mul = a*b;
    div = a/b;

    cout<<"Your sum is: "<<sum<<endl<<"\n";
    cout<<"Your sum is: "<<sub<<endl<<"\n";
    cout<<"Your sum is: "<<mul<<endl<<"\n";
    cout<<"Your sum is: "<<div<<endl<<"\n";
    return 0;
}
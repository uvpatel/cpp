#include<iostream>
using namespace std;

int main(){
    float a, b;
    cout<<"Enter your number: ";
    cin>> a ;
    cout<<"Enter your number: ";
    cin>> b ;
    float sum;
    sum = a + b;
    float sub;
    sub = a-b;
    float mul;
    mul = a*b;
    float div;
    div = a/b;

    cout<<"Your sum is: "<<sum<<endl<<"\n";
    cout<<"Your sum is: "<<sub<<endl<<"\n";
    cout<<"Your sum is: "<<mul<<endl<<"\n";
    cout<<"Your sum is: "<<div<<endl<<"\n";
    return 0;
}
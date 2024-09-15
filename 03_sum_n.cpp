#include<iostream>
using namespace std;

int main(){
    int count, sum;
    count = 0;sum = 1;
    int n ;
    cout<<"Enter number: ";
    cin>>n;
    sum = sum + count;
    for(count=0;count<=n;count++){
        sum = sum+count;
        cout<<"The sum of n number: "<<sum<<endl;
    }
    return 0;
}
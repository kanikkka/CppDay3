#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enetr the number";
    cin>>n;
    int a=0;
    int b=1;
    int fib;
    for(int i=1; i<n; i++){
        fib=fib+(i-1);

    }
    cout<<fib;
}
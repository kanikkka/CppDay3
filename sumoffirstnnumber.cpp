#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter ";
    cin>>n;
    int sum=0;
    for(int i=0; i<=n; i++){
        sum=n*(n+1)/2;
        cout<<sum;
    }
}
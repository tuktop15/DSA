#include<iostream>
using namespace std;

bool isPrime(int n){
    for(int i=2; i<n; i++){
        if(n%i==0)
           return 1;
    return 0;
    }
}

int main(){
    int n;
    cin>>n;
    if(isPrime(n)==0){
        cout<<"Prime No";
    }
    else
    cout<<"Not a Prime no";
    return 0;
}
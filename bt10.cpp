//Tinh x^n 

#include<iostream>

using namespace std;

int main(){
    int x,n,S=1;
    cin>>x>>n;

    for(int i=1;i<=n;i++){
        S*=x;
    }
    cout<<S;

}
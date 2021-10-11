//Tính 1+2+3+4+5+6+7+8+9+...+n

#include<iostream>

using namespace std;

int main(){
    int n,S=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        S+=i;
    }
    cout<<S;



}
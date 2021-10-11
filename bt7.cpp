//Tinh 1/2+2/3+...+n/n+1

#include<iostream>
using namespace std;

int main(){
    int n;
    float S=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        S+=(i/(float)(i+1));
    }
    cout<<S;


}
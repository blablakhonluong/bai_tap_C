//Tinh 1+1/3+...+1/(2n+1)

#include<iostream>
using namespace std;
int main(){
    int n;
    float S=0;
    cin>>n;
    for(int i=0;i<=n;i++){
        S+=(1/(float)(2*i+1));
    }
    cout<<S;





}
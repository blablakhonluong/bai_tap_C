#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int S=0,P=1;
    for(int i=1;i<=n;i++){
        P*=i; //tinh giai thua
        S+=P; //cong don cac giai thua
    }
    cout<<S;
}
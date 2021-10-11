//Tinh S=1/1.2+1/2.3+...+1/n(n+1)

#include<iostream>
using namespace std;
int main(){
    int n;
    float S=0;
    cout<<"Nhap 1 so nguyen duong n: \n";
    cin>>n;
    for(int i=1;i<=n;i++){
        S+=(1/(float)(i*(i+1)));
    }
    cout<<"Gia tri tong S la: "<<S;

//Cách đi nhanh: cout<<(1-1/(n+1)); :))




}
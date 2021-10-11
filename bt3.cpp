//Tinh S=1+1/2+...+1/n

#include<iostream>
using namespace std;
int main(){
    int n;
    float S=0;
    cout<<"Nhap 1 so nguyen duong n: \n";
    cin>>n;
    
    for(int i=1;i<=n;i++){
        S+=(1/(float)i);
    }
    cout<<"Gia tri cua S la: "<<S;

}
#include<iostream>

using namespace std;

int main(){
    cout<<"Nhap vao so nguyen duong n: ";
    int n;
    cin>>n;
    int a = (n%2);

    if(n%2==1){
        while(n!=0){
            if(n%2==0){
                cout<<0;
            }else{
                cout<<1;
            }
            n=n/2;
        }
    }else{
        while(n!=0){
            if(a==0){
                cout<<a;
            }
        }
    }



}
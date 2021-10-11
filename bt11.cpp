//Tinh 1+1.2+1.2.3+...+n!

#include<iostream>

using namespace std;

int giaithua(int n){
    int S=1;
    for(int i=1;i<=n;i++){
        S*=i;
    }
    return S;
}

int main(){

    int n;
    int P=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        P+=giaithua(i);
    }
    cout<<P;

}
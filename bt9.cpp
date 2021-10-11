//Tinh n!


#include<iostream>
using namespace std;

int main(){
    int n;
    int S=1;
    cin>>n;
    for(int i=1;i<=n;i++){
        S*=i;
    }
    cout<<S;

}
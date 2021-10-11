//Tính 1+1/2+1/4+...+1/2n
#include<iostream>
using namespace std;

int main(){
    int n;
    float S=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        S+=(1/(float)(2*i));
    }
    cout<<S+1;


}
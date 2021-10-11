//Tinh 1/2+3/4+5/6+...+(2n+1)/(2n+2)

#include<iostream>
using namespace std;

int main(){
    int n;
    float S=0;
    cin>>n;
    for(int i=0;i<=n;i++){
        S+=((2*i+1)/(float)(2*i+2));
    }
    cout<<S;


}
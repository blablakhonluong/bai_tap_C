#include <stdio.h>
int main(){
    int n,P=1;
    printf("Nhap so nguyen duong n: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(n%i==0 && i%2==1)
            P*=i;
    }
    printf("Tich cac uoc le cua n: %d",P);





}
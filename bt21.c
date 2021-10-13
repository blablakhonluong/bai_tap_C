#include <stdio.h>
int main(){
    int n,S=0;
    printf("Nhap so nguyen duong n: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(n%i==0)
            S+=i;
    }
    printf("Tong cac uoc cua n: %d",S);





}
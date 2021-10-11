#include<stdio.h>

int main(){
    int n,S=0;
    printf("Nhap so nguyen duong n: ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        S+=i*i*i;
    }
    printf("Tong S co gia tri la: %d",S);
}
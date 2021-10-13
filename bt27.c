#include <stdio.h>
int main(){
    int n,count=0;
    printf("Nhap so nguyen duong n: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(n%i==0 && i%2==0)
           count++;
    }
    printf("So uoc chan cua n: %d",count);





}
#include<stdio.h>

int main(){
    int a,b;
    printf("Nhap 2 so nguyen duong a,b: ");
    scanf("%d",&a);
    scanf("%d",&b);
    while(a!=b){
        if(a>b){
            a=a-b;
        }else{
            b=b-a;
        }
    }
    printf("UCLN cua a,b la: %d",a);

}
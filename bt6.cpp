//Tinh S=1/1.2+1/2.3+...+1/n(n+1)
#include<stdio.h>
int main(){
    int n;
    float S=0;
    printf("Nhap 1 so nguyen duong n: \n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        S+=(1/(float)(i*(i+1)));
    }
    printf("Gia tri tong S la: %f",S);


   

//Cách đi nhanh: cout<<(1-1/(n+1)); :))


}
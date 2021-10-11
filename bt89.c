#include<stdio.h>
int main(){
    int N,S=0;
    printf("Nhap so nguyen duong N: ");
    scanf("%d",&N);
    for(int i=1; i<N; i++){
        if(i%2==1){
            S+=i;
        }
    }
    printf("Tong cac so nguyen duong le nho hon N la: %d",S);



}
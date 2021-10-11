#include <stdio.h>

int main(){
    float x,S;
    printf("Nhap gia tri x: ");
    scanf("%f",&x);
    if(x>=5){
        
        printf("Gia tri cua f(x) la: %f",2*x*x+5*x+9);
    }else{
        printf("Gia tri cua f(x) la: %f",-2*x*x+4*x-9);
    }



}
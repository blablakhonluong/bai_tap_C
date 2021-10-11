#include<stdio.h>
int main(){
    float a,b;
    printf("Nhap vao hai so a,b: ");
    scanf("%f %f",&a,&b);
    if(a*b<0){
        printf("Hai so nay trai dau");
    }else{
        printf("Hai so nay cung dau");
    }
}
#include<stdio.h>
int main(){
    float a,b,c; 
    printf("Nhap 3 so a,b,c la ba canh tam giac: ");
    scanf("%f %f %f",&a,&b,&c);
    if(a*a+b*b==c*c||b*b+a*a==c*c||c*c+a*a==b*b){
        printf("Day la so do ba canh tam giac vuong");
    }else if(a*a+b*b>c*c||b*b+a*a>c*c||c*c+a*a>b*b){
        printf("Day la so do ba canh tam giac nhon");
    }else if(a*a+b*b<c*c||b*b+a*a<c*c||c*c+a*a<b*b){
        printf("Day la so do ba canh tam giac tu");
    }

}
#include<stdio.h>

int main(){
    float a,b,c;
    printf("Nhap cac so a,b,c: ");
    scanf("%f %f %f",&a,&b,&c);
    float max = a;
    if(max<b){
        max=b;
    } 
    if(max<c){
        max=c;
    }
    printf("So lon nhat trong 3 so la: %f",max);


}
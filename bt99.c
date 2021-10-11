#include <stdio.h>

int main(){
    float a,b,c;
    printf("Nhap vao cac so a,b,c: ");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    float min=a, max=a;
    if(max <b){
        max=b;
    }
    if(max <c){
        max=c;
    }
    if(min>b){
        min=b;
    }
    if(min>c){
        min=c;
    }
    printf("Ba so a,b,c theo thu tu tang dan la %f %f %f", min,(a+b+c-min-max), max);




}
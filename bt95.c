#include <stdio.h>
#include<stdlib.h>
int main(){
    float a,b,c; 
    printf("nhap so a,b,c: ");
    scanf("%f %f %f",&a,&b,&c);
    if(a<0){
        a=abs(a);
    }
    if(b<0){
        b=abs(b);
    }
    if(c<0){
        c=abs(c);
    }
    printf("Cac so sau khi thay la: %f %f %f",a,b,c);
}
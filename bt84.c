#include<stdio.h>
int main(){
    float a, b;
    float x;
    printf("Nhap a: ");
    scanf("%f", &a);
    printf("Nhap b: ");
    scanf("%f", &b);

    if(a == 0)
    {
        if(b == 0)
            printf("PT co vo so nghiem");
        else
            printf("PT vo nghiem");
    }
    else
    {
        x = -b / a;
    printf("PT co 1 nghiem la %f", x);
    }
}
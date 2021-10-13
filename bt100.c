#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,x,x1,x2;
    printf("Nhap he so cua pt bac 2: \n");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    float D=b*b-4*a*c;
    if(a==0){
        if(b==0){
            if(c==0){
                printf("Pt co vo so nghiem");
            }else{
                printf("Pt co khong co nghiem");
            }
        }else{
            x=-c/b;
            printf("Pt co nghiem la x: %f",x);
        }

    }else{
        if(D<0){
            printf("Pt vo nghiem");
        }else{
            x1=(-b+sqrt(D))/(2*a);
            x2=(-b-sqrt(D))/(2*a);
            printf("Pt co nghiem x1=%f,x2=%f",x1,x2);
        }

    }



}
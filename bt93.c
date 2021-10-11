#include<stdio.h>
#include<math.h>
int main(){
    int n, count=2;
    printf("Nhap so nguyen n: ");
    scanf("%d",&n);
    if(n<=1){
        printf("So nay khong la so nguyen to");
    }else{
        for(int i=2; i<=sqrt(n); i++){
            if(n%i==0){
                count++;
            }
        }
        if(count==2){
        printf("So nay la so nguyen to");
    }else{
        printf("So nay khong la so nguyen to");
    }
    }
    



}
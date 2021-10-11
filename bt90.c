#include<stdio.h>

int main(){
    int N,S=0;
    printf("Nhap so nguyen duong N: ");
    scanf("%d",&N);
    int i=1;
    do{
        S+=i;
        if(S>=N){
            i--; // vì nãy đã tăng rồi phải giảm đi
            printf("So m can tim la: %d",i);
            break;
        }
        i++;
        
        
    }while(1);
    
}
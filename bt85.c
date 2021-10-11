#include<stdio.h>

int main(){
    int n;
    printf("Nhap thang: ");
    scanf("%d",&n);
 
    if(n>=1 && n<=3){
         printf("Thang nay thuoc quy 1");
    }
       
    if(n>=4 && n<=6){
         printf("Thang nay thuoc quy 2");
    }
  
    if(n>=7 && n<=9){
         printf("Thang nay thuoc quy 3");
     }
   
    if(n>=10 && n<=12){
        printf("Thang nay thuoc quy 4");
    }


}
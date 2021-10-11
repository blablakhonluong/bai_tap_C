#include<stdio.h>
int main(){
    int S=0;
    int i=1;
    do{
        S+=i;
        if(S>10000){
            i--; // vì nãy đã tăng rồi phải giảm đi
            printf("So n can tim la: %d",i);
            break;
        }
        i++;
        
        
    }while(1);




}
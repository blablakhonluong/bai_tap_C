#include<stdio.h>
int main(){
    int n;
    do{
    printf("Nhap so phan tu cua mang la 1 so nguyen duong: ");
    scanf("%d",&n);

    }while(n<=0 && n>100);

    int a[n];

    printf("Nhap cac phan tu cua mang: \n");
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    if( (n+1)<= 100){  //kiem tra xem so phan tu ma them mot phan tu vao co bi vuot qua 100

        int k; // vi tri can chen
        printf("Nhap vi tri phan tu can chen: ");
        scanf("%d", &k);

        int m; //gia tri phan tu can chen
        printf("Nhap gia tri phan tu can chen: ");
        scanf("%d", &m);
        
        for(int i=n;i>k-1;i--)
        {
            a[i]=a[i-1]; // moi vi tri ban dau thi duoc gan cho thang o vi tri truoc no cho toi thang o vi tri k gan cho thang k-1
        }
        a[k-1] = m; //gan gia tri cho thang phan tu tai vi tri k luc dau thi bay gio no co chi so k-1
        
        n++; //so phan tu cua mang da tang len

        for (int i = 0; i < n; i++) {
            printf("%d ", a[i]);
        }
    }
    else{
       printf("Khong du cho de them");
    }

   



























    // int a[5];
    // for(int i=0; i<5; i++){

    //     scanf("%d",&a[i]);
    //     printf("%d",a[i]);


    // }

    // int n=100, *p;

    // p=&n;

    // printf("%d",*p);




}
/*Viết chương trình nhập và in mảng gồm n phần tử là số nguyên (n<=100), sau đó:
Tìm phần tử lớn nhất, nhỏ nhất trong mảng
Thống kê số âm, số dương, số 0 có trong mảng;
Thống kê số nguyên tố có trong mảng;
Sắp xếp mảng theo thứ tự tăng dần của các phần tử;
Xoá phần tử ở vị trí thứ k trong mảng */

#include<stdio.h>
#include <stdlib.h> // thư viện này chứa hàm rand() để random số.
#include<time.h>


int random(int a, int b){
    return a + rand() % (b+1-a); //lấy ramdom rồi lấy phần chia dư của số rand() trong đoạn a,b
}


int main(){
    srand((int)time(0)); //câu giờ để mỗi lần chọn số nó sẽ ra khác nhau
    int n;
    do{
    printf("Nhap so phan tu cua mang la 1 so nguyen duong: ");
    scanf("%d",&n);

    }while(n<=0 && n>100);

    int a[100];

    printf("Nhap cac phan tu cua mang la cac so ngau nhien\n");
    for (int i = 0; i < n; i++) {
       a[i]=random(-50,50);
    }

    //in mang 

    for (int i = 0; i < n; i++){
        printf("Phan tu a[%d] la: %d\n",i, a[i]);
    }
    //Tim min,max
    int min=a[0],max=a[0];
    for (int i = 0; i < n; i++) {
        if(a[i]<min){
            min=a[i];
        }
        if(a[i]>max){
            max=a[i];
        }
    }

    printf("Phan tu be nhat cua mang la: %d\n",min);
    printf("Phan tu lon nhat cua mang la: %d\n",max);
    

    //Dem so am, so duong, so 0 trong mang

    int count_am=0, count_duong=0,count_khong=0;

    for(int i=0; i < n; i++){
        if(a[i]<0){
            count_am++;
        }
        if(a[i]==0){
            count_khong++;
        }
        if(a[i]>0){
            count_duong++;
        }

    }
    printf("So phan tu duong cua mang la: %d\n",count_duong);
    printf("So phan tu am cua mang la: %d\n",count_am);
    printf("So phan tu bang khong cua mang la: %d\n",count_khong);

    //Dem so nguyen to trong mang
    int count_snt=0;

    for (int i = 0; i < n; i++) {
        int count_uoc=0;
            for(int j = 1; j <=a[i]; j++){
                if(a[i]%j==0){
                    count_uoc++;
                }
            }
            if(count_uoc==2){
                count_snt++;
                
            }
        
    }
    printf("So cac so nguyen to trong mang la: %d\n",count_snt);

    // sap xep mang theo thu tu tang dan

    
    for(int i = 0; i<n; i++){
        int tmp;
        for(int j=i+1;j<n-1;j++){
            if(a[i]>a[j]){
                tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
        }
    }
    printf("Mang sau khi sap xep la: \n");
    for(int i = 0; i < n; i++){
        printf("%2d\n",a[i]);
    }

    //xoa phan tu o vi tri k
    int k;
    printf("\nNhap chi so k cua phan tu muon xoa\n");
    scanf("%d",&k);

    if(n>=1){
        for(int i = k; i < n-1; i++){
            a[i]=a[i+1];
        } 
    }
    n--;
    printf("Mang sau khi xoa phan tu o vi tri k\n");
    for(int i = 0; i < n; i++){
        printf("%d\n",a[i]);
    }




}


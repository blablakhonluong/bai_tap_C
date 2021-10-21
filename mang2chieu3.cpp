#include<stdio.h>


int main()
{ 
    // khai báo mảng
    
    int m,n;
    int a[50][50];
    printf("nhap so hang m = "); scanf("%d",&m);
    printf("nhap so cot n = "); scanf("%d",&n);
    printf("nhap vao ma tran: \n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("Nhap gia tri cho phan tu a[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    //in mảng
    printf("ma tran vua nhap la: \n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%2d ",a[i][j]);
        }
        printf("\n"); // hết 1 vòng j thì nhảy 1 i lên nên là xuống dòng
    }

    
    //sap xep hang k theo thu tu tang dan
    int k;
    printf("\n");
    printf("Nhap so thu tu hang can sap thu tu: ");
    scanf("%d",&k);

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[k][i]>a[k][j]){
                int tmp=a[k][i];
                a[k][i]=a[k][j];
                a[k][j]=tmp;
            }
        }
    }

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%2d ",a[i][j]);
        }
        printf("\n"); // hết 1 vòng j thì nhảy 1 i lên nên là xuống dòng
    }

}
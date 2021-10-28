#include<stdio.h>
#include <stdlib.h> // thư viện này chứa hàm rand() để random số.
#include<time.h>

int checkSohoanhao(int check){
    int S=0;
    if(check<=1){
        return false;
    }
    for(int i=1;i<check;i++){
        if(check%i==0){
            S+=i;
        }
        if(S==check){
            return true;
        }
    }
}


int main()
{ 
    // khai báo mảng
    srand((int)time(0)); //câu giờ để mỗi lần chọn số nó sẽ ra khác nhau
    int m,n;
    int a[50][50];
    printf("nhap so hang m = "); scanf("%d",&m);
    printf("nhap so cot n = "); scanf("%d",&n);
    printf("nhap vao ma tran: \n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            
            a[i][j]=rand();
        }
    }
    //in mảng
    printf("ma tran vua nhap la: \n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%3d ",a[i][j]);
        }
        printf("\n"); // hết 1 vòng j thì nhảy 1 i lên nên là xuống dòng
    }

    //min,max
    int min,max;
    min=max=a[0][0];
   
    
	for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(min>a[i][j]) min=a[i][j];
            if(max<a[i][j]) max=a[i][j];       
		}
    }
	
	printf("Gia tri be nhat la: %d \n",min); 
	printf("Gia tri lon nhat la: %d \n",max); 
    
	
    //in ra cac so hoan hao trong mang

    int count=0;
   
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(checkSohoanhao(a[i][j])==true){
                printf("Phan tu a[%d][%d] la: %d, mot so hoan hao\n",i,j,a[i][j]);
                count++;
            }
            
        }
    }
    if(count==0){
        printf("Mang nay khong co so hoan hao");
    }
    


    
    

}
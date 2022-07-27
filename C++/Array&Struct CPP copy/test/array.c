#include<stdio.h>    
// void main ()    
// {    
//     int i, j,cdoi;     
//     int a[10] = { 10, 9, 7, 101, 23, 44, 120, 78, 34, 23};     
//     for(i = 0; i<10; i++)    
//     {    
//         for(j = i+1; j<10; j++)    
//         {    
//             if(a[j] < a[i])    
//             {    
//                 cdoi = a[i];    
//                 a[i] = a[j];    
//                 a[j] = cdoi;     
//             }     
//         }     
//     }     
//     printf("Printing Sorted Element List ...\n");    
//     for(i = 0; i<10; i++)    
//     {    
//         printf("%d\n",a[i]);    
//     }    
// }     
int main(){
    /*int a[100];
    int n,max=0,sum=0;
    printf("nhap kick thuoc mang: ");
    scanf("%d",&n);
    for(int i = 0 ; i < n ; i++)
    {
    	scanf("%d",&a[i]);
	}*/
    /*
    for(int i=1;i<n;i++){
        if (a[i]>max){
            max = a[i];
        }
    }
    printf("%d ",max);*/
//+
	/* sap xep thu tu trong mang
    for(int j = 0; j < n; j++){
        for(int i = j+1; i < n; i++){
            if(a[j] > a[i]){
                int temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
	}
	for(int i = 0;i < n; i++){
        printf("%d ",a[i]);
	}*/     
//+
    /* tinh trong so dau va cuoi
    sum=a[0] + a[n-1];
    printf("%d ",sum);
    */
//+
   /* in các số chẵn trong mảng
    for(int i = 0;i < n; i++){
        if(a[i]%2==0){
            printf("%d ",a[i]);            
        }
    }*/
//+
    /* tìm số lần xuất hiện của 1 số cho trước 
    int k=6,s=0;
    for(int i=0;i<n;i++){
        if(a[i]==k){
            s++;
        }
    }
    printf("trong mang co %d so %d",s,k);
    */
//+
   /* tinh tổng các số lẻ và lớn hơn 0 trong array
    int s=0;
    for(int i=0;i<n;i++){
        if(a[i]>0 && a[i]%2==1)
        {
            s+=a[i];
        }
    }
    printf("tong cac so le trong mang = %d",s);*/
//+
    /*
    for(int i=0;i<n;i++){   
        if(a[i]<0 || a[i]>10){ // or if(a[i]>=o && a[i]<=10)
        }else{
            printf("%d",a[i]);
        }
    }*/

    int i,j,c,d,sum=0;          
    int b[100][100];
    printf("nhap so c & d:");
    scanf("%d %d", &c,&d);
    for(i=0;i<c;i++){
        for(j=0;j<d;j++){
            scanf("%d",&b[i][j]);
            sum+=b[i][j];
        }
    }
    printf("%d %d\n",c,d);
    for(i=0;i<c;i++){
        for(j=0;j<d;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");        
    }
    printf("tong cua day so = %d", sum);
    return 0; 
}















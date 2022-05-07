#include <stdio.h>
// #include <math.h>
// #include <conio.h>

int main()
{
	// double x = 81 , x1;    // x1 là giá trị trung gian cần thêm vào để thực hiện tính
	// x1 = sqrt(x);			// Lưu ý là chúng ta chỉ có thể sử dụng kiểu double trong hàm sqrt.
 //    printf( "can bac 2 cua %.lf la :%.lf\n",x, x1 );

	// double x = 2.0;
 //    double y = 0; 
 //    // Tính căn bậc hai của y
 //    y = sqrt(x);
 //    // Hiển thị kết quả
 //    printf("y=%lf", y);


    // printf( "%.lf\n", sqrt(4.0) );
    // printf( "%4.2lf\n", sqrt(100.0) );
    // printf( "%4.2lf\n", sqrt(0.0) );

	// char str1[20], str2[30];

	// printf("Nhap ten: ");
	// scanf("%c", &str1);

	// printf("Nhap so dien thoai va ngay sinh: ");
	// scanf("%c", &str2);

	// printf("Ten vua nhap: %c\n", str1);
	// printf("So dien thoai va ngay sinh vua nhap: %c", str2);
   
	// return(0);


   // int i, space, rows, k = 0;
   // printf("Enter the number of rows: ");
   // scanf("%d", &rows);
   // for (i = rows; i >= 1; --i, k = 0) 
   // {
   //    for (space = 1; space <= rows - i; ++space) 
   //    {
   //       printf("  ");
   //    }
   //    while (k != 2 * i - 1) 
   //    {
   //       printf("* ");
   //       ++k;
   //    }
   //    printf("\n");
   // }
   // return 0;


   // int rows = 5, i, j, space;
   // // printf("Enter the number of rows: ");
   // // scanf("%d", &rows);										// cd. rows = 5
   // for (i = rows; i >= 1; --i) 							// tham so dk: neu i >= 1 thi vong lap ket thuc; sau 1 vong nap i se - 1
   // {
   //    // for (space = 0; space < rows - i; ++space)	// 
   //    //    printf("  ");
   //    for (j = i; j <= 2 * i - 1; ++j)					// vl 1 : j = i = 5 ; => TS dk : j <= 9 
   //       printf("* ");
   //    for (j = 0; j < i - 1; ++j)
   //       printf("* ");
   //    printf("\n");
   // }
   int i,j,k,n=10;
   // printf("nhap kick thuoc:" );
   // scanf("%d",&n);
   // for (i=1;i<=n;i++){
   // 	for(j=1;j<=n;j++){
   // 		if (i==1||i==n||j==1||j==n-i+1||j==i||j==n){
   // 			printf("*");
   // 		}else{
   // 			printf(" ");
   // 		}
   // 	}
   // 	printf("\n");
   // }
   		// tam giac nguoc
   int l=n-i;
   for(i=1;i<=n;i++)
   {
   	for(j=1;j<=l;j++){
   		if(i>n/2){
   			l=l+2;
   			printf("%d",l);
   		}
   		else
   			printf(" ");
   	}
   	for(k=1;k<=2*i-1;k++){
   		if(k==1||k==2*i-1)
   			printf("*");
   		else
   			printf(" ");
   	}
   	printf("\n");
   }
   		// hinh chu X
   // for(i=0;i<=n;i++){
   // 	for(j=0;j<=n;j++){
   // 		if(i==j||j==n-i)
   // 			printf("*");
   // 		else
   // 			printf(" ");
   // 	}
   // 	printf("\n");
   // } 
   		//tam giac ngang
   // for(i=1;i<=n;i++){
   // 	for(j=1;j<=i;j++){
   // 		printf("%d",j);
   // 	}
   // 	printf("\n");
   // }	 
   // for(i=n-1;i>=1;i--){
   // 	for(j=1;j<=i;j++){
   // 		printf("%d",i);
   // 	}
   // 	printf("\n");
   // }
   		// hinh thoi
	// int spaces=n-1;  
 //  	int stars=1;  
 //  	for(int i=1;i<=n;i++)  
 //  	{  
 //   	for(int j=1;j<=spaces;j++)  
 //    	{  
 //      	printf(" ");  
 //    	}  
 //    	for(int k=1;k<=stars;k++)  
 //    	{  
 //      	printf("*");  
 //    	}  
 //    	if(spaces>i)  
 //    	{  
 //      	spaces=spaces-1;  
 //      	stars=stars+2;  
 //    	}  
 //    	else
 //    	{  
 //     		spaces=spaces+1;  
 //      	stars=stars-2;  
 //    	}  
 //    	printf("\n");  
 //  	}  
   return 0;
}
   	// for(int k=1;k<=n;k++){
   	// 	printf("*");
   		// if(i==1||i==n||k==1||k==n){
   		// 	printf("*");
   		// }else
   		// 	printf(" ");
   	// }

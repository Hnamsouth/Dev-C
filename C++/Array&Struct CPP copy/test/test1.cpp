#include<stdio.h>
#include<stdlib.h>
#include <math.h>
using namespace std;

// biểu diên số dưỡi dạng hệ nhị phân(bit)
// +
int fibonacci(int n)
{
  if ((n == 1) || (n == 2))
    return 1;
   printf("%d ",n);
  return fibonacci(n-1) + fibonacci(n-2);
  /* n=9
        return fibonacci(n-1) + fibonacci(n-2);
    fibonacci(9)
        fibonacci(7)
            fibonacci(5)
                fibonacci(3)
                    fibonacci(1)
                        return 1;
                    return 1+1=2;
                return 2+1=3;
            return 3+2=5  ;
        return 5+3=8
  */
}
int factorial(int n) {
    if(n==0) return 1;

    return n* factorial(n - 1);
/*     1 2 5
     0 1 4 6 8
     1 1 3 4 5 6 7 8
    1 2
    factorial(5) 
        factorial(4) 
            factorial(3) 
                factorial(2) 
                    factorial(1) 
                        factorial(0) 
                        return 1
                    return 1*1 =1
                return 2*1 = 2
            return 3*2 = 6
        return 4*6 = 24
    return 5*24 = 120

        */
}
int QHD(const int n)//Hàm quy hoạch động
{
    int a[n];
    a[0]=0; a[1]=1; a[2]=1;
    for(int i=3;i<=n;i++){
        a[i]=a[i-1]+a[i-2];// công thức truy hồi quy hoạch động 
    }
    return a[n];//Trả về kết quả cho hàm quy hoạch
}
/*
const int n = 42;
int arr[n];
*/ 
int main(){
    int n;
    scanf("%d",&n);
    // printf(" gia tri n trong fibolassi la: %d",QHD(n));
    // printf("%d", factorial(5));
    printf("%d", QHD(n-1));
    // printf("Giai thua cua n la: %d", factorial(8));
    /*int a=5,b=2,*k;
    if(a&1){ // (a & 1 or 0) tức là a sẽ lấy số đuôi cua bit số đó để xác định
            // nếu ( a có sô bít cuối cùng là 1 ) -> là số lẻ
        printf("a la so le\n");
    }else{
        printf("a la so chan\n");
    }
    printf("%d \n",a&b);
    // k=(int*)malloc(5*sizeof(int));
    for(int i=0;i<5;i++){
        scanf("%d",k+i);
    }
    for(int i=0;i<5;i++){
        printf("%d ",*(k+i));
    }*/
    /*printf("%d\n",a|b);
    printf("%d\n",(a <<2));
    printf("%d\n",(a >>2));
    printf("%d\n",~a); // đảo ngược bit( 0 -> 1; 1 -> 0)
    printf("%d\n",(1<<(a)));  // 
    printf("%d\n",((a&b)+(a|b)));*/

    /*int a ,sonhiphan=0;
	scanf("%d",&a);
	while (a >0){
		if(a%2==1) // if(a&1) tức là nếu a có số bít cuối cùng là 1
		{
			sonhiphan++;
		}
		a/=2; // or n = n>>1; 
		// vd: 11=1011 >> 1 = 101=5 >> 1=10 =2 >> 1 = 1
	}
	printf("kq = %d",sonhiphan);*/

    return 0;
}
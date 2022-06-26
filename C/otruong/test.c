#include<stdio.h>

int main() {
	float a,b;
	char c;
	printf("nhap phep tinh: ");
	scanf("%c",&c);
	printf("nhap 2 so a & b: ");	
	scanf("%f%f",&a,&b);
	if (c=='+'){
		printf("%.f",a+b);
	}else if (c=='-'){
		printf("%.f",a-b);
	}else if (c=='*'){
		printf("%.f",a*b);
	}else if (c=='/'){
		printf("%.9f",a/b);
	}else{
		printf("phep tinh khong dung");
	}
    return 0;
}

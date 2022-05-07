#include<stdio.h>
int main(){
	long int a;
	short b;
	float c;
	char d;
	long double j;
	long e;
	printf("kich thuoc cua int = %d\n", sizeof(a));
	printf("kich thuoc cua float = %d\n", sizeof(c));
	printf("kich thuoc cua char = %d\n", sizeof(d));
	printf("kich thuoc cua short = %d\n", sizeof(b));
	printf("kich thuoc cua long = %d\n", sizeof(e));	
	printf("kich thuoc cua double = %d\n", sizeof(j)); 
	// tuy theo he dieu hanh vaf trinh bien dich size cua kieu du kieu se khac nhau
	return 0;
}

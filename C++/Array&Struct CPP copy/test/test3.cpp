#include <stdio.h>
int main(){
//	int x;
	
	int arr[5];
	
//	printf("Nhap x =");
//	scanf("%d",&x);
//	
	printf("Nhap mang:\n");
	for(int i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	
//	printf("x = %d\n",x);
	printf("Mang vua nhap:\n");
	for(int i=0;i<5;i++){
		printf("%d  ",arr[i]);
	}
	
	int max = arr[0];
	for(int i=0;i<5;i++){
		if(arr[i]>max){
			max = arr[i];
		}
	}
	printf("\nMax: %d\n",max);
	
	int max2 = max;// phai kiem dc 1 so khong phai max
	for(int i=0;i<5;i++){
		if(arr[i]<max){
			max2 = arr[i];
			break;
		}
	}
    // 
	if(max2 == max){
		printf("Khong co so gan lon nhat\n");
	}else{
		for(int i=0;i<5;i++){
			if(arr[i]> max2 && arr[i] < max){
				max2 = arr[i];
			}
		}
		printf("Max2: %d\n",max2);
	}
	return 0;
}
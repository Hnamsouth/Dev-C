#include<stdio.h>

int main() {
    /*int sum=0,i,a;
    for(i=0;i<10;i++){
        scanf("%d",&a);
        sum+=a;
    }
    printf("%d",sum);*/
    
    /*int a;
    scanf("%d",&a);
    if(a>10||a<0){
    	printf("false");
	}else{
		printf("true");
	}*/
	
	int n;
    scanf("%d", &n);
    int a[1000];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int maxValue = a[0];
    for (int i = 0; i < n; i++) {
        if (a[i] > maxValue) {
            maxValue = a[i];
        }
    }
    printf("%d", maxValue);
	return 0;
    
}


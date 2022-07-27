#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    if(a>=b &&a>=c){
        printf("max = %.1f",a);
    }else if(b>=a && b>=c){
        printf("max = %.1f",b);
    }else{
        printf("max = %.1f",c);
    }
    // printf("%.1f", sqrt(a));
    return 0;
}
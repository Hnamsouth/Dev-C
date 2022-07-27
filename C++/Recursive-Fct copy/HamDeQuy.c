#include<stdio.h>
/* void recurse (){
    ... .. ...
    recurse ();
    ... .. ...
}
int main (){
    ... .. ...
    recurse ();
    ... .. ...
}*/
// Hàm đệ quy là 1 hàm gọi lại chính nó 
int hamDQ(int n){  
    if(n==3) return 2; // tạo điều diện để vòng lặp của hàm dừng lại, nếu không có thì vòng lặp sẽ chạy mãi mãi
    int c=n*hamDQ(n-1); // hàm hamDQ được gọi lại với giá trị n-1
    return c;
    // return n*hamDQ(n-1); // gọi lại chính nó ở giá trị n-1
}
/*factorial(5)
= 5 * factorial(4)
= 5 * 4 * factorial(3)
= 5 * 4 * 3 * factorial(2)
= 5 * 4 * 3 * 2 * factorial(1)
= 5 * 4 * 3 * 2 * 1
= 120
khi if n ==1 return trả về 1 tức hàm sẽ kêt thúc tại n =1 
nếu return 3 trong if thì hàm sẽ kết thúc tại 3
nếu if n==1 mà return 3: sẽ 120*3 và kết thúc
if(n==3) return 2; // 5*4 trả về n =2 =>> 2*5*4= 40
*/
int hamdq(int n1){ // nếu 1 hàm đệ quy không có câu điều kiện để kết thúc vòng lặp
    int c=n1*hamdq(n1-1);
    return c;
    // return n1*hamdq(n-1);
}
int sumOfArray(int a[1000], int n) {
    if (n == 0) return a[0];
    int c= a[n]+sumOfArray(a,n-1);
    return c;
}
int main(){
    /*int n1;
    scanf("%d",&n1);
    printf("%d ",hamdq(n1));*/
    int n;
    int arr[1000];
    scanf("%d", &n);
    for (int i = 0; i <=n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("%d", sumOfArray(arr, n));
    return 0;
}
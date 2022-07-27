#include<stdio.h>

void nhapphantu (int a[] , int n){
    for(int i = 0 ; i < n ; i++){
        printf("A[%d] :",i);
        scanf("%d",&a[i]);
         // lưu ý trong phần xác định kiểu dữ liệu nhập vào
         // không nên thêm space khi không có thêm phần tử phia sau sẽ gây sai lệch dữ liệu nhận vào
         // "%d"  True : "%d " False : 
    } 
}
void display (int a[],int n){
    for(int i=0;i<n;i++) printf("a[%d] : %d \n", i,a[i]);

}
void tangdan (int a[],int n){
    for(int i=0;i <n;++i){
        for(int j=i+1;j<n;++j)
            if(a[i]>a[j]){
                int cdoi = a[i];
                a[i] = a[j];
                a[j] = cdoi;
            }
    }
}
struct ttin
{
    int tuoi;
    char ten[100];
    double chieu_cao;
} slnguoi, *ctro; 
// có thể khai báo BIẾN or BIẾN CON TRỎ cho struct như thế này không cần phải khai báo trong hàm main

int main(){
    int n;
    printf("nhap so luong phan tu trong mang: ");
    scanf("%d",&n);
    int a[1000];
    
    nhapphantu(a,n);
    printf("cac phan tu trong mang la : \n");

    tangdan(a,n);
    printf("sap xep mang tang dan : \n");
    display(a,n);

    // struct ttin *ctro; // or   struct ttin *ctro, slnguoi;
    // struct ttin slnguoi;
    ctro = &slnguoi;
    

    /* scanf("%d%s%lf",&(*ctro).tuoi, &(*ctro).ten, &(*ctro).chieu_cao);*/

    return 0;
    
}
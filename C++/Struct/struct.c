#include<stdio.h>
#include<stdlib.h>

union class
{
    int tuoi;
    char ten[1000];
    float n;
}member,*cont;
struct lop
{
    float tuoi;
    /*char ten[100];
    float n;
    double k;
    long f;
    short i;
    long long j;*/
}lnguoi,*ctro;
void nhap (struct lop *tuoi, int n){
    for(int i=0;i<n;i++){
        scanf("%f",tuoi+i); 
        // nhập dữ liệu cho biến vs struct dùng địa chỉ ban đầu cộng i sẽ đến ô nhớ liên tiếp của biến
        // i+1 , i+2, i+3 : cd địa chỉ biến là 21532 : 21532+1 , 21532 +2, 21532+3 
        // tùy theo kiểu dữ liệu nhập vào . vd nhập vào 1 int : 
    }
}
void xuat(struct lop *Dplay, int n){
    for(int i=0;i<n;i++){
        printf("%d ",(Dplay+i));   
        printf("%.1f \n",(Dplay+i)->tuoi);   
        // (Dplay+0)1363235888 (Dplay+1)1363235892 (Dplay+2)1363235896  vế dương sẽ +4
        // (Dplay+0)-45984720 (Dplay+1)-45984716 5 (Dplay+2)-45984712   vế âm -6


    }
}


int main(){
    ctro=&lnguoi;
    int n;
    printf("nhap so n: ");
    scanf("%d",&n);
    ctro=(struct lop*)malloc(n*sizeof(ctro)); // cấp bộ nhớ động cho struct qua con trỏ
    nhap(&lnguoi,n);
    printf("%d\n%d\n%d\n%d\n", sizeof(member.ten), sizeof(lnguoi),sizeof(cont),sizeof(ctro));
    xuat(&lnguoi,n);

    return 0;
}
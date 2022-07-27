#include <stdio.h>
#include<stdlib.h>
void Nhap(int number[], int n){
    for(int i = 0; i < n ; i++){
        printf("NHAP A[%d]: ",i);
        scanf("%d",&number[i]);
    }
}
void Xuat(int number[],int n){
    for(int i = 0; i < n ; i++){
        printf("%d\n",number[i]);
    }
}
void SapXepTang(int number[], int n){
    //khai bao bien trung gian de hoan vi
    int trunggian;
    //thuc hien thuat toan sap xep chon
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j ++){
            //neu tim thay phan tu be hon phan tu dang xet thi doi cho 2 phan tu do cho nhau
            if(number[i] > number[j]){
                //hoan vi 2 phan tu
                trunggian = number[i];
                number[i] = number[j];
                number[j] = trunggian;
            }
        }
    }
}
void SapXepGiam(int number[], int n){
    //khai bao bien trung gian de hoan vi
    int trunggian;
    //thuc hien thuat toan sap xep chon
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j ++){
            //neu tim thay phan tu be hon phan tu dang xet thi doi cho 2 phan tu do cho nhau
            if(number[i] < number[j]){
                //hoan vi 2 phan tu
                trunggian = number[i];
                number[i] = number[j];
                number[j] = trunggian;
            }
        }
    }
}
struct ttin 
{
    int tuoi;
    char ten[100];
    double chieu_cao;
};
void iputthongtin( struct ttin *ctip, int n){
    for(int i=0;i<n;i++){
            scanf("%d%s%lf",&(ctip+i)->tuoi, &(ctip +i)->ten,&(ctip+i)->chieu_cao);   
        }
}
void oputthongtin( struct ttin *ctup,int n){
    for(int i=0;i<n;i++){
        printf("thong tin : [%d]\ntuoi : %d\nten : %s\nchieu cao: %.1lf\n",(i+1),(ctup+i)->tuoi,(ctup+i)->ten,(ctup+i)->chieu_cao);
        }
}
void tuoimax(struct ttin *age, int n){
    int max=age->tuoi;
   
    for(int i=1;i<n;i++){
        if((age+i)->tuoi > max){
            max=(age +i)->tuoi;
        }
    }
    printf("tuoi cao nhat trong lop la : %d\n",max);
}
void CcMax (struct ttin *hi,int n){
    double ccthap = hi->chieu_cao;
    for(int i=1;i<n;i++){
        if((hi+i)->chieu_cao > ccthap){
            ccthap=(hi +i)->chieu_cao;
        }
    }
    printf("chieu cao thap nhat trong lop la : %.1lf",ccthap);
}
struct danhsach1
{
    char hoten[1000];
};
int main(){
    /*int n;
    scanf("%d",&n);
    int number[1000];
    Nhap(number,n);

    SapXepGiam(number,n);
    printf("mang sap xep giam dan: \n");
    Xuat(number,n);

    SapXepTang(number,n);
    printf("mang sap xep tang dan: \n ");

    Xuat(number,n);*/
    
    struct ttin slnguoi;
    struct ttin *ctro=&slnguoi; // or   struct ttin *ctro, slnguoi;
    // ctro = &slnguoi;

    /*slnguoi.chieu_cao=1.7;  // truy cập vào thành phần của struct
    printf("%.1lf",slnguoi.chieu_cao);*/

    int n;
    printf("nhap so thanh vien: ");
    scanf("%d",&n);
    /*scanf("%d%s%lf",&(*ctro).tuoi, &(*ctro).ten, &(*ctro).chieu_cao);
    printf("thong tin :\ntuoi : %d\nten : %s\nchieu cao: %.1lf",ctro->tuoi,ctro->ten,ctro->chieu_cao);*/
    // ctro=(struct ttin*)malloc(n*sizeof(ctro));
    iputthongtin(&slnguoi,n);
    oputthongtin(&slnguoi,n);

    tuoimax(&slnguoi,n);
    CcMax(&slnguoi,n);

    return 0;
}

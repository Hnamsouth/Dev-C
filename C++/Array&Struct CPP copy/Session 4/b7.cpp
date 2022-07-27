//B7: Nhập mảng n số nguyên, tìm xem chuỗi số dương mà có tổng lớn nhất là bao nhiêu
#include<iostream>
using namespace std;

int main(){
    int p;
    cout<< " nhap so luong phan tu trong mang: "<<endl;
    cin >>p;
    int *n;
    n=(int*)malloc(p*sizeof(int)); 
    // Cap phat động bộ nhớ cho biến con trỏ n 
    // bộ nhớ n max = 2147483647 
    // khi vượt quá giá trị max mặc định cua n ctrinh sẽ bị lỗi
    int tong[2]={0,0};  //C2:tương tự như bài 6
    int j=0;
    int k=0,max=0;      // C1:
    for(int i=0;i<p;i++){
        cin>>n[i];
        //C1:
        if(n[i]>0){
            k+=n[i];
            if(k>max){
                max=k;
            }
        }else{
            k=0;
        }
        /* // c2:
        if(n[i]>0){
            tong[j]+=n[i];        
        }else{
            if(tong[0]>tong[1]){
                tong[1]=0;          // rs tong nho 
                j=1;                // va chuyen vtri tong dang cong sang tong nho
            }else if(tong[0]<tong[1]){
                tong[0]=0;
                j=0;
            }
        }*/
    }
    cout<<" max la: "<<max;
    /*if(tong[0]>tong[1]){
        cout<<" chuoi duong co tong lon nhat la: " <<tong[0];
    }else if(tong[0]<tong[1]){
        cout<<" chuoi duong co tong lon nhat la: " << tong[1];
    }else{
        cout<<"trong mang khong co so duong";
    }*/

    return 0;
}
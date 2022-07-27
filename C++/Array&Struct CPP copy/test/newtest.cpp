#include<iostream>
using namespace std;
int main(){
    /*int p;
    cout<< " nhap so luong phan tu trong mang: "<<endl;
    cin >>p;
    int *n;
    n=(int*)malloc(p*sizeof(int));
    for(int i=0;i<p;i++){
        cin>>n[i];
    }
    int max=n[0];
    for(int i=1;i<p;i++){
        if(n[i]>max){
            max=n[i];
        }
    }
    // 12345 11111 54321  
    int max2=n[0];
    for(int j=0;j<p;j++){
        
    }
    cout<< endl<<max2;*/
//B1:Tính trung bình cộng các số lẻ trong mảng n số
    /*
    int n[1000];
    int p;
    cout<< " nhap so luong phan tu trong mang: "<<endl;
    cin >>p;
    for(int i=0;i<p;i++){
        cin>>n[i];               
    }
    int tong=0,dem=0;
    for(int i=0;i<p;i++){
        
        if(n[i]%2==1||n[i]&1==-1){
            tong+=n[i];
            dem++;
        }
    }
    if(dem==0){
        cout<< " khong co so le o  trong mang";
    }else{
        float tbc= tong /(float)dem;
    cout<<"tbc cac so le o trong mang la: "<< tbc;
    }
    */

// B2: Tính trung bình cộng các số lẻ ở vị trí chẵn trong mảng n số
    /*
    int n[1000];
    int p;
    cout<< " nhap so luong phan tu trong mang: "<<endl;
    cin >>p;
    for(int i=0;i<p;i++){
        cin>>n[i];               
    }
    int tong=0,dem=0;
    for(int i=0;i<p;i++){
        if(i%2==0 && n[i]%2==1||n[i]&1==-1){
            tong+=n[i];
            dem++;
        }
    }
    if(dem==0){
        cout<< " khong co so le o vi tri chan trong mang";
    }else{
        float tbc= tong /(float)dem;
    cout<<"tbc cac so le o vi tri chan trong mang la: "<< tbc;
    }
    */

// B3:Nhập vào 1 mảng n số nguyên, sau đó nhập 1 số x. Tìm xem có x trong mảng không.
    /*
    int n[1000];
    int p;
    cout<< " nhap so luong phan tu trong mang: "<<endl;
    cin >>p;
    for(int i=0;i<p;i++){
        cin>>n[i];               
    }
    int x,k=0;
    cout<<"nhap so x"<<endl;
    cin>>x;
    for(int i=0;i<p;i++){
        if(n[i]==x){
            k++;
        }
    }
    if(k==0){
        cout<<"x khong trong mang"<<endl;
    }else{
        cout<<"x  co trong mang"<<endl;
    }
    */
// B4:Nhập mảng n số nguyên, tìm số lẻ cuối cùng của mảng
    
    int n[1000];
    int p;
    cout<< " nhap so luong phan tu trong mang: "<<endl;
    cin >>p;
    for(int i=0;i<p;i++){
        cin>>n[i];               
    }
    int bd=0,slcc;;
    for(int j=p-1;j>=0;j--){
        if(n[j]&1==1||n[j]&1==-1){
            slcc=n[j];
            break;
        }else{
            bd++;
        }
    }
    cout<< bd<<endl;
    if(bd==p){
        cout<<"trong mang khong co so le"<<endl;
    }else {
        cout<<"so le cuoi cung cua mang la" <<endl<< slcc;
    }
    
//B5:Nhập mảng n số nguyên, tìm số dương nhỏ nhất
    /*int n[1000];
    int p;
    cout<< " nhap so luong phan tu trong mang: "<<endl;
    cin >>p;
    for(int i=0;i<p;i++){
        cin>>n[i];               
    }
    int i=0,snn,bd=0;
    while(i<p){
        if(n[i]<snn && n[i] >0){
            snn=n[i];
            bd++;
        }
        if(snn>0){
            bd++;
        }
        i++;
    }
    if(bd==0){
        cout<<"mang khong co so duong"<<endl;
    }else{
        cout<< " so nho nhat la : "<<snn<<endl;
    }*/

    return 0;
}
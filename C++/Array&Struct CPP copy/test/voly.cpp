#include<iostream>
#include<math.h>
#include<stdlib.h>

using namespace std;

bool snt(int n){
    if(n<2)return false;
    for(int i=2;i<=sqrt(n);i++){ // for(int i=2;i*i<=n;i++)
        if(n%i==0)return false; 
        // neu n chia het cho 1 trong cac so tu i-> sqrt(n) thi tra ve false 
    }
    return true; // or return n>1;
}
bool SNT(int n){
    if(n<=3){
        return n>1;
    }else if(n%2==0 || n%3==0){ // neu n/2=0 |n/3=0 thi cha ve false
        return true;
    }
    int j=5;
    while(j*j<=n){ // cac snt >3 se bang = 6*j +5 || 6*j+7
        if(n%j==0||n%(j+2)==0){
            return true;
        }
        j+=6;// == j*1,j*2,j*3... 
    }
    return false;
}
int main(){
// dung ham de ktr so nguyen to
      // ktr 1 so nhap vao co phai snt ko
    /*int n;
    cout<<"nhap n: ";
    int a[n];
    // do{
        cin>>n;
        cout<<(int)sqrt(n)<<endl;
        if(n<0){
            cout<<"nhap lai n."<<endl;
        }else if(SNT(n)){ // neu snt(n) co gia tri dung thi if thuc thi 
            cout<<n<<" la so nguyen to"<<endl;
        }else{ // if(snt(n) sai thi else thuc thi
            cout<<n<<" ko phai so nguyen to"<<endl;
        }*/
    // }while(n>0);
    /*  // ktr trong mang so nao la snt
    int n,x,k;
    cin>>n;
    int *a;
    a=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    // chuyen tung phan tu trong mang den ham bool
    for(int i=0;i<n;i++){
        if(snt(a[i])){
            cout<<a[i]<<" ";
        }
    }
    */
// ktr so ngyten to ko dung ham
    /*
    int n,x,k;
    cin>>n;
    int *a;
    a=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]==2||a[i]==3){
                cout<<a[i]<<" ";
                continue;
        }
        if(a[i]>3){
            int uoc=0;
            for(int j=2;j<(sqrt(n));j++){
                if(a[i]%j==0){
                    uoc++;
                }
            }
            if(uoc==0){
                cout<<a[i]<<" ";
            }
        }
    }
    */
    /*int n[1000];
    int p;
    cout<< " nhap so luong phan tu trong mang: "<<endl;
    cin >>p;
    int snn; // tạo biến số nhỏ nhất và gán snn = số đầu tiên cua mảng
    int bd=0;       // biến đếm
    for(int i=0;i<p;i++){
        cin>>n[i];                  // nhập các phần tử của mảng
        if(snn<0 && n[i]>0){        // nếu snn nhỏ hơn 0 và n[i] lớn hơn 0
            snn=n[i];
            bd++;
        }
        if(n[i]<snn && n[i] >0){  // ktr nếu n[i] nhỏ hơn snn và n[i] >0 thì snn = n[i]
            snn=n[i];
            bd++;
        }
    }
    if(bd==0){
        cout<<"mang khong co so duong"<<endl;
    }else{
        cout<< " so nho duong nhat la : "<<snn<<endl;
    }*/

  /*
    int n[1000];
    int p;
    cout<< " nhap so luong phan tu trong mang: "<<endl;
    cin >>p;
  // t?o bi?n s? nh? nh?t và gán snn = s? d?u tiên cua m?ng
    int bd=0;       // bi?n d?m
    int snn=n[0]; 
    for(int i=0;i<p;i++){
        cin>>n[i];                  // nh?p các ph?n t? c?a m?ng
        if(snn<0 && n[i]>0){        // n?u snn nh? hon 0 và n[i] l?n hon 0
            snn=n[i];
            bd++;
        }
        if(n[i]<snn && n[i] >0){  // ktr n?u n[i] nh? hon snn và n[i] >0 thì snn = n[i]
            snn=n[i];
            bd++;
        }
        if(snn>0){
            bd++;
        }
    }
    if(bd==0){
        cout<<"mang khong co so duong"<<endl;
    }else{
        cout<< " so nho duong nhat la : "<<snn<<endl;
    }
    */

   
    return 0;
}
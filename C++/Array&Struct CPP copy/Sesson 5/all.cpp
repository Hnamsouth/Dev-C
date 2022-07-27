/* 
1. Nhập vào 1 mảng n số nguyên và 1 số nguyên x. Hãy tìm giá trị trong mảng xa giá trị x nhất
2. Nhập vào 1 mảng n số nguyên và 1 số nguyên x. Hãy tìm giá trị trong mảng gần giá trị x nhất
3. Cho mảng 1 chiều n số nguyên, hãy tìm đoạn [a, b] sao cho đoạn này chứa tất cả các giá trị trong mảng
4. Cho mảng 1 chiều n số nguyên  , hãy tìm giá trị x sao cho đoạn [-x, x] chứa tất cả các giá trị trong mảng
5. Nhập 1 mảng n số nguyên, đảm bảo các số nhập vào không bị trùng nhau.
6. Nhập 1 mảng n số nguyên, đảm bảo nhập đến đâu được sắp xếp theo thứ tự bé đến lớn luôn.
*/

#include<iostream>
#include<math.h>
using namespace std;
int main(){
//1. Nhập vào 1 mảng n số nguyên và 1 số nguyên x. Hãy tìm giá trị trong mảng xa giá trị x nhất
    // vd :1 3 2 14 9 11  và x =5 thì giá trị xa nhất vs x là 14
    // or -5 3 6 -7 11        x=5 thì giá trị xa nhất vs x là -7 
    // nếu gtri xnhat <0 thì khoảng cách tới x là: x - (-gtri xa nhât)
    /* 
        int x=-6,b=-x; cout<<" x= "<<x<<" b= "<<b; // -> x=-6 & b=6

        c1: tìm khoảng cách xa nhất và lưu vtri của giá trị đó
        c2: tìm max và min : va su dung thuat toan tri tuyet doi abs(max-x) & abs(min-x)
    */
   
 //C1:
    /*int ar[1000];
    int n,x;
    cout<<"nhap so luong phan tu trong mang";
    cin>>n;
    cout<<"nhap so nguyen x:";
    cin>>x;
    int max=0,vtri=0,max2=0;
    int vitri=0;

    for(int i=0;i<n;i++){
        cin>>ar[i];
        int kc=0;
        if(ar[i]<0){
            if(ar[i]>x){
                kc=ar[i]-x;
                if(kc>max){
                    max=kc;
                    vtri=i;
                }else if(kc==max){
                    max2=kc;
                    vitri=i;
                }
            }else{
                kc=x-(ar[i]);
                if(kc>max){
                    max=kc;
                    vtri=i;
                }else if(kc==max){
                    max2=kc;
                    vitri=i;
                }
            }
        }else{
            if(ar[i]<x){
                kc=x-ar[i];
                if(kc>max){
                    max=kc;
                    vtri=i;
                }else if(kc==max){
                    max2=kc;
                    vitri=i;
                }
            }else{
                kc=ar[i]-x;
                if(kc>max){
                    max=kc;
                    vtri=i;
                }else if(kc==max){
                    max2=kc;
                    vitri=i;
                }
            }
        }
    }
    cout << "khoang cach xa x nhat trong mang la "<<max<<endl;
    
    if(ar[vtri]==x){
        cout << "ko co gia tri nao xa nhat trong mang"<<endl;
    }else if(max2==max){
        cout<< " gia tri xa x nhat trong mang la : "<< ar[vtri]<<" va "<<ar[vitri]<<endl;
    }else{
        cout<< " gia tri xa x nhat trong mang la : "<< ar[vtri];
    }
    */

 
    int ar[1000];
    int n,x;
    cout<<"nhap so luong phan tu trong mang";
    cin>>n;
    cout<<"nhap so nguyen x:";
    cin>>x;
    int max=0,vtri=0,max2=0;
    int vitri=0;
    for(int i=0;i<n;i++){
        cin>>ar[i];
        }
    int h=(abs(ar[0]-x));
    int k;
    int vtri1=0,vitri2=0;
    
    for(int i=0;i<n;i++){   
        if(abs(ar[i]-x)<h){
            h=abs(ar[i]-x);
            vtri1=i;
        }else if(abs(ar[i]-x)==h){
            k=abs(ar[i]-x);
            vitri2=i;
        }
    }
    /*    // hoac
        for()
    */
    if(ar[vtri1]==x){
        cout << "ko co gia tri nao gan nhat trong mang"<<endl;
    }else if(h==k){
        cout<< " gia tri gan x nhat trong mang la : "<< ar[vtri1]<<" va "<<ar[vitri2]<<endl;
    }else{
        cout<< " gia tri gan x nhat trong mang la : "<< ar[vtri1];
    }


    
//2. Nhập vào 1 mảng n số nguyên và 1 số nguyên x. Hãy tìm giá trị trong mảng gần giá trị x nhất
    // mang ko sx: 5 1 3 8 4 3 1 4 5 - 5 -1 -10 15   x= 6
    
    // neeu tim dc kc gan nhat = 1 thi break;. vs dk ( x duoc nhap tu truoc)
    
    /*
    int ar[1000];
    int n,x;
    cout<<"nhap so luong phan tu trong mang";
    cin>>n;
    cout<<"nhap so nguyen x:";
    cin>>x;*/
    /*
    int min,vtri=0;
    for(int i=0;i<n;i++){
        cin>>ar[i];
        int kc;
        if(ar[i]<0){            // neu ar[i] < 0
            if(ar[i]>x){        // neu ar[i] lon hon x
                kc=ar[i]-x;     // khoang cach tu x den ar[i]=ar[i]-x
                if(kc<min){     //  neu kc nho hon gtri min thi gan kc cho min
                    min=kc;
                    vtri=i;     // luu vi tri cua gtri do
                }
            }else if(ar[i]<x){  // neu ar[i] nho hon x
                kc=x-(ar[i]);
                if(kc<min){
                    min=kc;
                    vtri=i;
                }
            }
            
        }else{
            if(ar[i]<x){
                kc=x-ar[i];
                if(kc<min){
                    min=kc;
                    vtri=i;
                }
            }else if(ar[i]>x){
                kc=ar[i]-x;
                if(kc<min){
                    min=kc;
                    vtri=i;
                }
            }
        }

    }
    cout << "khoang cach gan nhat trong mang la "<<min<<endl;
    if(ar[vtri]==x){
        cout << "ko co gia tri nao gan nhat trong mang"<<endl;
    }else{
        cout<< " gia tri gan x nhat trong mang la : "<< ar[vtri]<<endl;
    }
    */
    //neu x nhap sau khi nhap cac ptu cua mang. sx lai mang theo chieu tang dan (or nguoc lai), tifm max , min 

// 3. Cho mảng 1 chiều n số nguyên, hãy tìm đoạn [a, b] sao cho đoạn này chứa tất cả các giá trị trong mảng
    // vd: 5 9 3 -7 1 16 20 thif doan [a,b] la [-7,20]
    // c1: tìm giá trị nhỏ nhất và giá trị lớn nhất trong mảng
    /*
    int ar[1000];
    int n,x;
    cout<<"nhap so luong phan tu trong mang";
    cin>>n;
    int max=ar[0],min=ar[1];
    for(int i=0;i<n;i++){
        cin>>ar[i];
        if(min>max){
            max=min;
            min=max;
        }else if(ar[i]>max){
            max=ar[i];
        }else if(ar[i]<min){
            min=ar[i];
        }
    }
    cout<< " doan [a,b] la: " << min<<" den "<<max;
*/

// 4. Cho mảng 1 chiều n số nguyên  , hãy tìm giá trị x sao cho đoạn [-x, x] chứa tất cả các giá trị trong mảng
    // vd: 5 9 3 -7 1 16 20 thif doan [-x,x] la [-20,20]
   /*
    int ar[1000];
    int n,x;
    cout<<"nhap so luong phan tu trong mang"<<endl;
    cin>>n;
    cout<<"nhap vao so x:"<<endl;
    int max=ar[0],min=ar[1];
    for(int i=0;i<n;i++){
        cin>>ar[i];
        if(i>0){
            if(min>max){
                max=min;
                min=max;
            }else if(ar[i]>max){
                max=ar[i];
            }else if(ar[i]<min){
                min=ar[i];
            }
        }
        
    }
    if(min<0){
        if((-min-max)>0){
            cout<<"doan [-x,x] chua gia tri trong mang la :"<< min << " den "<<-min;
        }else{
            cout<<"doan [-x,x] chua gia tri trong mang la :"<< -max << " den "<<max;
        }
    }else{
        cout<<"doan [-x,x] chua gia tri trong mang la :"<< min << " den "<<max;
    }
    */

//5. Nhập 1 mảng n số nguyên, đảm bảo các số nhập vào không bị trùng nhau.
    /*int ar[1000];
    int n,x;
    cout<<"nhap so luong phan tu trong mang"<<endl;
    cin>>n;
    cout<<"nhap vao so x:"<<endl;
    int bienDK=1;
    int i=0;
    for(;i<n;i++){
        
        do{
            cin>>ar[i]; // nhin ptu trong mang
            if(i>0){    // nei i>0 de ss phan tu dang sau 0
                for(int j=0;j<i;j++){   // vl ss neu a[i]== cac so da nhap truoc do
                    if(ar[i]==ar[j]){
                        bienDK=0;       // thi bienDK =0 de kethuc vong while 
                        cout<<"gtri nay da co trong mang"<<endl<< "nhap lai : ";
                        break;
                    }
                }
            }
            
            cout<< "gia tri cua i "<<i << " " << bienDK<<endl;
        }while(bienDK!=0);
        bienDK==1;
    }
        
    for(int i=0;i<n;i++){
        cout<<ar[i];
    }*/

// 6:
//  2 1 4 8 6 vd 6
    /*int ar[1000];
    int n,x;
    cout<<"nhap so luong phan tu trong mang"<<endl;
    cin>>n;
    cout<<"nhap vao so x:"<<endl;
    for(int i=0;i<n;i++){
        cin>>ar[i];
        
        if(i>=1){
            // vd: 2 1
            int j=i;
            int bk=ar[i]; // bk = 1
            while((j>0)&& (bk<ar[j-1])){    // neu so sau nho hon so truoc
                ar[j]=ar[j-1];              // chuyen vtri so sau den vtri so truoc
                j--;
            }
            // gan ar[j] vua dc sap xep cho bk cho luot ss lan sau
            // ar[j] se la ptu ở i hien tai lon nhat : tức là bk = 2
            // nếu ko gán ar[j]=bk;   bk = 1
            ar[j]=bk;                      
        }
    }
    for(int i=0;i<n;i++){
        cout<<ar[i]<< " ";
    }*/

    /*int ar[1000];
    int n;
    cout<<"nhap so luong phan tu trong mang"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>ar[i];
        if(i>=1){
            for(int j=0;j<n-i;j++){
                if(ar[j]<ar[j+1]){
                    int cd=ar[j];
                    ar[j]=ar[j+1];
                    ar[j+1]=cd;
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }*/
    return 0;
}
#include<iostream>
#include<math.h>
#include <stdlib.h>
using namespace std;
    //1. Nhap 1 so nguyen n, in ra cac so le nho hon n
    //2. Nhap 1 so nguyen n, tim so nho hon n chia het cho 2 vaf 3

    /*3. Nhap 1 so nguyen n . kt xem n co phai so nguyen to khong
        so nguyen to la so chia het cho chinh no va chia het cho 1 : tuc la so chi co 2 uoc duy nhat
        B1: tim xem so do co chia het cho nhung so khac nho hon no khong
         tao bien de so sanh
        dem so luong uoc . neu = 2 thi la so nguyen to va khac 2 thif khong phai so nguyen to
    */

    /* 4. nhap so nguyen n. tim so dao nguoc cua n. vd. n=123 ~ n=321
        vd : 1234/10 du 4 con 123 / 10 du 3 con 12 /10 du 2 con 1
        lay so du 10^3 , 10^2, 10^1 , 10^0 */

    /* 5.  nhap so nguyen n , kt n co phai so hoan hao khong
        so hoan hao la 1 so nguyen duong ma tong cac uoc cua no bang chinh no
        vd; 6 =1+2+3
        B1:tim cac uoc cua so n. B2: cong cac uoc ,1 neu bang n thif so do la so hoan hao , 2 neu khong thi khong phai so hoan hao*/

    // 6. Tinh S =  1 + 2 + 3 +... + n (n duoc nhap tu ban phim)

    // 7. Tính S = 1 + 1/2 + 1/3 + ... + 1/n (n duoc nhap tu ban phim)


int main(){
    /*int n;
    printf(" nhap so nguyen n\n");
    scanf("%d",&n);*/

    /*// B1: Nhap 1 so nguyen n, in ra cac so le nho hon n
    int i=1;
    while (i<n){ 
        // dieu kien (i<n)  la DUNG if(i%2!=0) se kiem tra dk (i%2!=0) neu dk DUNG  thi in ra mam hinh 
        // neu (i<n) SAI thi ket thuc chuong trinh
        if(i%2!=0){
            printf("%d \n",i);   
        } 
        i++;  // i++ : i = i +1 , i se cong 1 sau moi 1 vong lap 
    }
    */

    /*// B2:Nhap 1 so nguyen n, tim so nho hon n chia het cho 2 vaf 3
    int sochiahetcho23 = 0;     // tao 1 bien de gan' gia tri thoa mam dieu kien chia het cho 2 va 3
    for(int i=0; i<=n; i++){      // 
        if(i%2==0 && i%3==0){   // neu i chia het cho 2 va 3 thi sochiahetcho23 = i
            sochiahetcho23 = i;
        }
    }
    printf("so chia het cho 2 va 3 nho hon n la %d\n",i);
   */
    /*// B3:Nhap 1 so nguyen n . kt xem n co phai so nguyen to khong
    int demuoc=0;
    for(int i=1;i<=n;i++){
        if(n%i==0) demuoc++;
    }
    if(demuoc==2)
        printf("n la so nguyen to");
    else
        printf("n khong phai so nguyen to");*/
    /*// B4: nhap so nguyen n. tim so dao nguoc cua n. vd. n=123 ~ n=321
    int sodaonguoc=0;
    int p=0;
    // diem so mu~
            // for(int i=n;i>0;i=i/10){
            //     p++;
            // }
    //or 
    p=log10(n)+1;
    for(;p>0;p--){
        sodaonguoc += ((n%10) * pow(10,p-1));
        n/=10;
    }
    printf("%d\n",sodaonguoc);*/
    /*// B5:nhap so nguyen n , kt n co phai so hoan hao khong
    int tongcacuoc=0;
    int i=1
    for(i; i<n; i++){
        if(n%i==0){
            tongcacuoc+=i;
        }
    }
    if(tongcacuoc==n){
        printf("n la so hoan hao");
    }else{
        printf("n khong phai so hoan hao");
    }*/
    /*// B6:Tinh S =  1 + 2 + 3 +... + n (n duoc nhap tu ban phim)
    int S=0;
    for(int i=1;i<=n;i++){
        S+=i;
    }
    printf("tong day so la %d",S);
    */
    /*// B7:Tinh S = 1 + 1/2 + 1/3 + ... + 1/n (n duoc nhap tu ban phim)
    float S=0;
    while(n>0){
        S=S+(float)1/n;
        n--;
    } 
    printf(" tong cua S = %.2f",S);*/
    /*while (n>0){
        n--;
        if(n%2==0 && n%3==0){
            printf("%d\n",n);  
            break; 
        }
         
    } */

// Tim so lon thu 2 trong mang:   
    
    int *n;
    int k;
    scanf("%d",&k);
    n=(int*)malloc((k-4)*sizeof(int));
    // nhap cac phan tu trong mang
    for(int i=0;i<k;i++){
        scanf("%d",&n[i]);
    }
    int max2=n[1];
    int max1=n[0];
    for(int i=1;i<k;i++){
        if(n[i]==n[i-1] || (n[i]>n[i-1])){
            if(n[i]>max1){ // neu n[i] lon hon max1 thi gan max1 = max2: max 2 se la gtri lon t2
                max2=max1;
            }
            if(n[i]>=max1){             // 
                max1=n[i];
            }
            if(n[i]<max1&& n[i]>max2){ // vd 5 5 6 1 7 3
                max2=n[i];
            }
        }else if(n[i]-n[i-1]<0){        // vd 5 5  1 3 2 6
            if(max2==max1 && n[i]<max1){
                max2=n[i];
            }
        }
    }
    if(max1==max2){
        printf("khong co so sao nho hon sln trong mang");
    }else{
        printf("max 1 la: %d\n max 2 la: %d\n",max1,max2);
    }
  
    /*int n;
    scanf("%d",&n);
    int a[1000],sum=0;
    for(int i=0;i<n;i++){
       scanf("%d",&a[i]);
        // sum+=a[i];
        a[i]*=a[i];
    }
    // tinh tong cac phan tu trong mang
    printf("tong cua mang la: %d",sum);
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }*/

//Tiếp theo nhập vào hai số nguyên là k và x (0 ≤ k ≤ n).
//Hãy chèn phần tử có giá trị x vào dãy a, ở trước phần tử có chỉ số k và sau phần tử có chỉ số k-1. 
//In mảng kết quả ra màn hình, mỗi số cách nhau bởi một khoảng trắng.

// chen 1 so vao trong mang tai vi tri x
    /*
    int n,x,k;
    cin>>n;
    int *a;
    a=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        cin>>a[i];
    }*/
    /*cout<<"nhap so x vaf k";
    do{
        cout<<"nhap x va k"<<endl;
        cin>> x >> k;
    }while(k<0||k>n);*/
        // chen phan tu x vao trong mang tai vi tri k
    /*n++;
    for(int i=n;i>=k;i--){
        if(i>k){
            a[i]=a[i-1];
        }
        if(i==k){
            a[i]=x;
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }*/
        // xoa phan tu tai vi tri k
    /*n--;
    for(int i=k;i<n;i++){
        a[i]=a[i+1];
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }*/
    // snt = 6k +5 || 6k + 7
    // tim uoc cua n trong khoang tu 2-> sqrt(n) neu co uoc thi ko phai snt vaf nguoc laji
    /*for(int i=0;i<n;i++){
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
    // dem so lan xuat hien cua cac so trong mang va display theo dang 
    //{6,2,5,3,4,6,1,0,6,2,4,8} -- 6-3,2-2,3-2,,5-1,4-2,1-1,0,1,8-1
    /*
    int *bd;
    int h=1000;
    bd=(int*)malloc(h*sizeof(int));
        for(int i=0;i<n;i++){
            bd[a[i]]=bd[a[i]]+1; 
                    // thay vi b[0], b[1], b[2]... thi ta co the thay doi gia tri vi tri cua dayvd. b[a[i]]: a[i]=2 -> b[2]
        }
        for(int j=0;j<n;j++){
            cout<<bd[a[j]]<< " ";
        }*/
    return 0;
}
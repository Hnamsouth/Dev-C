#include<iostream>
#include <algorithm>
using namespace std;
//1. Tỉnh tổng các chữ số của 1 số nguyên n
int triso (int a){
    if(a==0){
        return 0;
    }
    return a%10 + triso(a/10);
}
// tạo hàm tính tổng các chữ số của 1 số  tên là trso (có thể thay đổi tên tùy ý) 
// hàm sẽ có thể có giá trị đầu vào hoặc ko 
int trso (int a){ 
    int sum=0;  // biến tính tổng  
    while(a!=0){ // điều kiện nếu a khác 0 thì vl chạy ngược lại thì ngừng
                    // vd: a= 456   456%10 còn 45 dư 6.  45%10 còn 4 dư 5 . 4%10=4
        sum+=a%10; // sum = sum + a%10;  : sum + 6  -> 6 +5 -> 6+5+4 = 15
        a/=10;      // a= a/10;   456/10 chia theo từng vòng đến khi thoa mãn điều kiện vl sẽ ngừng
                    
    }
    return sum; // trả kết quả về cho hàm mình đã khởi tạo trước đó 
}

//2. Tìm ước chung lớn nhất của 2 số
int uckhuDQ(int a, int b) { // khu de quy
    int tmp;
    while(b != 0) {
        tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}
int uc(int a, int b) {
    // su dung ham Dequy
    if (b == 0) return a;
    return uc(b, a % b);
    //vd a=18 b=34 (18, 34%18)or a=34 b=18 van la(18, 34%18)
}
int gcd1(int a, int b){
    // Lặp tới khi 1 trong 2 số bằng 0
    while (a*b != 0){ 
        if (a > b){
            a %= b; 
            cout<<a<<endl;
        }else{
            b %= a;
            cout<<b<<endl;
        }
    // cach tim ucln : neu a>b -> a =a-b nguoc lai b=b-a 
    //lap lai den khi 1 trong 2 so = 0 tong cua so 2 so =(a or b + 0)
    // a = a % b . vda= 28 b=18: a=a%b=10->b=18%10=8-> a=10%8=2 -> b=8%2=0

    }
    return a + b; // return a + b, bởi vì lúc này hoặc a hoặc b đã bằng 0.
}
int UCLN(int a , int b){
    int max;
    if(a>b){
        for(int i=1;i<=b;i++){
            if(a%i==0&&b%i==0){
                max=i;
            }
        }
    }else{
        for(int i=1;i<=a;i++){
            if(a%i==0&&b%i==0){
                max=i;
            }
        }
    }
    return max;
}
int Ucln(int a,int b){
    int ucln;
    for(int i=1; ;i++){ // khi vòng lặp ko có điều kiện để kết thúc nó sẽ chạy ko ngừng
        if(a%i==0&&b%i==0){  // nếu cả a và b chia hết cho i thì i là ước chung của cả a v
                ucln=i;
        }
        if(i==a||i==b){
            break;
        }
    }
    return ucln;
}
/*
int main(){
    int a=45,b=23;
    int ketqua = Ucln(a,b);
    cout<<"uoc chung lon nhat cua a va b la  "<<ketqua; 

    return 0;
}
*/

int ucln(int a, int b){
    

    if (a == 0 || b == 0){
        return a + b;
    }
    while (a != b){ // vd a= 14 b=6
        if (a > b){
            a -= b; // a = a - b
        }else{
            b -= a;
        }
    }
    return a; // return a or b, b?i vì lúc này a và b b?ng nhau
}
//3. Tìm bội chung nhỏ nhất của 2 số.


int BCNN(int a,int b){
    int max;
    if(a%b==0){
        return a;
    }else if(b%a==0){
        return b;
    }else{
        if(a>b){
            for(int i=a;;i++){
                if(i%a==0&&i%b==0){
                    max=i;
                    break;
                }
            }
            return max;
        }else{
            for(int i=b;;i++){
                if(i%a==0&&i%b==0){
                    max=i;
                    break;
                }
            }
            return max;
        }
    }
}

int bcnn(int a, int b){
    int lcm;
    int boic = a*b;// tich cua a va b la boi chung cua a va b
    int sln = std::max(a, b);// tim gia tri lon nhat cua a va b
    cout<<sln <<endl;
    for(int i = sln; i <= boic; i+= sln){
        //vd a=14 b=2 :vl di tu sln=14 -> boic=28
        if(i % a == 0 && i % b == 0){
            lcm = i;
            break;
        }
    }
    return lcm;
}

int main(){
//B1:
    /*int n;
    cout<<" nhap so n ";
    cin>>n;
    cout<<"tong cac chu so cua n = "<<triso(n)<<endl;*/
//B2:
    /*int x,y;
    nhaplai:
    cout<<" nhap so x va y: ";
    cin>>x>>y;
    if(x==1997){
        return 0;
    }else{
        if(x==0||y==0){
            cout<<"x va y ko co uoc chung"<<endl;
        }else{
            cout<<"uoc chung lon nhat la "<<UCLN(x,y)<<endl;
        }
        goto nhaplai;

    }
   */
    


//B3:
    /*int x,y;
    nhaplai:
    cout<<" nhap so x va y: ";
    cin>>x>>y;
    if(x==1997){
        return 0;
    }else{
        if(x==0||y==0){
            cout<<"x va y ko co boi chung"<<endl;
        }else{
            cout<<"boi chung lon nhat la "<<BCNN(x,y)<<endl;
        }
        goto nhaplai;
    }*/
    int a=45,b=0;
    // cout<<bcnn(a,b);
    // cout<<uc(a,b);
    // cout<<ucln(a,b)<<endl;
    // cout<<BCNN(a,b);
    // cout<<trso(a);
    cout<<Ucln(a,b);

    // cout<<"uoc chung lon nhat cua a va b la: "<<std::__gcd(a,b); 
    // co the su dung ham std::__gcd(a,b) nhung con tuy thuoc vao trinh bien dich

    return 0;
}
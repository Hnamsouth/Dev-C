#include<iostream>
#include <cstring>
using namespace std;
//6. Nhập vào 1 mảng 10 chuỗi, tìm chuỗi phải đứng đầu tiên theo dãy alphabet : gia trij trong alphabet nho hon se dung dau
void ArrayFirst(char a[100][100],int vtridau[10],int n,int bd);
void nhap10(char a[100][100]);

void* inArray10(int n,int vtridau[10]){
     if(n==10){
        cout<<"ko co chuoi nao dung dau ";
    }else if(n>1){
        cout<<"co "<<n<<" chuoi dung dau theo day alphabet la cac chuoi: ";
        for(int i=0;i<n;i++){
            cout<<(vtridau[i]+1)<<" ";
        }
    }else{
        cout<<"chuoi thu "<<vtridau[n-1]<<" la chuoi dung dau theo day alphabet ";
    }
    
}
int main(){

 char a[100][100];
    nhap10(a);
    int n;
    int bd;
    int vtridau[10];
    ArrayFirst(a,vtridau,n,bd);
    
    return 0;
}

void ArrayFirst(char a[100][100],int vtridau[10],int n,int bd){
    n=1,bd=0;
    vtridau[bd]=0;
    for(int i=1;i<10;i++){
        bool k=true;
        for(int j=0;j<strlen(a[vtridau[bd]]);j++){
            if(a[i][j]<a[vtridau[bd]][j]){
                n=1,bd=0;
                vtridau[bd]=i;
                k=false;
                break;
            }else if(a[i][j]==a[vtridau[bd]][j]){
                continue;
            }
        }
        if(k){
            if(strcmp(a[vtridau[bd]],a[i])==0){
                n++,bd++;
                vtridau[bd]=i;
            }
        }
    }
     inArray10(n,vtridau);
    
}
void nhap10(char a[100][100]){
    for(int i=0;i<10;i++){
        cout<<"nhap mang "<<i+1<<": ";
        cin>>a[i];
    }
}

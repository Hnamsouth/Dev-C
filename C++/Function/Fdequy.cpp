#include<iostream>
#include<math.h>
using namespace std;
int chuviTG(int a,int b,int c){
    return a+b+c;
}
double dientichTG(int cv,int a,int b,int c){
    double dtTG=sqrt(cv*(cv-a)*(cv-b)*(cv-c));
    return dtTG;
}
int DeQuy(int a);

int main(){

    // int n=6;
    // cout<< " de quy cua 6 = "<<DeQuy(n);
    int a=6,b=5,c=4;
    cout<<"chu vi tam giac = "<<chuviTG(a,b,c)<<endl;
    cout<<"dien tich tam giac= "<<dientichTG(chuviTG(a,b,c),a,b,c);

    return 0;
}
int DeQuy(int a){
    if(a==0){
        return 0;
    }
    return a + DeQuy(a-1);
}
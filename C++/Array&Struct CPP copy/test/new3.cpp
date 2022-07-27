#include<iostream>
using namespace std;
int main(){

    int *n;
    n=(int*)malloc(2+sizeof(int));
        // bộ nhớ n max = 2147483647 
        // nếu ko cấp phát bộ nhớ động cho n thì kq sẽ in ra
        // 2147483647 483 0 0 0 
    for(int i=0;i<5;i++){
        cin>>n[i];
    }

    for(int i=0;i<5;i++){
        cout<< n[i]<< " ";
    }
    //   5 3 1 2 4 -5 22 3 6 -6

    /*
    int p;
    cout<< " nhap so luong phan tu trong mang: "<<endl;
    cin >>p;
    int *n;
    n=(int*)malloc(p*sizeof(int));
    int bdem[2]={0,0}; //tương tự như bài 6
    int j=0;
    int k=0,max=0;
    for(int i=0;i<p;i++){
        cin>>n[i];
        /*if(n[i]>0){
            k++;
            if(k>max){
                max=k;
            }
        }else{
            k=0;
        }
    }*/
    // cout<<" max la " << max;
    /*
    for(int i=0;i<p;i++){
        if(n[i]>0){
            bdem[j]++;        
        }else{
            if(bdem[0]>bdem[1]){
                bdem[1]=0;          // rs bdem nho 
                j=1;                // va chuyen vtri bdem dang cong sang bdem nho
            }else if(bdem[0]<bdem[1]){
                bdem[0]=0;
                j=0;
            }else if(bdem[0]==bdem[1]){
                bdem[0]=0;
                j=0;
            }
        }
    }

    if(bdem[0]>bdem[1]|| bdem[0]==bdem[1]){
        cout<<" chuoi duong lien tiep nhieu nhat la: " <<bdem[0];
    }else if(bdem[0]<bdem[1]){
        cout<<"chuoi duong lien tiep nhieu nhat la: " << bdem[1];
    }else{
        cout<<"trong mang khong co so duong";
    }*/
    return 0;
}
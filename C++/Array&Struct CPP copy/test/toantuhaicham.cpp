/*TH1: Nếu gọi từ một đối tượng thì
:: dùng để gọi phương thức, thành viên lớp cha của lớp hiện tại.*/



#include<iostream>
using namespace std;

class Lop{
public:
    string name;
    void dp(){
        
    }
};
void Lop::dp(){ // gọi đến các phương thức trong class
    cout<<name<<endl;
}
void hs(){

}
int x;
int main(){
    Lop s;
    s.name="hoang nam";
    s.dp();
    
    /*::hs();
    int k;
    int x=2;
    ::x=5; // dùng toán tử :: để gọi hàm x ở ngoài hàm main
    */

    return 0;
}
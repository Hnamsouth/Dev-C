#include<iostream>
using namespace std;

struct Thongtin
{
    string name;
    int tuoi;
    float diem;
    void display(){ // tạp phương thức display trong struct
        cout<< "ten: "<<name<<endl<<"tuoi: "<<tuoi<<endl<<"diem: "<<diem<<endl;
    }
    void tinhtong(int a,int b){
        printf("%d ",a+b);
    }
    void getInformation() {
		cin >> name>>tuoi;
	}
}hsinh[100],pheptinh;  // khai bao biến cho struct C1
// ĐỐI VỚI C++ MỚI CÓ CLASS khởi tạo(C không có Class)
struct Rectangle {
    int width, height;
    Rectangle(int w, int h) {
        width = w;
        height = h;
    }
    string ten;
    Rectangle(string t ){
        ten = t;
    }
    void inramanhinh() {
        cout << "Dien tich hinh chu nhat la: " << (width * height)<<endl;
    }
    void inra(){
        cout<< "ten: "<<ten<<endl;
    }
    
};
int main(){
    struct Rectangle ttin = Rectangle("hoang nam");
    struct Rectangle rec = Rectangle(4, 10);
    rec.inramanhinh(); 
    ttin.inra();
    // gọi phương thức cũng giống như gọi 1 biến trong struct
    pheptinh.tinhtong(3,7);
    pheptinh.getInformation();
    pheptinh.display();

    /*  // Thongtin svdiemcao; // khai bao biến cho struct C2
        // struct Thongtin sv; // khai bao biến cho struct C3
    int n;
    printf("nhap so luong hs:");
    cin>>n;
    // Thongtin *TTN = new Thongtin[100];
    // Thongtin hsinh[100];*/
        /*  tạo 1 con trỏ *newttin và cấp phát bộ nhớ động cho struct
         cấp phát bộ nhớ động cho mảng
        int *n; // tạo 1 mảng n
            n=(int*)malloc(5*sizeof(int)); // cấp 5 ô nhớ cho mảng
            for(int i=0;i<5;i++) scanf("%d",k+i);
            -> n[0] , n[1] , n[2] , n[3] , n[4]
        */
    /*for(int i=0;i<n;i++){
        printf(" nhap hoc sinh ");
        cin>>hsinh[i].name>>hsinh[i].tuoi>>hsinh[i].diem;
        // cin>>(TTN+i)->name>>(TTN+i)->tuoi>>(TTN+i)->diem;
        // cin>>(&sv+i)->name>>(&sv+i)->tuoi>>(&sv+i)->diem;
    }
    for(int j=0;j<n;j++){
        hsinh[j].display();
    }*/
    /*Thongtin SVMAX = TTN[0]; // biến chứa thongtin hs 1
    for(int i=0;i<n;i++){
        if((TTN[i].diem) > SVMAX.diem){// nếu điểm hs thu i lớn hơn điểm hs 1 thì gán SVMAX bằng biến thongtin hs i
            SVMAX=TTN[i];
            // SVMAX.diem=(TTN[i].diem);
        }
        // cout<<"Name: "<<(TTN+i)->name<<endl<<"Tuoi: "<<(TTN+i)->tuoi<<endl<<"Diem: "<<(TTN+i)->diem<<endl;
    }
    cout<<"Name: "<<SVMAX.name<<endl<<"Tuoi: "<<SVMAX.tuoi<<endl<<"diem: "<<SVMAX.diem<<endl;
    */

    /*cin>>ifo.tuoi>> ifo.name;
    cout << "Name: "<< ifo.name <<endl<<"Age: "<<ifo.tuoi;*/

    return 0;
}
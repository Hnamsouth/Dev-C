#include<iostream>
using namespace std;
/* Con trỏ là một dạng đặc biệt của biến, do cũng là 1 biến nên nó cũng có địa chỉ và giá trị
nó khác các biến bình thường ở chỗ  GIÁ TRỊ CỦA 1 CON TRỎ CHÍNH LÀ ĐỊA CHỈ CỦA 1 BIẾN KHÁC.
Cú pháp để khai báo một con trỏ:
Kiểu_dữ_liệu *tên_con_trỏ; // Ví dụ: int *p;
*/

class Circle{
private:
	float r;
public:
	//Hàm khởi tạo mặc định
	Circle(){
		this->r = 1.0;
	}
	//Hàm khởi tạo có tham số
	Circle(float r){
		this->r = r;  // toán tử "->"  dùng để trỏ đến thuộc tính hoặc các hàm
	}
    /*hàm khởi tạo có tham số mà tham số thuộc private 
    cần phải truy xuất thành phần của lớp từ con trỏ đối tượng, dùng toán tử "->"
    Tên_con_trỏ -> Tên_thuộc_tính;
    Tên_con_trỏ -> Tên_hàm(giá_trị_các_khai_báo_tham_số);
    */
	void setRadius(float r){
		this->r = r;
	}
	// float setRadius(float r){   this->r = r;    return r; }
		
        
	
	float getRadius(){
		return r;
	}
	float calculateArea(){
		return 3.14 * r * r;
	}
};
void change(Circle a) {
    a.setRadius(0);
}
int main(){
    Circle* c1 = new Circle();//sử dụng hàm khởi tạo mặc định
	Circle* c2 = new Circle(3.5);//sử dụng hàm khởi tạo có tham số
    Circle c3(5.5);
	c1->setRadius(4.5); // truyền tham trị cho hàm   
    
    // change(c3); // khi gọi đến hàm để truyền tham 

    // c3.setRadius(5.5);

	cout<<"Area of Circle c1 = "<<c1->getRadius()<<endl;
	cout<<"Area of Circle c1 = "<<c1->calculateArea();
	// cout<<"\nArea of Circle c2 = "<<c2->calculateArea()<<endl;
	// system("pause");
    /*
    Circle arr[5];//Khai báo mảng các đối tượng
    float r=0;
	for(int i=0;i<5;i++){
		cout<<"Input radius of Circle "<<i<<": ";
		cin>>r;
		arr[i].setRadius(r);
		cout<<"Area of Circle "<<i<<" = "<<arr[i].calculateArea()<<endl;
	}
*/
    /*
    // khai báo biến a
    int a=6;           
    // khai báo con trỏ và cho con trỏ ct trỏ tới biến a
    int * ct=&a;
    cout<< " dia chi cua a la: "<< &a <<endl;
    // để hiển thị địa chỉ &a dưới dạng số thập phân 
    cout<< " dia chi cua a la: "<< (int)&a;
    // lấy giá trị của biến a bằng con trỏ
    cout<< " gia tri cua a la: "<< *(&a) <<endl;
    // có thể thay đổi gia trị của biến a bằng cách
    *ct = 9;  // hoặc *(&a) = 9;
    cout<< " dia chi va gia tri cua ct la: "<< ct <<endl;
    cout<< " gia tri cua a la: "<< *ct;
    // cout<< " gia tri cua a la: "<< a <<endl;
    // change(&a);
    // cout<< " gia tri moi cua a la: "<< a;
*/
    return 0;
}
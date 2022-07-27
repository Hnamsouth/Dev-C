#include <iostream>
using namespace std;

//Abstract class: Lớp Thuần ảo
class Minhday{
protected:
	float Dodai;
public:
	void NhapChieuDai(){
        cin >> Dodai;
    }

    // tạo 1 Hàm Thuần ảo
    virtual float TinhDienTich() = 0;
};

// Derived class: Lớp cơ sở
class Alo : public Minhday{ // nhận các thông tin chia sẻ từ hàm Thuần ảo
public:
    float TinhDienTich() {
        return Dodai * Dodai;
    }
};

// Derived class
class CoAiko : public Minhday{
public:
    float TinhDienTich() {
        return 3.14 * Dodai * Dodai;
    }
};

void main(){
	Alo Alo;
    CoAiko circle;

    cout << "nhap chieu dai hinh vuong: ";
    Alo.NhapChieuDai();
    cout << "Dien tich hinh vong la: " << Alo.TinhDienTich() << endl;

    cout << "\n nhap ban kinh hinh tron: ";
    circle.NhapChieuDai();
    cout << "Dien tich hinh tron la: " << circle.TinhDienTich() << endl;
	system("pause");
}
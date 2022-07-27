#include <iostream>
using namespace std;

class Minhday{ // Lớp Cơ sở
private:
	int biena;
public:
	void hamA(){
		biena = 0;
		cout<<"Gia tri cua bien a = "<<biena<<endl;
	}
    Minhday(){
		cout << "Ham khoi tao cua lop co so!" << endl;
	}
	~Minhday(){
		cout << "Ham huy cua lop co so!" << endl;
	}
};

class BanCoDoko: public Minhday{ // chia sẻ các thành viên của Lớp Minhday đến lớp dẫn xuât BanCoDoko
private:
	int bienb;
public:
	void hamB(){
		bienb = 1;
		cout<<"Gia tri cua bien b = "<<bienb<<endl;
	}
    BanCoDoko(){
		cout << "Ham khoi tao cua lop dan xuat!" << endl;
	}
	~BanCoDoko(){
		cout << "Ham huy cua lop dan xuat!" << endl;
	}
};

int main(){
	BanCoDoko bobject;
	//truy cập các thành viên
	bobject.hamA();
	bobject.hamB();
	system("pause");

    return 0;
}
#include<iostream>

using namespace std;
class CVvaDT{
private:
string Name;
int tuoi;
float chieu_cao;
public:
	/*float n,m;
    void getInformation(){
		cout<<"nhap nhieu dai 2 canh hcn: "<<endl;
        cin>>n>>m;
    }
    void display(){
        cout<<"Area: "<<n*m<<endl<<"Perimeter: "<<2*(n+m);
    }*/
	string getName(){
		return Name;
	}
	void setName(string Name){
		this->Name=Name;
	}
	int gettuoi(){
		return tuoi;
	}
	void settuoi(int tuoi){
		this->tuoi=tuoi;
	}
	float getchieu_cao(){
		return chieu_cao;
	}
	void setchieu_cao(float chieu_cao){
		this->chieu_cao=chieu_cao;
	}
protected:

}s1;
struct Student {
	string name;
	int age;
	void display() {
		cout << "Name: " << name << endl<< "Age: " << age << endl;
	}
}student[100];

int main() {
	/*s1.getInformation();
	s1.display();*/
	// cout<< sizeof(Student);
	/*int n;
	cin >> n;
	// Student students[100];
	for (int i = 0; i < n; i++) {
        printf("nhap hs %d\n",i);
		cin >> student[i].name >> student[i].age;
	}
	for (int i = 0; i < n; i++) {
		student[i].display();
	}*/
	int n[]
	return 0;
}
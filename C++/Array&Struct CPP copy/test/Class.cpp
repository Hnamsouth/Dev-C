#include<iostream>
using namespace std;
class Student{
private:
    string name;
    string gender;
    int age;
    double gpa;
public:
    Student(){

    }
    Student(string name,int age,string gender,double gpa){
        this->name=name;
        this->age=age;
        this->gender=gender;
        this->gpa=gpa;
    }
    void display(){
        cout<<"Name: "<<name<<endl<<"Age: "<<age<<endl<<"Gender: "<<gender<<endl<<"GPA: "<<gpa<<endl;
    }
    void getInformation (){
        cin>>name>>age>>gender>>gpa;
    }
};
int main(){
    Student hs,hs1,hs2;
    hs1.getInformation();
    // hs2.getInformation();
    // hs.getInformation();

    /*Student s1("hoang nam", 24,"nam",8.0);
    Student s2("van thanh", 28,"nam",7.0);
    Student s3("thi nu", 22,"nu",7.8);*/
    hs1.display();
    // hs2.display();
    // hs.display();
    
    return 0;   

}

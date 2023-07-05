#include<iostream>
using namespace std;
class person{
    protected:
        string name;
        int age;
    public:
        void get_person(){
            cout<<"Enter name: ";
            cin>>name;
            cout<<"Enter age: ";
            cin>>age;
        }
};
class student:public person{
    protected:
        float percentage;
    public:
        void get_student(){
            get_person();
            cout<<"Enter percentage: ";
            cin>>percentage;
        }
};
class teacher{
    protected:
        float salary;
    public:
        void get_teacher(){
            cout<<"Enter salary: ";
            cin>>salary;
        }
};
class result:public student,public teacher{
    public:
        void display(){
            cout<<"\nName: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
            cout<<"Percentage: "<<percentage<<endl;
            cout<<"Salary: "<<salary<<endl;
        }
};
int main(){
    result r;
    r.get_student();
    r.get_teacher();
    r.display();
    return 0;
}

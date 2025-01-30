#include<iostream>
using namespace std;

//it is defined as binding together the data member and member function

//we cannot access any data or function from the class directly
//this will increase the security of the data 
//this will also help to control the modification of our data member
// class Encapsulation{

//     private:
//     int salary;

//     public:
//     Encapsulation(int val){
//         salary=val;
//     }

//     int getsalary(){
//         return salary;
//     }
// };

// int main(){
//     Encapsulation e1(1000);
//     cout<<e1.getsalary();
// }

class Student{

    private:
    string name;
    int roll;
    float marks;

    public :
    void setdata(string name , int roll, float marks){
        this->name=name;
        this->roll=roll;
        this->marks=marks;
    }

    char getdata(){
        if(marks>=90){
            return 'A' ;
        }else if(marks>=75 && marks<90){
            return 'B';
        }else if(marks>=65&&marks<75){
            return 'C';
        }else if(marks>=40 && marks<65){
            return 'D';

        }else{
            return 'F';
        }
    }
};

int main(){
    Student s;
    string name;
    cout<<"enter name:";
    cin>>name;
    int roll;
    cout<<"enter roll number:";
    cin>>roll;
    float marks;
    cout<<"enter marks:";
    cin>>marks;
    if(marks<=100){
    s.setdata(name,roll,marks);}
    else{
        cout<<"enter marks less than 100";
    }

    cout<<"grade is:"<<s.getdata();
}
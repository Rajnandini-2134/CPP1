#include<iostream>
using namespace std;

class student
{
    public:
    string name;
    int rollno;
    char grade;

     void printInfo()
    {
        cout<<"name"<<"rollno"<<"grade";
        cout<<name<<rollno<<grade;
    }
};

class person : public student
{
    public:
    string name1;
    int age;
    char gender;

 void printInfo()
    {
        cout<<"name1"<<"age"<<"gender";
        cout<<name1<<age<<gender;
    }

};

class Employee: public student
{
    public:
    string name2;
    int salary;

    void printInfo()
    {
        cout<<"name2"<<"salary";
        cout<<name2<<salary;
    }

};

int main()
{
    string name,name1,name2;
    int rollno,age,salary;
    char grade,gender;

   student s;
   person p;
   Employee e;

  
  {
    cout<<"enter the name of student, rollno,grade\n";
    cin>>s.name>>s.rollno>>s.grade;

    cout<<"enter the name1,age, gender\n";
    cin>>p.name1>>p.age>>p.gender;

    cout<<"enter the name2 and salary\n";
    cin>>e.name2>>e.salary;
  }
    

 
 {
    s.printInfo();
    p.printInfo();
    e.printInfo();
 }
    return 0;

}

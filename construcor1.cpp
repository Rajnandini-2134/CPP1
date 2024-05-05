#include<iostream>
using namespace std;

class student
{
    public:
           int age;
           int rollno;

           student()//default constructor
           {
             age=0;
             rollno=0;

           }
           student(int a,int r)//parameterised constructor
           {
              age=a;
              rollno=r;
           }
           student(student &s)
           {
              age=s.age;
              rollno=s.rollno;
           }
};

int main()
{
    
    student s1 ;
    cout<<s1.age<<s1.rollno<<endl;

    student s2(15,20);
    cout<<s2.age<<" "<<s2.rollno<<endl;

    student s3(s2);
    cout<<s3.age<<" "<<s3.rollno<<endl;

    return 0;
    
}
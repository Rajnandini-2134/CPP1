#include<iostream>
using namespace std;

class student
{
    public:
            string name;
            int age;
            int gender;

     student() //defult constructor
    {
        cout<<"Default constructor"<<endl;
    }

    student(string s,int a,int g)//parameterised constructor
    {
        name=s;
        age=a;
        gender=g;
    }
 
 void setname(string s)
 {
    name=s;
 }
 void getname()
 {
    cout<<name<<endl;
 }
 
 void setage(int a)
 {
    age=a;
 }
 void getage()
 {
    cout<<age<<endl;
 }

 void setgender(int g)
 {
    gender=g;
 }
 void getgender()
 {
    cout<<gender<<endl;
 }

};

int main()
{
    string name;
    int age;
    int gender;

    student s;

    s.name="Rajnandini\n";
    s.age=20;
    s.gender=1;


    cout<<s.name<<s.age<<s.gender<<endl;
    
   return 0;


}
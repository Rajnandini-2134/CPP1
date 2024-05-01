#include<iostream>
using namespace std;

class student
{
public:
    string name;
    int age;
    char gender;
};

int main()
{
    string name;
    int age;
    char gender;

    cout<<"name"<<endl;
    cin>>name;
    cout<<"age"<<endl;
    cin>>age;
    cout<<"gender"<<endl;
    cin>>gender;

    student s;
    s.name;
    s.age;
    s.gender;

    return 0;

}
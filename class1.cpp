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

    

    student s;
    s.name="Rajnandini\n";
    s.age=20;
    s.gender= 'f';

    cout<<s.name<<s.age<<s.gender<<endl;

    return 0;

}
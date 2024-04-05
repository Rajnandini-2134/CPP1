//class and object
#include<iostream>
using namespace std;
class stud
{
	public:
		int a,b;
		void get()
		{
			cout<<"entre the value of a and b";
			cin>>a>>b;
		}
		void add()
		{
			cout<<a+b;
		}
};
int main()
{
	stud s1;
	s1.get();
	s1.add();	
	return 0;
}

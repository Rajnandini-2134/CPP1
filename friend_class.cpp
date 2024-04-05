#include<iostream>
using namespace std;
class a
{
	private:
		int a;
		public:
			void seta(int a1)
			{
				a=a1;
			}
			friend class b;
};
class b
{
	public:
		void  disp(a&a1)
		{
			cout<<a1.a;
		}
};
int main()
{
	a a12;
	a12.seta(56);
	b b1;
	b1.disp(a12);
	return 0;
}

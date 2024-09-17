#include<iostream>
using namespace std;

int main()
{
	int bill_amount;
	cout<<"Enter the total bill amount";
	cin>>bill_amount;
	
	if(bill_amount>=100 && bill_amount<500)
	{
		bill_amount=bill_amount-(bill_amount*0.1);
		cout<<"total bill amount is:"<<bill_amount;
	}
	else if(bill_amount>=500)
	{
		bill_amount=bill_amount-(bill_amount*0.2);
		cout<<" total bill amount is:"<<bill_amount;
	}
	else
	{
		cout<<"No discount";
	}
	
}

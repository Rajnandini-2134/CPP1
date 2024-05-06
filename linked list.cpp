#include<iostream>
#include<stdlib.h>
using namespace std;
typedef struct node
{
	int info;
	struct node *next;
}node;
class mylist
{
	node *head;
	 public:
	 	mylist()
	 	{
	 		head=NULL;
		 }
		 void add_node();
		void ins_after();
		void del_node();
		 void show();
};
int main()
{
	int ch;
	mylist *obj;
	obj=new mylist();
	
	do
	{
		cout<<"\n\n1.Add Node\n2.Insert After\n3.Delete Node\n4.Show\n5.Exit\n enter your choice";
		cin>>ch;
		switch(ch)
		{
			case 1:
				obj->add_node();
				break;
			case 2:
				obj->ins_after();
				break;
			case 3:
				obj->del_node();
				break;
			case 4:
				obj->show();
				break;
			case 5:
				exit(0);
			    		
		}
	}while(ch!=5);
}
void mylist::add_node()
{
	node *p;
	p=new node;
	cout<<"New node value=";
	cin>>p->info;
	p->next=NULL;
	if(head==NULL)
	{
		head=p;	
	}
	else
	{
		node *t=head;
		while(t->next!=NULL)
		t=t->next;
		t->next=p;
	}
	cout<<"New node ";
}
void mylist::show()
{
	if(head!=NULL)
	{
		node *t=head;
		while(t!=NULL)
		{
			cout<<t->info<<" ";
			t=t->next;
		}
	}
	else
	{
		cout<<"Empty List..";
	}
}
void mylist::ins_after()
{
	int val;
	if(head)
	{
		cout<<"Node value after which you want to insert=";
		cin>>val;
		node *p;
		p=head;
		while(p->info!=val&&p->next!=NULL)
		p=p->next;
		if(p->info==val)
		{
			node *t=new node;
			cout<<"New Node value=";
			cin>>t->info;
			t->next=p->next;
			p->next=t;
			cout<<"Node Inserted";
		}
		else
		cout<<"Node not found";
	}
	else 
	cout<<"Empty List";
}
void mylist::del_node()
{
	int x;
	if(head)
	{
		cout<<"Node value Position which you want to delete=";
		cin>>x;
		node *t=NULL,*p=NULL;
		int pos=1;
		p=head;
		while(pos<x&&p->next!=NULL)
		{
			t=p;
			p=p->next;
			pos++;
		}
		if(pos==x)
		{
			if(p==head)
	{
		if(p->next==NULL)
		{
			head=NULL;
}
		else
		{
	head=p->next;		
		}
	}
	else
	t->next=p->next;
	delete(p);
	cout<<"Node Deleted";
}
else
cout<<"Node not found";
}

else
cout<<"Empty list";
}











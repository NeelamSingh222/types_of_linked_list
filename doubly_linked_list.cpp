//program to show functions of doubly linked list
#include<iostream>
using namespace std;
struct node{
	int info;
	node *prev,*next;
};
node *start=NULL, *t;
int n;
void insertnodeatend(){
	node *p=new node;
	if(start==NULL){
	start=p;
	cout<<"\n enter the first node ";
	cin>>p->info;
	p->prev=NULL;
	p->next=NULL;	
}
else
{  t=start;
	while(t->next!=NULL)
	t=t->next;
t->next=p;
p->prev=t;
cout<<"\n enter the value ";
cin>>p->info;
p->next=NULL;
}}
void insertatbegining(){
	node *p=new(node);
	if(start==NULL)
	{
		start=p;
	cout<<"\n enter the first node ";
	cin>>p->info;
	p->prev=NULL;
	p->next=NULL;
	}
	else
	{
		p->prev=NULL;
		p->next=start;
		start->prev=p;
		start=p;
		cin>>p->info;
	}
	
}


void viewlist(){
	t=start;
	while(t!=NULL){
		cout<<"\n the membrs are "<<t->info;
		t=t->next;
	}
t=start;
	while(t->next!=NULL){
		t=t->next;
	}
		cout<<"\n\n";
	while(t!=NULL){
		cout<<"\n in reverse order the members are "<<t->info;
		t=t->prev;
	}
} 
void insertasselected(){
	node *p=new node;
	t=start;
	cout<<"\n enter the location ";
	cin>>n;
	for(int i=0;i<n-1;i++)
{     t=t->next;
		}
p->next=t->next;
p->prev=t;
t->next->prev=p;
t->next=p;
		cout<<"\n enter the value ";
		cin>>p->info;
		
	}
	void deletenode(){ 
		cout<<"\n enter the index  ";
		cin>>n;
		t=start;
		for(int i=0;i<n;i++){
			t=t->next;
		}
			t->prev->next=t->next;
			if(t->next!=NULL)
			t->next->prev=t->prev;
			delete(t);
			
		}
		
	void deletefirstnode()
		{
			if(start==NULL)
			cout<<"\n list is empty ";
			else
			{
				t=start;
				start->next->prev=NULL;
				start=start->next;
				delete(t);
			}
		}
	

void fun(){

	cout<<"\n enter 1 to insert an element at end  ";
	cout<<"\n enter 2 to insert at begining ";
	cout<<"\n enter 3 to insert element at desired position ";
	cout<<"\n enter 4 to view list ";
	cout<<"\n enter 5 to delete an element  ";
	cout<<"\n enter 6 to delete first node  ";
	cout<<"\n enter 7 to exit from the list ";
}
int main(){
	int v;
	fun();
	
	while(1){
		cout<<"\n enter your choice ";
	cin>>v;
		switch(v){
			case 1:
				insertnodeatend();
				break;
			case 2:
				insertatbegining();
				break;
			case 3:
				insertasselected();
				break;		
			case 4:
				viewlist();
				break;
			case 5:
				deletenode();
				break;
			case 6:
				deletefirstnode();
				break;
			case 7:
				exit(0);
				
		}
	}
	
return 0;	
	
}

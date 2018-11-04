//a program for insert node in middle,as first and in last and deletion and to view the elements
#include<iostream>
#include<stdio.h>
using namespace std;
struct node {
	int info;
	node * link;
};
node * start=NULL , *t=NULL;
int n;
void insertnode()
{
	node *p=new(node) ;
	
	if(start==NULL)
	{
	start=p;
	cout<<"\n enter the value as first";
	cin>>p->info;
	p->link=NULL;
}
else
{
	
	 t=start;
	while(t->link!=NULL){
		t=t->link;
	}
	t->link=p;
	p->link=NULL;
	cout<<"\n enter the value ";
	cin>>p->info;
	
}}
void insertasfirstnode()
{
	node *p=new(node);
	if(start!=NULL)
	{
		t=start;
		start=p;
		p->link=t;
		cout<<"\n enter the value ";
		cin>>p->info;
	}
	else
	{
		start=p;
	cout<<"\n enter the value as first";
	cin>>p->info;
	p->link=NULL;
		
	}
}



void viewlist(){
	
	if(start==NULL)
	cout<<"\n linked list is empty ";
	else
	{
	t=start;
	while(t!=NULL){
		cout<<"\n the elements are ";
		cout<<t->info<<"  ";
		t=t->link;
	
	}}
}
void fun(){
	cout<<"\n choose case 1 for inserting node at end  ";
	cout<<"\n choose case 2 for inserting node at begining";
	cout<<"\n choose case 3 to insert at selected position ";
	cout<<"\n choose case 4 to view the linked list "; 

	cout<<"\n choose case 5 to delete a node ";
	cout<<"\n choose case 6 to delete the first node ";
	cout<<"\n choose case 7 to exit from the linked list ";
	
}
void insertasselected(){
	cout<<"\n give me the location ";
	cin>>n;
	 node *p=new node;
	t=start;
	for(int i=0;i<n-1;i++)
	{
		t=t->link;
	}
	
	p->link=t->link;
	t->link=p;
	cout<<"\n enter the value ";
	cin>>p->info;
}
void deletenode(){
	if(start==NULL){
		cout<<"\n linked list is empty ";
	}
	else
	{
	node *p;
	cout<<"\n enter the position of element to be deleted ";
	cin>>n;
	t=start;
		for(int i=0;i<n-1;i++)
	{
		t=t->link;
	}
	p=t->link;
	t->link=p->link;
	delete(p);
	
}}
void deletefirstnode(){
		if(start==NULL){
		cout<<"\n linked list is empty ";
	}
	else
	{
		t=start;
		start=start->link;
		delete(t);
	}
}

int main(){
	fun();
	int x;

while(1){
	cout<<"\n enter your choice ";
	cin>>x;
	
	switch(x){
case 1:
	insertnode();
	break;
case 2:
	insertasfirstnode();
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

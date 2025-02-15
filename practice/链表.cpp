//#include<iostream>
//using namespace std;
//void output(struct node*head);
//struct node*create();
//struct node
//{
//	int data;
//	struct node * next;
//};
//int main()
//{
//	struct node * head;
//	head=create();
//	output(head);
//    return 0;
//}
//void output(struct node*head)
//{
//	struct node*p;
//	p=head->next;
//	while(p!=NULL)
//	{
//		cout<<p->data<<" ";
//		p=p->next;
//	}
//}
//struct node*create()
//{
//	struct node*p,*pre,*head;
//	pre=head= new node;
//	head->next=NULL;
//	int x;
//	while(1)
//	{
//		cin>>x;
//		if(x==-1) break;
//	p=(struct node *)malloc(sizeof(struct node));
//	p->data=x;
//	pre->next=p;
//	p->next=NULL;
//	pre=p;
//	}
//	return head;
//}

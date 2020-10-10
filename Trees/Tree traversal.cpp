#include<bits/stdc++.h>
 
using namespace std;
 
/* Creating structure for nodes */
struct node
{
	int value;
	node *left,*right;
};
 
/* creating a class to manage the binary tree */
class btree
{
	void insert(int,node*);  // private member function
	
public:
	node *root;	
	btree();   //constructor
	~btree();  //destructor
	void insert(int);
	void inorder(node*);
	void preorder(node*);
	void postorder(node*);
};
 
btree::btree()
{
	root=NULL;  // intializing the root
}
 
btree::~btree()
{
	cout<<"\nDestructor executed!!";
}
 
void btree::insert(int key)
{
	
	if(!(root==NULL))  
	{
		/* if the tree is not empty */
		insert(key,root);
	}
	
	else
	{
		/* if tree is empty */
		root=new node;
		root->value=key;
		root->left=NULL;
		root->right=NULL;
	}
}
 
/* preserving the properties of binary tree */
void btree::insert(int key,node *leaf)
{
	if(key<leaf->value)
	{
		if(leaf->left==NULL)
		{
			leaf->left= new node;
			leaf->left->value=key;
			leaf->left->left=NULL;
			leaf->left->right=NULL;
		}
		
		else
		{
			insert(key,leaf->left);
		}
	}
	
	else
	{
		if(leaf->right==NULL)
		{
			leaf->right= new node;
			leaf->right->value=key;
			leaf->right->left=NULL;
			leaf->right->right=NULL;
		}
		
		else
		{
			insert(key,leaf->right);
		}
	}
}
 
/* recursive implmentation of in-order traversal*/
void btree::inorder(node *leaf)
{
	if(leaf!=NULL)
	{
		inorder(leaf->left);
		cout<<leaf->value<<" ";
		inorder(leaf->right);
	}
}
 
/* recursive implmentation of pre-order traversal*/
void btree::preorder(node *leaf)
{
	if(leaf!=NULL)
	{
		cout<<leaf->value<<" ";
		preorder(leaf->left);
		preorder(leaf->right);
	}
}
 
/* recursive implmentation of post-order traversal*/
void btree::postorder(node *leaf)
{
	if(leaf!=NULL)
	{
		postorder(leaf->left);
		postorder(leaf->right);
		cout<<leaf->value<<" ";
	}
}
 
int main()
{
	btree b;  // creating object of class
	int arr[]={10,6,12,3,8,11,14,5};
	
	for(int i=0;i<8;i++)
	b.insert(arr[i]); //inserting values
	
	/* call to inorder traversal*/
	cout<<"The inorder traversal is : ";
	b.inorder(b.root); 
	
	/* call to preorder traversal*/
	cout<<"\nThe preorder traversal is: ";
	b.preorder(b.root); 
	
	/* call to postorder traversal*/
	cout<<"\nThe postorder traversal is: ";
	b.postorder(b.root); 
	
	return 0;
}
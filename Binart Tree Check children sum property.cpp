#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


struct Node
{
	int data;
	struct Node *left,*right;
	Node(int val)
	{
		data=val;
		left=right=NULL;
	}
};

void sol(Node *root)
{
	if(root)
	{
		int lh=0;
		int rh=0;
		lh=(root->left?root->left->data : 0);
		rh=(root->right?root->right->data : 0);
		int val=root->data;
		if(val>(lh+rh))
		{
			if(root->left)
			{
				root->left->data=val;
			}
			if(root->right)
			{
				root->right->data=val;
			}
		}

		sol(root->left);
		sol(root->right);
		lh=0;
		rh=0;
		lh=(root->left?root->left->data : 0);
		rh=(root->right?root->right->data : 0);
		if(root->left || root->right)
		{
			root->data=(lh+rh);

		}
		return;


	

		
		

	}
	else
	{
		return ;
	}
}


void cha(Node *root)
{
	if(root==NULL)
	{
		return ;
	}

	sol(root);
}
  
  void pri(Node *root)
  {
  	if(root)
  	{
  		pri(root->left);
  		cout<<root->data<<" ";
  		pri(root->right);
  	}
  }

void fun()
{
	struct Node *root=new Node(100);
	root -> left = new Node(40);
  root -> left -> left = new Node(10);
  root -> left -> right = new Node(10);
  root -> right = new Node(40);
  root -> right -> left = new Node(10);
  root -> right -> right = new Node(10);
	
pri(root);
cha(root);
cout<<"\n";
pri(root);

	
}










int main()
{
	// ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	ll t;
	// cin>>t;
	t=1;
	while(t--)
	{
		fun();
		cout<<"\n";


	}


return 0;

}



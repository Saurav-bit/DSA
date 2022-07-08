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

int sol(Node *root)
{
	if(root)
	{
		int lh=sol(root->left);
		int rh=sol(root->right);
		int va=root->data;
		if(va<(lh+rh))
		{
			root->data=lh+rh;
			return (root->data);
		}
		else if(va>(lh+rh))
		{
			int ma=max(lh,rh);
			int mi=min(lh,rh);
			if(root->left && mi==(root->left->data))
			{
				root->left->data=(va-ma);
				return va;


			}
			else if(root->right && mi==(root->right->data))
			{
				root->right->data=(va-ma);
				return va;

			}
			else
			{
				return va;
			}

		}
		else
		{
			return va;
		}

	}
	else
	{
		return 0;
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
	struct Node *root=new Node(2);
	root -> left = new Node(13);
  root -> left -> left = new Node(23);
  root -> left -> right = new Node(14);
  root -> right = new Node(5);
  root -> right -> left = new Node(7);
  root -> right -> right = new Node(9);
	
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



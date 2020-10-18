#include <iostream>
#include <queue>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};


//Values of all the nodes in the binary tree in pre-order format where true suggest the node exists and false suggests it is NULL
//eg "10 true 20 true 40 false false true 50 false false true 30 true 60 false false true 73 false false"

node *build(string s)
{
    if (s == "true")
    {
        int d;
        cin >> d;
        node *root = new node(d);
        string l;
        cin >> l;
        if (l == "true")
        {
            root->left = build(l);
        }
        string r;
        cin >> r;
        if (r == "true")
        {
            root->right = build(r);
        }
        return root;
    }
    return NULL;
}

//Optimized version for checking whether Binary Tree is balanced or not
pair<int,bool> isHeightBalancedOptimised(node *root)
{
    pair<int,bool> p;
    if(root==NULL){
        p.first=0;
        p.second=true;
        return p;
    }
     
     pair<int ,bool> l=isHeightBalancedOptimised(root->left);
     pair<int,bool> r=isHeightBalancedOptimised(root->right);
     p.first=max(l.first,r.first)+1;

     if(l.second==true && r.second==true && abs(l.first-r.first)<=1){
         p.second=true;
     }
     else
     p.second=false;

     return p;
}

int main()
{
    node *root = build("true");

    cout << boolalpha << isHeightBalancedOptimised(root).second;

    return 0;
}

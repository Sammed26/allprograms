#include <iostream>
#include <queue>

using namespace std;


class node
{
    public:
        int data;
        node* left;
        node* right;

        node(int data)
        {
            this->data = data;
            this->left = NULL;
            this->right = NULL;
        }

};


node* build_tree(node* root)
{
    cout<<"enter data"<<endl;
    int data;
    cin>>data;

    root = new node(data);

    // treat this value as end means no pointing next
    if(data == -1)
    {
        return NULL;
    }

    cout<<"enter data to insert at left of "<<data<<endl;
    root->left = build_tree(root->left);
    cout<<"enter data to insert at right of "<<data<<endl;
    root->right = build_tree(root->right);

    return root;
}

void level_order_traversal(node* root)
{
    queue<node*> q;

    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        node* temp = q.front();

        q.pop();

        if(temp == NULL)
        {
            cout<<endl;

            if(!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout<<temp->data<<" ";
            if(temp->left)
            {
                q.push(temp->left);
            }
            if(temp->right)
            {
                q.push(temp->right);
            }
        }

        
    }

}

int main()
{

    node* root = NULL;

    root = build_tree(root);
    // 1 2 4 13 -1 -1 -1 7 -1 -1 3 9 -1-1 11 -1 -1

    level_order_traversal(root);

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
#define int long long

struct Node
{
    int data;
    struct Node *left, *right;
};

struct Node *newNode(int data)
{
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));
    node->data = data;
    node->left = node->right = NULL;
    return node;
}
void InsertNode(Node *root, int cha, int data)
{
    if (root == NULL)
    {
        return;
    }
    if (root->data == cha)
    {
        if (root->right == NULL)
        {
            root->right = newNode(data);
            return;
        }
        else if (root->left == NULL)
        {
            root->left = newNode(data);
            return;
        }
    }
    else
    {
        InsertNode(root->left, cha, data);
        InsertNode(root->right, cha, data);
    }
}

int maxL = 0;
void printNode(Node *root, int level)
{
    if (root == NULL)
    {
        return;
    }
    if (level > maxL)
    {
        maxL = level;
    }
    // for (int i = 0; i < level; ++i)
    // {
    //     cout << '\t';
    // }
    // cout << root->data << endl;
    printNode(root->left, level + 1);
    printNode(root->right, level + 1);
}

int maxDepth(Node *node)
{
    if (node == NULL)
        return 0;
    else
    {
        /* compute the depth of each subtree */
        int lDepth = maxDepth(node->left);
        int rDepth = maxDepth(node->right);

        /* use the larger one */
        if (lDepth > rDepth)
            return (lDepth + 1);
        else
            return (rDepth + 1);
    }
}
int32_t main()
{

    int t;
    cin >> t;
    while (t--)
    {
        maxL = 0;
        int n;
        cin >> n;
        int cha, con;
        cin >> cha >> con;
        struct Node *root = newNode(cha);
        InsertNode(root, cha, con);
        for (int i = 0; i < n - 2; ++i)
        {
            cin >> cha >> con;
            InsertNode(root, cha, con);
        }
        // printNode(root, 0);
        cout<<maxDepth(root)-1<<endl;
    }
    return 0;
}

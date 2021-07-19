
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
void printNode(Node *root, int level)
{
    if (root == NULL)
    {
        return;
    }
    for (int i = 0; i < level; ++i)
    {
        cout << '\t';
    }
    cout << root->data << endl;
    printNode(root->left, level + 1);
    printNode(root->right, level + 1);
}
void InsertNode(Node *root, int cha, int data, char type)
{
    if (root == NULL)
    {
        return;
    }
    if (root->data == cha)
    {
        if (type == 'R')
        {
            root->right = newNode(data);
        }
        if (type == 'L')
        {
            root->left = newNode(data);
        }
    }
    else
    {
        InsertNode(root->left, cha, data, type);
        InsertNode(root->right, cha, data, type);
    }
}

int sumNode(Node *root)
{
    int res = 0;
    if (root != NULL)
    {

        if (root->left != NULL && root->left->left == NULL && root->left->right == NULL)
            res += root->left->data;
        else
            res += sumNode(root->left);
        res += sumNode(root->right);
    }
    return res;
}

int32_t main()
{

    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        int cha, con;
        char type;
        cin >> cha >> con >> type;
        struct Node *root = newNode(cha);
        InsertNode(root, cha, con, type);
        for (int i = 0; i < n - 1; ++i)
        {
            cin >> cha >> con >> type;
            InsertNode(root, cha, con, type);
        }

        cout << sumNode(root) << endl;
    }
    return 0;
}

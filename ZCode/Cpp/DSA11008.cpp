// C++ program to check if all leaves
// are at same level
#include <bits/stdc++.h>
using namespace std;

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
bool checkUtil(struct Node *root,
               int level, int *leafLevel)
{

    if (root == NULL)
        return true;

    if (root->left == NULL &&
        root->right == NULL)
    {
        if (*leafLevel == 0)
        {
            *leafLevel = level;
            return true;
        }

        return (level == *leafLevel);
    }

    return checkUtil(root->left, level + 1, leafLevel) &&
           checkUtil(root->right, level + 1, leafLevel);
}

bool check(struct Node *root)
{
    int level = 0, leafLevel = 0;
    return checkUtil(root, level, &leafLevel);
}

int main()
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
        //        cout<<root->data<<endl;
        //        printNode(root,0);
        if (check(root))
            cout << "1" << '\n';
        else
            cout << "0" << '\n';
    }
    return 0;
}

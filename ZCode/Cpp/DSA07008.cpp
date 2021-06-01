/**
 * @file DSA07008.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-05-12
 * 
 * @copyright Copyright (c) 2021
 * https://www.geeksforgeeks.org/convert-infix-prefix-notation/
 */

/* C++ implementation to convert
infix expression to postfix*/

#include <bits/stdc++.h>
using namespace std;

//Function to return precedence of operators
int prec(char c)
{
    if (c == '^')
        return 3;
    else if (c == '*' || c == '/')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}

// The main function to convert infix expression
//to postfix expression
void infixToPostfix(string s)
{

    stack<char> st; //For stack operations, we are using C++ built in stack
    string result;

    for (int i = 0; i < s.length(); i++)
    {
        char c = s[i];

        // If the scanned character is
        // an operand, add it to output string.
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
            result += c;

        // If the scanned character is an
        // ‘(‘, push it to the stack.
        else if (c == '(')
            st.push('(');

        // If the scanned character is an ‘)’,
        // pop and to output string from the stack
        // until an ‘(‘ is encountered.
        else if (c == ')')
        {
            while (!st.empty() && st.top() != '(')
            {
                char temp = st.top();
                st.pop();
                result += temp;
            }
            st.pop();
        }

        //If an operator is scanned
        else
        {
            while (!st.empty() && prec(s[i]) <= prec(st.top()))
            {
                char temp = st.top();
                st.pop();
                result += temp;
            }
            st.push(c);
        }
    }

    // Pop all the remaining elements from the stack
    while (!st.empty())
    {
        char temp = st.top();
        st.pop();
        result += temp;
    }

    cout << result << endl;
}

//Driver program to test above functions
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        infixToPostfix(s);
    }

    return 0;
}
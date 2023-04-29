#include "stack.h"

bool isMatchingPair(char, char);
bool isBalanced(string);

int main()
{
    string expression;
    cout << "Enter an expression: ";
    getline(cin, expression, ';');

    if (isBalanced(expression))
    {
        cout << "Expression is balanced." << endl;
    }

    return 0;
}

bool isMatchingPair(char char1, char char2) {
    if (char1 == '(' && char2 == ')')
        return true;
    else if (char1 == '{' && char2 == '}')
        return true;
    else if (char1 == '[' && char2 == ']')
        return true;
    else
        return false;
}

bool isBalanced(string expression) {
    stack<char> s;
    stack<char> mistake;

    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '(' || expression[i] == '{' || expression[i] == '[')
        {
            s.push(expression[i]);
            mistake.push(expression[i]);
        }
        else if (expression[i] == ')' || expression[i] == '}' || expression[i] == ']')
        {
            if (!isMatchingPair(s.top(), expression[i]))
            {
                cout << "Expression is not balanced." << endl;
                cout << "Mistake : " << expression[i] << " at " << i << endl;
                cout << "Expected char is : " << mistake.top() << endl;
                return false;
            }
            else
                s.pop();
        }
    }
    return s.isEmpty();
}
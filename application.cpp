#include "stack.h"

bool isMatchingPair(char, char);
bool isBalanced(string);

int main()
{
    ukr_lang;
    string expression;
    print("Введіть вираз: ");
    getline(cin, expression, ';');

    if (isBalanced(expression))
    {
        println("Вираз збалансовано.");
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
                println("Вираз не збалансовано.");
                println("Помилка з символом : '" << expression[i] << "' у " << i<< " комірці");
                println("Очікований символ : " << mistake.top());
                return false;
            }
            else
                s.pop();
        }
    }
    return s.isEmpty();
}

#include<stack>

bool isValidParenthesis(string s)
{
    // Write your code here.
    if(s.size() % 2 == 1) return false;
    stack<char> check;
    for(int i = 0 ; i < s.size() ; i++) {
        if(s[i] == '(' || s[i] == '{' || s[i] == '[') {
            check.push(s[i]);
        } else {
            char top = ' ';
            if (!check.empty())
                top = check.top();
            if ((s[i] == ')' && top == '(') || (s[i] == '}'&& top=='{') || (s[i]==']' && top=='['))
                check.pop();
            else
                return false;
        }
    }

    if(check.empty())
        return true;
    return false;
}
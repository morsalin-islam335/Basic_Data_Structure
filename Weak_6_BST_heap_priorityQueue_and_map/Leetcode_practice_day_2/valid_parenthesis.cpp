//program to detarmine if a string consists valid parenthesis or not

//problem link: https://leetcode.com/problems/valid-parentheses

class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(int i = 0; i< s.size(); i++)
        {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[') st.push(s[i]);
            else if(st.empty() && (s[i] == ')' || s[i] == '}' || s[i] == ']')) return false;
            else
            {
                if(st.top() =='(' )
                {
                    if(s[i] != ')') return false;
                    else st.pop();
                }
                else if(st.top() == '{')
                {
                    if(s[i] != '}') return false;
                    else st.pop();
                }
                else
                {
                    if(s[i] != ']') return false;
                    else st.pop();
                }
            }
        }
        if(st.empty()) return true;
        return false;
    }
};
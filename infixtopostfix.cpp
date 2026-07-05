#include <iostream>
#include <string>
#include <cctype>
#include <stack>
using namespace std;

int precedence(char ch){
    if (ch=='/' || ch=='*' || ch=='%') return 2;
    if( ch=='+' || ch=='-') return 1;
    return 0;
}

bool isoperator (char ch){
    return ch=='+' || ch=='-' ||
    ch=='/' || ch=='*' ||ch=='%' ;
}

string infixtopostfix(string infix) {
    stack<char>st;
    string postfix="";

    for(char ch: infix){
        if(isalnum(ch)){
            postfix+=ch;
        }
        else if(ch=='('){
            st.push(ch);
        }
        else if(ch==')'){
            while(!st.empty() && st.top()!='('){
                postfix+=st.top();
                st.pop();
            }
            if(!st.empty()){
                st.pop();
             // Remove '('
            }
        }
        else if(isoperator(ch)){
            while(!st.empty() && st.top()!='(' && precedence(st.top())>=precedence(ch)){
                postfix+=st.top();
                st.pop();
            }
            st.push(ch);
        }
    }
    while(!st.empty()){
        postfix+=st.top();
        st.pop();
    }
    return postfix;
}

int main(){
    string infix;

    cout << "Enter infix expression: ";
    cin >> infix;

    cout << "Postfix: " << infixtopostfix(infix);

    return 0;
}

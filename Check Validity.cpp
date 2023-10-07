#include <iostream>
#include <stack>
using namespace std;

bool isValid(string s) {
    stack<char> st;
    
    for (char c : s) {
        if (c == '(' || c == '[' || c == '{') {
            st.push(c);
        } else if (c == ')' || c == ']' || c == '}') {
            if (st.empty()) {
                return false;
            }
            
            char top = st.top();
            st.pop();
            
            if ((c == ')' && top != '(') || (c == ']' && top != '[') || (c == '}' && top != '{')) {
                return false;
            }
        }
    }
    
    return st.empty();
}

int main() {
    int n;
    cin >> n;
    cin.ignore();  // ignore the newline character after reading n
    
    while (n--) {
        string s;
        getline(cin, s);
        
        if (isValid(s)) {
            cout << "True" << endl;
        } else {
            cout << "False" << endl;
        }
    }
    
    return 0;
}

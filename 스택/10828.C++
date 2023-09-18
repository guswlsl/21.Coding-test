#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;
    string result = "";

    for (int i = 0; i < N; i++) {
        string s;
        cin >> s;

        stack<char> st;
        bool success = true;

        for (char ch : s) {
            if (ch == '(') {
                st.push(ch);
            } else if (ch == ')') {
                if (st.empty()) {
                    success = false;
                    break;
                } else if (st.top() == '(') {
                    st.pop();
                } else {
                    success = false;
                    break;
                }
            }
        }

        if (success && st.empty()) {
            result += "YES\n";
        } else {
            result += "NO\n";
        }
        while (!st.empty()) st.pop();
    }

    cout << result;
    return 0;
}


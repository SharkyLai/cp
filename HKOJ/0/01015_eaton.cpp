#include <bits/stdc++.h>
using namespace std;
int main() {
    int temp;
    string s;
    getline(cin,s);
    stack<int> stacc;
    for (int i=0; i<s.length(); i++) {
        if (s[i]=='(') {
            temp=1;
        } else if (s[i]==')') {
            temp=-1;
        } else if (s[i]=='[') {
            temp=2;
        } else if (s[i]==']') {
            temp=-2;
        } else if (s[i]=='{') {
            temp=3;
        } else if (s[i]=='}') {
            temp=-3;
        } else {
            continue;
        }
        if (stacc.empty()) {
            stacc.push(temp);
        } else if (temp<0) {
            if ((temp+stacc.top())==0) {
                stacc.pop();
            } else {
              cout << "No" << endl;
              return 0;
            }
        } else {
            stacc.push(temp);
        }
    }
    if (stacc.empty()) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}

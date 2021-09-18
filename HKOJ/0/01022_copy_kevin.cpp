#include <iostream>
#include <algorithm>

using namespace std;
struct something {
    long long score;
    string name;
};
bool cmp(something a, something b) {
    if (a.score == b.score) return a.name < b.name;
    return a.score > b.score;
}
int main() {    
    long long n; cin >> n;
    something arr[n+5];
    string s; getline(cin, s);
    for (int i = 0; i < n; i++) {
        getline(cin, arr[i].name);
        getline(cin, s);
        arr[i].score = stoll(s);
    }
    sort(arr, arr + n, cmp);
    for (int i = 0; i < n; i++) {
        cout << arr[i].name << " " << arr[i].score << "\n";
    }
}
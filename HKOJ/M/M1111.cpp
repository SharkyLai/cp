#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

void swap(int* a, int* b) { 
    int t = *a; 
    *a = *b; 
    *b = t; 
} 

int partition (string s, int low, int high) {
    int i = (low - 1);
    int pivot = s[high];
    for (int j = low; j <= high - 1; j++) {
        if (s[j] <= pivot) {
            i++;
            swap(s[i], s[j]);
        }
    }
    swap(s[i + 1], s[high]);
    return (i + 1);
}

void quickSort(string s, int low, int high) {
    if (low < high) {
        int pi = partition(s, low, high);
        quickSort(s, low, pi - 1);
        quickSort(s, pi + 1, high);
    }
}

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    string s; cin >> s;
    quickSort(s, 0, s.length() - 1); reverse(s.begin(), s.end()); cout << s << "\n";
    reverse(s.begin(), s.end());
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != '0' && s[0] == '0') {
            swap(s[i], s[0]);
            break;
        }
    }
    cout << s << "\n";
    return 0;
}
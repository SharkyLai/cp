#include <iostream>
#include <string>
#include <cctype>
#include <cstdio>
#include <algorithm>
#define ll long long

using namespace std;

void sort(int a[], int n) {
    for (int i = 0; i < n; i++) {
        int m = i; // index of smallest element
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[m]) {
                m = j;
            }
        }   
        swap(a[i], a[m]);
    }
}

int main() {
    int arr[7];
    int a, b, c;
    for (int i = 0; i < 7; i++) {
        cin >> arr[i];
    }
    sort(arr, 7);
    a = arr[0];
    b = arr[1];
    c = arr[6] - arr[0] - arr[1];
    cout << a << " " << b << " " << c;
}
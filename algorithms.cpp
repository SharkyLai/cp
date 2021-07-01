#include <iostream>
#include <string>
#include <cctype>
#include <cstdio>
#include <algorithm>
#define ll long long

using namespace std;

void selectionSort(int a[], int n) {
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

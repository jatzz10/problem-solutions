#include <bits/stdc++.h>
using namespace std;

void display_output_list(int n, int O[]) {
  for (int i = 0; i < n; i++) {
    cout << O[i] << " ";
  }
}

void solve(int n, int I[]) {
    int O[n] = {1}, product = 1, left = 1, right = 1;

    // Logic
    for (int i = 0; i < n; i++) {
        if (i > 0) {
            left *= I[i-1];
            O[i] *= left;
        } 
        if (n-i < n) {
            right *= I[n-i];
            O[i] *= right;
        }
    }

    display_output_list(n, O);
}

int main() {
    int n;
    // Specify length of the list as an input
    cin >> n;
    int I[n];
    // Provide the elements for the list
    for (int i = 0; i < n; i++) {
        cin >> I[i];
    }

    solve(n, I);
    return 0;
}
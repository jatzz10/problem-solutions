#include <bits/stdc++.h>
using namespace std;

void display_output_list(int n, int O[]) {
  for (int i = 0; i < n; i++) {
    cout << O[i] << " ";
  }
}

void solve(int n, int I[]) {
    int O[n], product = 1;

    // Logic
    for (int i = 0; i < n; i++) {
        product *= I[i];
    }
    for (int i = 0; i < n; i++) {
        O[i] = product / I[i];
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
#include <bits/stdc++.h>
using namespace std;

void display_output_list(int n, int O[]) {
  for (int i = 0; i < n; i++) {
    cout << O[i] << " ";
  }
}

void solve(int n, int I[]) {
    // Initializing the list elements with 0
    // This approach works if all the elements of input list are non-zero
    int O[n] = {0};
    int left = 1, right = 1, i = 1, j = n - 2;

    // Logic
    while (i < n && j >= 0) {
        // Purpose is to set the output list to 1 initially
        if (O[i] == 0) {
          O[i] = 1;
        }
        if (O[j] == 0) {
          O[j] = 1;
        }
      
        left *= I[i-1];
        O[i] *= left;
        i++;

        right *= I[j+1];
        O[j] *= right;
        j--;
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
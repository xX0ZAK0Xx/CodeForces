#include <iostream>
using namespace std;
int n, k, a, b = 0, s[100];
int main() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> a;
        s[i] = a;
    }
    for (int j = 1; j <= n; j++) {
        if (s[j] >= s[k] && s[j] > 0) {
            b++;
        }
    }
    cout << b;
}
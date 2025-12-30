#include <iostream>
using namespace std;

long long sum(long long n) {
    return n * (n + 1) / 2;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        long long L, R;
        cin >> L >> R;

        if (L > R) swap(L, R);  // FIX

        long long result = sum(R) - sum(L - 1);
        cout << result << "\n";
    }

    return 0;
}

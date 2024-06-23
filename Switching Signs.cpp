#include<bits/stdc++.h>
using namespace std;

void setvalue(vector<long int> &a, long int n) {
    for(long int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

int main() {
    long int N;
    cin >> N;
    
    vector<long int> arr(N);
    setvalue(arr, N);

    // Calculate prefix sums
    vector<long int> prefix(N + 1, 0);
    vector<long int> alt_prefix(N + 1, 0);

    for (long int i = 1; i <= N; i++) {
        prefix[i] = prefix[i - 1] + arr[i - 1];
        alt_prefix[i] = alt_prefix[i - 1] + ((i % 2 == 1) ? arr[i - 1] : -arr[i - 1]);
    }

    long int Q, l, r;
    cin >> Q;
    vector<long int> t(Q, 0);

    for (long int j = 0; j < Q; j++) {
        cin >> l >> r;
        long int total_sum = prefix[r] - prefix[l - 1];
        long int alt_sum = alt_prefix[r] - alt_prefix[l - 1];
        if ((l - 1) % 2 == 1) {
            alt_sum = -alt_sum;
        }
        t[j] = alt_sum;
    }
    
    for (long int i = 0; i < Q; i++) {
        cout << t[i] << endl;
    }

    return 0;
}


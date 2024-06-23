#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T) {
        long int N;
        cin >> N;

        long int i = 0;
        while ((1L << i) <= N) {
            i++;
        }
        cout << (1L << (i - 1)) << endl;
        T--;
    }

    return 0;
}

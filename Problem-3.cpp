#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;

    int limit = (a % 2 == 0) ? a - 1 : a;

    for (int i = 1; i <= limit; i += 2) {
        cout << i;
        if (i + 2 <= limit) cout << ", ";
    }

    return 0;
}

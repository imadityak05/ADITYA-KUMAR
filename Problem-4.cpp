#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    vector<int> nums = {1,2,8,9,12,46,76,82,15,20,30};
    map<int, int> result;

    for (int divisor = 1; divisor <= 9; divisor++) {
        int count = 0;
        for (int num : nums) {
            if (num % divisor == 0) {
                count++;
            }
        }
        result[divisor] = count;
    }

    cout << "{";
    for (int i = 1; i <= 9; i++) {
        cout << i << ":" << result[i];
        if (i != 9) cout << ", ";
    }
    cout << "}";

    return 0;
}

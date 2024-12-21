#include<iostream>
using std::cin;
using std::cout;

int main() {
    long long n;
    cin >> n;
    long long sumOfNNaturalNumbers = (n * (n + 1)) / 2; // O(1) time
    long long sumOfNumbers = 0;
    // O(n) time | O(1) space
    while(n - 1 > 0) {
        int num;
        cin >> num;
        sumOfNumbers += num;
        n--;
    }
    long long ans = sumOfNNaturalNumbers - sumOfNumbers;
    cout << ans << "\n";
    return 0;
}
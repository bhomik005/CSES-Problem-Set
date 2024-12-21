#include<iostream>
using std::cin;
using std::cout;

int main() {
    long long n; // 64 bits (n could be a biggy number)
    cin >> n;
    // base case
    if(n == 1) {
        cout << n;
        return 0;
    }
    cout << n << " ";
    while(n != 1) {
        if(n % 2 == 0) n = n / 2;
        else n = (n * 3) + 1;
        cout << n << " ";
    }
    return 0;
}
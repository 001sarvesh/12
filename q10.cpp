

#include <iostream>
using namespace std;

void reverseNumber(int N) {
    if (N > 0) {
        cout << N % 10;
        reverseNumber(N / 10);
    }
}

int main() {
    int N;
    cout << "Enter a number: ";
    cin >> N;
    cout << "Reverse number: ";
    reverseNumber(N);
    return 0;
}

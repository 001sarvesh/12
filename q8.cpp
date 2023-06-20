

#include <iostream>
using namespace std;

void decimalToBinary(int N) {
    if (N > 1) {
        decimalToBinary(N / 2);
    }
    cout << N % 2;
}

int main() {
    int N;
    cout << "Enter a decimal number: ";
    cin >> N;
    cout << "Binary representation: ";
    decimalToBinary(N);
    return 0;
}

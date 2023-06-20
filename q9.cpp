

#include <iostream>
using namespace std;

void decimalToOctal(int N) {
    if (N > 7) {
        decimalToOctal(N / 8);
    }
    cout << N % 8;
}

int main() {
    int N;
    cout << "Enter a decimal number: ";
    cin >> N;
    cout << "Octal representation: ";
    decimalToOctal(N);
    return 0;
}

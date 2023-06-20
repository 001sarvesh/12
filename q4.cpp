

#include <iostream>
using namespace std;

void printOddNumbersReverse(int N) {
    if (N % 2 != 0) {
        cout << N << " ";
    }
    if (N > 1) {
        printOddNumbersReverse(N - 1);
    }
}

int main() {
    int N;
    cout << "Enter the value of N: ";
    cin >> N;
    cout << "First " << N << " odd natural numbers in reverse order: ";
    printOddNumbersReverse(N * 2 - 1);
    return 0;
}

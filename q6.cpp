

#include <iostream>
using namespace std;

void printEvenNumbersReverse(int N) {
    if (N % 2 == 0) {
        cout << N << " ";
    }
    if (N > 1) {
        printEvenNumbersReverse(N - 1);
    }
}

int main() {
    int N;
    cout << "Enter the value of N: ";
    cin >> N;
    cout << "First " << N << " even natural numbers in reverse order: ";
    printEvenNumbersReverse(N);
    return 0;
}


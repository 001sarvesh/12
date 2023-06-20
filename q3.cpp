

#include <iostream>
using namespace std;

void printOddNumbers(int N) {
    if (N > 1) {
        printOddNumbers(N - 1);
    }
    if (N % 2 != 0) {
        cout << N << " ";
    }
}

int main() {
    int N;
    cout << "Enter the value of N: ";
    cin >> N;
    cout << "First " << N << " odd natural numbers: ";
    printOddNumbers(N * 2 - 1);
    return 0;
}

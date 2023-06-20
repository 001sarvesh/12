

#include <iostream>
using namespace std;

void printEvenNumbers(int N) {
    if (N > 1) {
        printEvenNumbers(N - 1);
    }
    if (N % 2 == 0) {
        cout << N << " ";
    }
}

int main() {
    int N;
    cout << "Enter the value of N: ";
    cin >> N;
    cout << "First " << N << " even natural numbers: ";
    printEvenNumbers(N * 2);
    return 0;
}

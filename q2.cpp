

#include <iostream>
using namespace std;

void printNaturalNumbersReverse(int N) {
    if (N > 0) {
        cout << N << " ";
        printNaturalNumbersReverse(N - 1);
    }
}

int main() {
    int N;
    cout << "Enter the value of N: ";
    cin >> N;
    cout << "First " << N << " natural numbers in reverse order: ";
    printNaturalNumbersReverse(N);
    return 0;
}

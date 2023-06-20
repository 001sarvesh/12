#include <iostream>
using namespace std;

void printNaturalNumbers(int N) {
    if (N > 0) {
        printNaturalNumbers(N - 1);
        cout << N << " ";
    }
}

int main() {
    int N;
    cout << "Enter the value of N: ";
    cin >> N;
    cout << "First " << N << " natural numbers: ";
    printNaturalNumbers(N);
    return 0;
}

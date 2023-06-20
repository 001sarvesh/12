

#include <iostream>
using namespace std;

void printSquares(int N) {
    if (N > 0) {
        printSquares(N - 1);
        cout << N * N << " ";
    }
}

int main() {
    int N;
    cout << "Enter the value of N: ";
    cin >> N;
    cout << "Squares of first " << N << " natural numbers: ";
    printSquares(N);
    return 0;
}

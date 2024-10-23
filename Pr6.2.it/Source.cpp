#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

void Create(int* a, const int size, const int Low, const int High) {
    for (int i = 0; i < size; i++) {
        a[i] = Low + rand() % (High - Low + 1);
    }
}

void Print(int* a, const int size) {
    for (int i = 0; i < size; i++) {
        cout << "a[" << i << "] = " << a[i] << "     ";
    }
    cout << endl;
}

void SwapPairs(int* a, const int size) {
    for (int i = 1; i < size; i += 2) {
        // ̳����� ������ ������ ������ � ��������� ��������
        int temp = a[i];
        a[i] = a[i - 1];
        a[i - 1] = temp;
    }
}

int main() {
    srand((unsigned)time(NULL));
    const int n = 10;  // ���� 2n ��������, �� n = 5, ���� ����� ������ = 2 * n
    int a[n];
    int Low = -10;
    int High = 10;
    Create(a, n, Low, High);

    cout << "Start array: ";
    Print(a, n);

    // ��������� ������� ��� ���� ������ ��������
    SwapPairs(a, n);

    cout << "Modified array: ";
    Print(a, n);

    return 0;
}

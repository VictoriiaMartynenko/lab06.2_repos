#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

void Create(int* a, const int size, const int Low, const int High, int i = 0) {
    a[i] = Low + rand() % (High - Low + 1);
    if (i < size - 1)
        Create(a, size, Low, High, i + 1);
}

void Print(int* a, const int size, int i = 0) {
    cout << "a[" << i << "] = " << a[i] << " ";
    if (i < size - 1)
        Print(a, size, i + 1);
    else
        cout << endl;
}

void SwapPairs(int* a, const int size, int i = 1) {
    if (i < size) {
        // Міняємо місцями елемент з парним індексом з попереднім
        int temp = a[i];
        a[i] = a[i - 1];
        a[i - 1] = temp;
        // Рекурсивно викликаємо для наступної пари
        SwapPairs(a, size, i + 2);
    }
}

int main() {
    srand((unsigned)time(NULL));
    const int n = 10;  // Маємо 2n елементів
    int a[n];
    int Low = -10;
    int High = 10;

    Create(a, n, Low, High);
    cout << "Start array: ";
    Print(a, n);

    // Викликаємо функцію для зміни місцями елементів
    SwapPairs(a, n);

    cout << "Modified array: ";
    Print(a, n);

    return 0;
}

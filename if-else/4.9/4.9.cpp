// Шахматный король ходит по горизонтали, вертикали и диагонали, но только на 1 клетку. Даны две различные клетки шахматной доски, определите, может ли король попасть с первой клетки на вторую одним ходом.

// Формат входных данных
// Программа получает на вход четыре числа от 1 до 8 каждое, задающие номер столбца и номер строки сначала для первой клетки, потом для второй клетки.
// Формат выходных данных
// Программа должна вывести YES, если из первой клетки ходом короля можно попасть во вторую или NO в противном случае.
// Sample Input:

// 4
// 4
// 5
// 5
// Sample Output:

// YES


#include <iostream>
using namespace std;
int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    bool step = (a + 1 == c || a - 1 == c || a == c) && (b == d || b + 1 == d || b - 1 == d) == 1;
    if (step == 1) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}

// Улитка

// Улитка ползет по вертикальному шесту высотой H метров, поднимаясь за день на A метров, а за ночь спускаясь на B метров. На какой день улитка доползет до вершины шеста?


// Формат входных данных

// Программа получает на вход целые неотрицательные числа H, A, B, причем H > B. Числа не превосходят 100.

// Формат выходных данных

// Программа должна вывести одно натуральное число. Гарантируется, что A > B.


// Sample Input:

// 10
// 3
// 2
// Sample Output:

// 8

#include <iostream>
using namespace std;
int main()
{
  int h,a,b,s;
  cin >>h>>a>>b;
  s=a-b;
  cout <<((h-a)+s-1)/s+1;
  
}
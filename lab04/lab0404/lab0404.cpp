﻿// lab0404.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>

using namespace std;

int main() {

    int i, j;
    int N = 4;
    int M[4][4] =
    {
        { 5, 4, 8, 4 },
        { 4, 2, 16, 3 },
        { 6, 8, 2, 9 },
        { 5, 1, 2, 9 }
    };

    int sum = 0;
    for (int i = 0; i < N; i++) {
        if (M[i][N - 1 - i] % 4 == 0) {
            sum += M[i][N - 1 - i];
        }
    }

    //for (i=0; i<3; i++)
     //   for (j=0; j<4; j++)
      //      Matr[i][j] = 0;
    cout << sum;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.

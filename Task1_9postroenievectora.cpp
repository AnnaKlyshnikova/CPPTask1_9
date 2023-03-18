#include <iostream>
#include <vector>

using namespace std;

int main() {
    int rows, cols;
    cout << "Введите количество строк и столбцов матрицы: ";
    cin >> rows >> cols;

    int** matrix = new int*[rows];
    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[cols];
    }

    cout << "Введите элементы матрицы:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    vector<int> column_sums(cols, 0);
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            column_sums[i] += matrix[j][i];
        }
    }

    cout << "Суммы элементов столбцов матрицы: ";
    for (int i = 0; i < cols; i++) {
        cout << column_sums[i] << " ";
    }

    for (int i = 0; i < rows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}

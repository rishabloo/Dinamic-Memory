#include <iostream>

int** create_two_dim_array(int rows, int columns);
void fill_two_dim_array(int** arrayAdress, int rows, int columns);
void print_two_dim_array(int** arrayAdress, int rows, int columns);
void delete_two_dim_array(int** arrayAdress, int rows);

int main()
{
    int rows;
    std::cout << "Введите количество строк: ";
    std::cin >> rows;

    int columns;
    std::cout << "Введите количество столбцов: ";
    std::cin >> columns;

    int** matrix{create_two_dim_array(rows, columns)};

    fill_two_dim_array(matrix, rows, columns);

    std::cout << "Таблица умножения:" << std::endl;
    print_two_dim_array(matrix, rows, columns);

    delete_two_dim_array(matrix, rows);

    return 0;
}

int** create_two_dim_array(int rows, int columns) {
    int** arr = new int*[rows];
    for (int i = 0; i < rows; i++) {
        arr[i] = new int[columns];
    }
    return arr;
}

void fill_two_dim_array(int** arrayAdress, int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            arrayAdress[i][j] = (i + 1) * (j + 1);
        }
    }
}


void print_two_dim_array(int** arrayAdress, int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            
            std::cout << arrayAdress[i][j] << " ";
        }
        std::cout << std::endl;
    }
}


void delete_two_dim_array(int** arrayAdress, int rows) {
    for (int i = 0; i < rows; i++) {
        delete[] arrayAdress[i];
    }
    delete[] arrayAdress;
}
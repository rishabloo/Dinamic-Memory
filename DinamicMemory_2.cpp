#include<iostream>

double* createArray(int size);

int main()
{
    int size;   
    std::cout << "Введите размер массива: ";
    std::cin >> size;

    double* arr{createArray(size)};

    std::cout << "Массив: ";
    for(int i{}; i < size; ++i ) 
    {
        std::cout << arr[i] << " " << std::endl;
    }

    delete[] arr;
    return 0;

}

double* createArray(int size){

    return new double[size];

}
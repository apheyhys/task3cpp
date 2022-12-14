#pragma once
#include <fstream>
#include <iostream>
using namespace std;

int array_size(const char *filename) {
    ifstream readfile(filename, ios::in);

    // Читаем все символы, включая пробелы
    readfile >> std::noskipws;

    if (!readfile) {
        cout << "Ошибка открытия файла" << endl;
    } else {
        int count = 0;
        char ch;
        while (!readfile.eof()) {
            readfile >> ch;
            count++;
        }

        int arr_length;

        if (count > MAX) {
            arr_length = MAX;
        } else {
            arr_length = count;
        }
        return arr_length;
    }
    return 0;
}
#pragma once
#include <fstream>
using namespace std;

void writefile(const char *total_list, const char *filename) {
    // Открываем или создаем файл для записи
    ofstream writefile(filename, ios_base::trunc);

    // Записываем поток в файл
    writefile << total_list;

    writefile.close();
}
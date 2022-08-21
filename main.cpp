// Задаем константы
#define MAX 80 // максимальное количество символов в файле

#include <iostream>
// Функция записи в файл
#include "writefile.h"
// Функция чтения из файла
#include "readfile.h"
// Функция для определения количества символов в исходном файле
#include "array_size.h"
// Функция для определения порядкового номера элемента, после которого нужно добавлять новый элемент
#include "find_element_number.h"
// Функция для добавления нового элемента
#include "add_element.h"

using namespace std;

// --- !Нужно прописать пути!
#define MAIN_FILE_NAME "/home/apheyhys/CLionProjects/task3cpp/readfile.txt" // адрес основного текста
#define TOTAL_STRING "/home/apheyhys/CLionProjects/task3cpp/totalstring.txt" // итоговый файл


int main() {
    // Получаем количество символов в файле, если размер больше 80 символов, то возвращаем 80
    int size = array_size(MAIN_FILE_NAME);

    // Читаем файл, возвращаем указатель на массив
    const char *read_file = readfile(MAIN_FILE_NAME, size);

    cout << "Изначальная стока:" << endl;
    cout << "\"" << read_file << "\"" << endl;

    // Запрашиваем символ, после которого нужно вставить новый элемент
    char searched_symbol;
    cout << "-----------------------------" << endl;
    cout << "Введите символ, после которого нужно вставить новый элемент:" << endl;
    cin >> searched_symbol;

    // Запрашиваем символ, который нужно вставить
    char inserted_element;
    cout << "Введите символ который нужно вставить:" << endl;
    cin >> inserted_element;

    // Ищем порядковый номер элемента, после которого нужно произвести вставку
    int element_number = find_element_number(read_file, searched_symbol, size);

    // Возвращаем получившийся массив
    const char * total_list = add_element(read_file, element_number, inserted_element, size);

    cout << "Итоговая стока:" << endl;
    cout << "\"" << total_list << "\"" << endl;

    // Записываем в файл
    writefile(total_list, TOTAL_STRING);

    return 0;
}





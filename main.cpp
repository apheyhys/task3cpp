#include <iostream>
#include <cstdio>

using namespace std;

#include <fstream>


// Задаем константы
#define MAX 80 // максимальное количество символов в файле
// --- !Нужно прописать путь до файла для Windows. Сейчас стоит путь для linux. Он не будет работать ---
#define MAIN_FILE_NAME "/home/ubuntu/CLionProjects/task3cpp/readfile.txt" // адрес основного текста
//#define SEARCH_SYMBOL "/home/ubuntu/CLionProjects/untitled1/search_symbol.txt" // искомый символ
//#define ADDED_SYMBOL "/home/ubuntu/CLionProjects/untitled1/added_symbol.txt" // символ, который нужно добавить
//#define TOTAL_STRING "/home/ubuntu/CLionProjects/untitled1/totalstring.txt" // итоговый файл


char *readfile(char *filename);

int main() {
//    setlocale(LC_ALL, "ru");
    const char *word = "";
    cout << word << endl;
    const char *read_file = readfile(MAIN_FILE_NAME);
    cout << read_file << endl;
    return 0;
}

char *readfile(char *filename) {
    ifstream readfile(filename, ios::in);
    if (!readfile) {
        cout << "Ошибка открытия файла" << endl;
        return reinterpret_cast<char *>(1);
    } else {
        cout << "Файл открылся" << endl;
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

        char *arr = new char[arr_length];

        ifstream doublereadfile(filename);
        doublereadfile >> std::noskipws;

        for (int n = 0; n < arr_length; ++n) {
            doublereadfile >> arr[n];
        }
        return arr;
    }
}





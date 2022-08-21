#pragma once

char *add_element(const char *primary_list, int element_number, char added_symbol, int size) {
    // создаем новый массив, размером n + 1
    char *total_list = new char[size + 1];

    int i = 0;

    for (int n = 0; n < size; n++) {
        total_list[i] = primary_list[n];
        if (n == element_number) { // Если номер итерации соответствует номеру элемента после которого нужно вставить,
            total_list[i+1] = added_symbol; // то вставляем элемент и увеличиваем индекс на 1
            i++;
        }
        i++;
    }

    return total_list;
}

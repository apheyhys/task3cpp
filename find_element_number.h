#pragma once

int find_element_number(const char *primary_list, char searched_symbol, int string_size) {

    int searched_number;

    for (int k = 0; k < string_size; k++) {
        if (primary_list[k] == searched_symbol) {
            searched_number = k; // Ищем нужный символ, а затем сразу завершаем цикл и возвращаем порядковый номер
            break;
            return searched_number;
        } else {
            throw invalid_argument("Элемент не найден!");
            return -1;
        }
    }

}

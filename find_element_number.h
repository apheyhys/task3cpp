#pragma once

int find_element_number(const char *primary_list, char searched_symbol, int string_size) {

    int searched_number;

    // Переменная для проверки наличия символа в массиве
    bool symbol_missing = false;

    for (int k = 0; k < string_size; k++) {
        if (primary_list[k] == searched_symbol) {
            searched_number = k; // Ищем нужный символ, а затем сразу завершаем цикл и возвращаем порядковый номер
            symbol_missing = true;
            break;

        }
    }
    if (!symbol_missing) {
        throw invalid_argument("Элемент не найден!");
    }
    return searched_number;
}

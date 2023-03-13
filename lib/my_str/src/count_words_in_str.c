/*
** EPITECH PROJECT, 2023
** count a nb of words into an str
** File description:
** count_words_in_str
*/

#include <stdbool.h>
#include "my_str.h"

int count_words_in_str(char *str)
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i += 1) {
        if (my_char_isalpha(str[i]) == true && my_char_isalpha(str[i + 1])
        == false) {
            count += 1;
        }
    }
    return count;
}

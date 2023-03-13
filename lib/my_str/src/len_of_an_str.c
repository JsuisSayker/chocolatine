/*
** EPITECH PROJECT, 2023
** return the len of an str
** File description:
** len_of_an_str
*/

#include <stdbool.h>
#include "my_str.h"

int len_of_an_str(char *str, int count)
{
    int i = count;
    while (str[i] != '\0') {
        if (my_char_isalpha(str[i]) == false) {
            return i;
        }
        i += 1;
    }
    return i;
}

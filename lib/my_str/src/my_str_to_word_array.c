/*
** EPITECH PROJECT, 2023
** my_str_to_word_array function
** File description:
** my_str_to_word_array
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>
#include "my_str.h"

static void terminate_a_word(char **array_words, int i, int *char_in_str,
int *count)
{
    array_words[i][(*char_in_str)] = '\n';
    (*count) += 1;
    (*char_in_str) = 0;
}

static void not_a_char_in_str(char *str, int *count)
{
    while (my_char_isalpha(str[(*count)]) == false) {
        (*count) += 1;
    }
}

char **my_str_to_word_array(char *str)
{
    int nb_words = count_words_in_str(str);
    char **array_words = malloc(sizeof(char *) * nb_words + 1);
    int count = 0;
    int char_in_str = 0;
    for (int i = 0; i < nb_words; i += 1) {
        if (my_char_isalpha(str[count]) == false) {
            not_a_char_in_str(str, &count);
        }
        array_words[i] = malloc(sizeof(char) * len_of_an_str(str, count) + 1);
        while (str[count] != '\0' && my_char_isalpha(str[count]) == true) {
            array_words[i][char_in_str] = str[count];
            count += 1;
            char_in_str += 1;
        }
        terminate_a_word(array_words, i, &char_in_str, &count);
    }
    array_words[nb_words + 1] = NULL;
    return array_words;
}

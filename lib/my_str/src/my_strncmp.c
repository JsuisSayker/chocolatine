/*
** EPITECH PROJECT, 2022
** my_strncmp
** File description:
** strncmp
*/

int my_strlen(const char *str);

int my_strncmp(char const *s1, char const *s2, int n)
{
    int count = 0;
    while (s1[count] != '\0' || s1[count] != '\0' && n > count) {
        if (s1[count] - s2[count] != 0) {
            return (s1[count] - s2[count]);
        }
    }
    return 0;
}

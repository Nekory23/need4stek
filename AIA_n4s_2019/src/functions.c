/*
** EPITECH PROJECT, 2020
** n4s
** File description:
** util functions
*/

#include <unistd.h>
#include "stek.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i = i + 1;
    }
}

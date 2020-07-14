/*
** EPITECH PROJECT, 2020
** need4stek
** File description:
** main
*/

#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "stek.h"

int main(void)
{
    long unsigned size = 10;
    char *buff = malloc(sizeof(char) * size);

    write(1, START, strlen(START));
    getline(&buff, &size, stdin);
    ia();
    free(buff);
    return (SUCCESS);
}

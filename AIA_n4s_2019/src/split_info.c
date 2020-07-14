/*
** EPITECH PROJECT, 2020
** n4s
** File description:
** split the information of the get_info
*/

#include <stdlib.h>
#include "stek.h"

static int get_nbr_info(char *buff, char sep)
{
    int nbr = 1;

    for (int i = 0; buff[i] != '\0'; i++)
        if (buff[i] == sep)
            nbr++;
    return (nbr);
}

char **split_info(char *buff)
{
    int nbr = get_nbr_info(buff, ':');
    char **split = malloc(sizeof(char *) * nbr);
    int u = 0;

    for (int i = 0; i != nbr; i++)
        split[i] = malloc(sizeof(char) * 20);
    for (u = 2; buff[u] < '0' || buff[u] > '9'; u++);
    for (int i = u, j = 0, z = 0; buff[i] != '\0'; i++, z++) {
        if (buff[i] == ':') {
            split[j][z + 1] = '\0';
            i++;
            j++;
            z = 0;
        }
        split[j][z] = buff[i];
    }
    split[33] = NULL;
    return (split);
}

/*
** EPITECH PROJECT, 2020
** n4s
** File description:
** handles the speed
*/

#include <stdio.h>
#include <stdlib.h>
#include "stek.h"

static void gest_speed_bis(int mid)
{
    if (mid < 1000 && mid >= 500)
        exec_speed(FORWARD, "0.4");
     if (mid < 500 && mid >= 100)
        exec_speed(FORWARD, "0.2");
     if (mid < 100)
         exec_speed(FORWARD, "0.1");
}

void gest_speed(char **split)
{
    int mid = atoi(split[15]);
    long unsigned size = 10;
    char *buff = malloc(sizeof(char) * size);

    if (mid >= 2000)
        exec_speed(FORWARD, "1");
    else if (mid < 2000 && mid >= 1500)
        exec_speed(FORWARD, "0.8");
    else if (mid < 1500 && mid >= 1000)
        exec_speed(FORWARD, "0.6");
    gest_speed_bis(mid);
    getline(&buff, &size, stdin);
    free(buff);
}

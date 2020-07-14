/*
** EPITECH PROJECT, 2020
** n4s
** File description:
** handles the turning motion
*/

#include <unistd.h>

#include <stdio.h>
#include <stdlib.h>
#include "stek.h"

static void turn_right(int mid)
{
    if (mid >= 800)
        exec_turn("-0.05");
    else if (mid < 800 && mid >= 500)
        exec_turn("-0.2");
    else if (mid < 500 && mid >= 300)
        exec_turn("-0.4");
    else
        exec_turn("-0.5");
}

static void turn_left(int mid)
{
    if (mid >= 800)
        exec_turn("0.05");
    else if (mid < 800 && mid >= 500)
        exec_turn("0.2");
    else if (mid < 500 && mid >= 300)
        exec_turn("0.4");
    else
        exec_turn("0.5");
}

void gest_turn(char **split)
{
    long unsigned size = 10;
    char *buff = malloc(sizeof(char) * size);
    float r = atof(split[31]);
    float l = atof(split[0]);
    int mid = atoi(split[15]);

    if ((r - l) > 0)
        turn_right(mid);
    else
        turn_left(mid);
    getline(&buff, &size, stdin);
    free(buff);
}

/*
** EPITECH PROJECT, 2020
** n4s
** File description:
** exec commands
*/

#include <string.h>
#include <unistd.h>
#include "stek.h"

void exec_cmd(char const *cmd)
{
    write(1, cmd, strlen(cmd));
}

void exec_turn(char *turn)
{
    write(1, "WHEELS_DIR:", strlen("WHEELS_DIR:"));
    my_putstr(turn);
    my_putchar('\n');
}

void exec_wait(char *nbr)
{
    write(1, "CYCLE_WAIT:", strlen("CYCLE_WAIT:"));
    my_putstr(nbr);
    my_putchar('\n');
}

void exec_speed(char const *cmd, char *speed)
{
    write(1, cmd, strlen(cmd));
    my_putstr(speed);
    my_putchar('\n');
}

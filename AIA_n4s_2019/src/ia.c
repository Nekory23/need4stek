/*
** EPITECH PROJECT, 2020
** n4s
** File description:
** handles the ia
*/

#include <string.h>

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "stek.h"

static void free_split(char **split)
{
    for (int i = 0; split[i] != NULL; i++)
        free(split[i]);
    free(split);
}

static int check_clear(char **split)
{
    long unsigned size = 10;
    char *buff = malloc(sizeof(char) * size);

      for (int i = 0; split[i] != NULL; i++) {

          if (my_strcmp(split[i], "Track Cleared")) {
              exec_speed(FORWARD, "0");
              getline(&buff, &size, stdin);
              exec_wait("20");
              getline(&buff, &size, stdin);
              exec_cmd(END);
              getline(&buff, &size, stdin);
              return (1);
          }
      }
      return (0);
}

static char **get_info(char **split)
{
    long unsigned size = 10;
    char *buff = malloc(sizeof(char) * size);

    exec_cmd(INFO);
    getline(&buff, &size, stdin);
    split = split_info(buff);
    if (check_clear(split) == 1)
        return (NULL);
    return (split);
}

void ia(void)
{
    char **split;

    while (1) {
        split = get_info(split);
        if (split == NULL)
            break;
        gest_speed(split);
        split = get_info(split);
        if (split == NULL)
            break;
        gest_turn(split);
        split = get_info(split);
        if (split == NULL)
            break;
    }
    free_split(split);
}

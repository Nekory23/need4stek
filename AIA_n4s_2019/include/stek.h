/*
** EPITECH PROJECT, 2020
** need4stek
** File description:
** .h
*/

#ifndef _STEK_H_
#define _STEK_H_


/////////////////
//     IA      //
/////////////////
void ia(void);
char **split_info(char *);
void do_something(char **);
void gest_speed(char **);
void gest_turn(char **);

/////////////////
// EX COMMANDS //
/////////////////
void exec_cmd(char const *);
void exec_turn(char *);
void exec_wait(char *);
void exec_speed(char const *, char *);
void my_putchar(char);
void my_putstr(char const *);
int my_strcmp(char const *, char const *);

/////////////////
//  COMMANDS   //
/////////////////
/* WITHOUT ARG*/
static const char START[] = "START_SIMULATION\n";
static const char END[] = "STOP_SIMULATION\n";
static const char INFO[] = "GET_INFO_LIDAR\n";
static const char SPEED[] = "GET_CURRENT_SPEED\n";
static const char TURN_RATE[] = "GET_CURRENT_WHEELS\n";
static const char SPEED_MAX[] = "GET_CAR_SPEED_MAX\n";
static const char SPEED_MIN[] = "GET_CAR_SPEED_MIN\n";
static const char TIME[] = "GET_INFO_SIMTIME\n";

/* WITH ARG*/
static const char FORWARD[] = "CAR_FORWARD:";
static const char BACKWARD[] = "CAR_BACKWARD:";

/////////////////
//   MACROS    //
/////////////////
static const int TRUE = 1;
static const int FALSE = 0;
static const int ERROR = 84;
static const int SUCCESS = 0;

#endif /*_STEK_H_*/

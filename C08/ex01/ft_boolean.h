#ifndef BOOLEAN_H
#define BOOLEAN_H

#include <unistd.h>

typedef enum s_bool {
    FALSE,
    TRUE
} t_bool;

#define EVEN(nbr) (nbr%2==0)
#define EVEN_MSG "I have an even number of arguments.\n"
#define ODD_MSG "I have an odd number of arguments.\n"
#define SUCCESS 0

#endif
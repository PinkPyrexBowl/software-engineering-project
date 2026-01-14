#include "lexer.h"
#include <stdio.h>

int main(int argc, char **argv)
{
    char input[] = "test[   t(*,] )/est2 q+++test 3";
    lex_tokens(input, NULL);
}
#include "lexer.h"
#include <stdio.h>

int main(char** argv, int argc)
{
    char input[20] = "test   test2 test 3\0";
    lex_tokens(input, NULL);
}
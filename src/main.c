#include "lexer.h"
#include <stdio.h>

int main(int argc, char **argv)
{
    char input[20] = "test   test2 test 3";
    lex_tokens(input, NULL);
}
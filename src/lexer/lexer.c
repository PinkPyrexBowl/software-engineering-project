#include <stdio.h>
#include <string.h>
#include "lexer.h"
#include "queue.h"

TokenType get_token_type(char *token_str);

CharQueue q;

void lex_tokens(char *input, Token *tokens)
{
    const char delimiter[2] = " ";
    char *chunk = strtok(input, delimiter);

    while (chunk != NULL)
    {
        for (int i = 0; chunk[i] != '\0'; i++)
        {
            
        }

        chunk = strtok(NULL, delimiter);
    }
}

TokenType get_token_type(char *token_str)
{
    if (strcmp(token_str, "PRINT") == 0) return PRINT;
}

inline bool is_special_character(char c)
{
    switch (c)
    {
        case '+':
        case '-':
            return true;
        default:
            return false;
    }
}
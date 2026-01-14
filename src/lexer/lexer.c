#include "lexer.h"
#include "queue.h"
#include <stdio.h>
#include <string.h>

TokenType get_token_type(char *token_str);
bool is_special_character(char c);

CharQueue q;

void lex_tokens(char *input, Token *tokens)
{
    const char delimiter[2] = " ";
    char *chunk = strtok(input, delimiter);

    while (chunk != NULL)
    {
        for (int i = 0; chunk[i] != '\0'; i++)
        {
            if (!is_special_character(chunk[i]))
            {
                
            }
        }

        chunk = strtok(NULL, delimiter);
    }
}

TokenType get_token_type(char *token_str)
{
    if (strcmp(token_str, "PRINT") == 0)
        return PRINT;

    return VARIABLE;
}

inline bool is_special_character(char c)
{
    switch (c)
    {
        case '+':
        case '-':
        case '*':
        case '/':
        case '(':
        case ')':
        case '[':
        case ']':
        case ',':
            return true;
        default:
            return false;
    }
}
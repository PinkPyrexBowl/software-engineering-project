#ifndef _H_LEXER
#define _H_LEXER

#include "token.h"

#define NUM_VALID_CHARACTER (96)

void lex_tokens(char *input, Token *tokens);

#endif
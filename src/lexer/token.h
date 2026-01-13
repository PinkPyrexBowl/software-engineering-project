#ifndef _H_LEXER_TOKEN
#define _H_LEXER_TOKEN

#define MAX_TOKEN_LEN (50U)

typedef enum TokenType
{
    // Types
    CHAR, BYTE, SHORT, INT, LONG, FLOAT,
    // Instructions
    PRINT, GOTO, GOSUB, RETURN, END, INPUT, WAIT, PAUSE, POKE, PEAK, LEN,
    // Control
    IF, ELSEIF, ELSE, ENDIF, THEN,
    WHILE, WEND,
    DO, LOOP,
    FOR, NEXT,
    // Operators
    OPEN_PARENTHESIS, CLOSE_PARENTHESIS, OPEN_BRACKET, CLOSE_BRACKET,
    EQUAL, NOT_EQUAL, GREATER_THAN, GREATER_EQ_THAN, LESS_THAN, LESS_EQ_THAN,
    SHIFT_LEFT, SHIFT_RIGHT, NOT, AND, XOR, OR, MOD,
    // Values
    VARIABLE, LITERAL
} TokenType;

typedef struct Token
{
    TokenType type;
    char *value;
} Token;

#endif
#ifndef TOKEN_H
#define TOKEN_H

#include <string>
#include "token_type.h"

class Token {
public:
    Token(TokenType type, const std::string& lexeme, const std::string& literal, int line);

    std::string toString() const;

private:
    TokenType type;
    std::string lexeme;
    std::string literal;
    int line;
};

#endif


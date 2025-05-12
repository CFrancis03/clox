#include "token.h"
#include "token_type.h"

Token::Token(TokenType type, const std::string& lexeme, const std::string& literal, int line)
    : type(type), lexeme(lexeme), literal(literal), line(line) {}


std::string Token::toString() const {
    return "[Token: " + std::string(tokenTypeToString(type)) +
           ", lexeme=\"" + lexeme +
           "\", literal=\"" + literal +
           "\", line=" + std::to_string(line) + "]";
}


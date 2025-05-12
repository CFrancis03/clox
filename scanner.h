#ifndef SCANNER_H
#define SCANNER_H

#include <string>
#include <unordered_map>
#include <vector>
#include "token.h"
#include "token_type.h"

class Scanner {
public:
    Scanner(const std::string& source);
    std::vector<Token> scanTokens();

private:
    std::string source;
    std::vector<Token> tokens;
    std::unordered_map<std::string, TokenType> keywords;
    size_t start = 0;
    size_t current = 0;
    int line = 1;

    void initKeywords();
    void scanToken();
    void identifier();
    void number();
    void string();

    bool match(char expected);
    bool isAtEnd();
    char advance();
    char peek();
    char peekNext();
    bool isAlpha(char c);
    bool isAlphaNumeric(char c);
    bool isDigit(char c);

    void addToken(TokenType type);
    void addToken(TokenType type, const std::string& literal);
};

#endif


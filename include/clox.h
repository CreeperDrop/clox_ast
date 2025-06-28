#include <stdio.h>
#include <stdlib.h>

#define WELCOME "cLox AST Implementation v0.1"
#define PROMPT "> "

void read_line(char* line);
void print_line(char* line);
void runPrompt();
void runFile(char* file);

enum TokenType {
	// Single chars
	LEFT_PAREN, RIGHT_PAREN, LEFT_BRACE, RIGHT_BRACE,
	COMMA, DOT, MINUS, PLUS, SEMICOLON, SLASH, STAR,

	// 1 or 2 char tokens
	BANG, BANG_EQUAL,
	EQUAL, EQUAL_EQUAL,
	GREATER, GREATER_EQUAL,
	LESS, LESS_EQUAL,

	// Literals
	IDENTIFIER, STRING, NUMBER,

	// Keywords
	AND, CLASS, ELSE, FALSE, FUN, FOR, IF, NIL, OR,
	PRINT, RETURN, SUPER, THIS, TRUE, VAR, WHILE,

	eof
};

#pragma once

#include <iostream>
#include <string>
#include <stack>

#define MAX_INT 2147483647
#define MIN_INT -2147483648

bool    isValidToken(char c);
bool    isOperatorToken(char c);
bool    RPN(std::string expr);


#ifndef BIGINT_H
#define BIGINT_H

#include <string>

bool isnum(const std::string &s);
std::string add(const std::string &a, const std::string &b);
std::string sub(const std::string &a, const std::string &b);
std::string mul(const std::string &a, const std::string &b);
std::string div(const std::string &a, const std::string &b);
int cmp(const std::string &a, const std::string &b);

#endif

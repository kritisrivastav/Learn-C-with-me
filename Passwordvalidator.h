#ifndef PASSWORDVALIDATOR_H
#define PASSWORDVALIDATOR_H
#include <string>
#include <algorithm>
#include <vector>

class passwordValidator
{
private:
    char restricted_symbol;

    std::vector<char> restricted_symbols_vector;
public:
    passwordValidator(char);

    passwordValidator(std::vector<char>);

    bool is_valid(std::string);

    bool is_validForAVectorOfChars(std::string);
};

#endif // PASSWORDVALIDATOR_H

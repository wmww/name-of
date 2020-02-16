#ifndef NAME_OF_H
#define NAME_OF_H

#include <string>

std::string name_of(const void* input);
std::string name_of(unsigned long int input) { return name_of((void*)input); }

#endif // NAME_OF_H

#ifndef TRANSLATOR_HEADER
#define TRANSLATOR_HEADER

#include <fstream>
#include <string>
#include <map>
#include <iostream>

extern std::map<std::string, std::string> translations;

extern bool loadTranslations(std::string lang);
extern std::string translate(std::string text);

#endif // !TRANSLATOR_HEADER
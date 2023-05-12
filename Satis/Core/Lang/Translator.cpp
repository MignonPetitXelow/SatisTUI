#include "Translator.h"

std::map<std::string, std::string> translations;

bool loadTranslations(std::string lang)
{
    std::ifstream file(".lang/lang_" + lang + ".txt");
    if (!file.is_open()) {
        std::cerr << "Error: ur dumb. " << lang << std::endl;
        return false;
    }

    std::string line;
    while (std::getline(file, line)) {
        std::size_t pos = line.find("=");
        if (pos != std::string::npos) {
            std::string key = line.substr(0, pos);
            std::string value = line.substr(pos+1);
            translations[key] = value;
        }
    }

    file.close();
    return true;
}

std::string translate(std::string text)
{
    auto it = translations.find(text);
    if (it != translations.end())  return it->second;
    else return text;
}
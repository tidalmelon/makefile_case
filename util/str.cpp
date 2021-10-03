#include<string>
#include<cstring>
#include "str.h"


namespace util {
void split(const std::string& str, const std::string& delim, std::vector<std::string>& arr) {

    if (str.empty())
        return;

    char * strs = new char [str.length()+1];
    std::strcpy (strs, str.c_str());

    char * d = new char[delim.length() + 1];
    std::strcpy (d, delim.c_str());

    char *p = strtok(strs, d);
    while(p) {
        std::string s = p;
        arr.push_back(s);
        p = strtok(NULL, d);
    }
    return;
}

}

/**
 * g++ -fPIC -shared -o libutil.so str.cpp
 */

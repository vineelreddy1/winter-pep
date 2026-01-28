#ifndef _LOG_H
#define _LOG_H
#include<iostream>
using std::string;
using std::cout;

/// @brief This Function logs your output
/// @param s

void log(string s)
{
    cout << "LOG HEADER: " << s;
}

#endif
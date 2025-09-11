#pragma once
#include <iostream>
#include <cstring>
using namespace std;

class Contact {
private:
    char* fullName;
    char* homePhone;
    char* workPhone;
    char* mobilePhone;
    char* info;

public:
    Contact();
    Contact(const char* name);
    Contact(const char* name, const char* home, const char* work, const char* mobile, const char* inf);
    ~Contact();

    void init(const char* name, const char* home, const char* work, const char* mobile, const char* inf);
    void print();
    const char* getName();
};
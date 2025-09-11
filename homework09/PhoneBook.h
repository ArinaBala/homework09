#pragma once
#include "Contact.h"

class PhoneBook {
private:
    Contact contacts[100];
    int size;

public:
    PhoneBook();

    void addContact(Contact c);
    void removeContact(const char* name);
    void findContactByName(const char* name);
    void showAll();
};
#include "PhoneBook.h"

PhoneBook::PhoneBook() {
    size = 0;
}

void PhoneBook::addContact(Contact c) {
    if (size < 100) {
        contacts[size] = c;
        size++;
    }
    else {
        cout << "PhoneBook is full!" << endl;
    }
}

void PhoneBook::removeContact(const char* name) {
    bool found = false;
    for (int i = 0; i < size; i++) {
        if (strcmp(contacts[i].getName(), name) == 0) {
            for (int j = i; j < size - 1; j++) {
                contacts[j] = contacts[j + 1];
            }
            size--;
            found = true;
            cout << "Contact removed!" << endl;
            break;
        }
    }
    if (!found) cout << "Contact not found!" << endl;
}

void PhoneBook::findContactByName(const char* name) {
    bool found = false;
    for (int i = 0; i < size; i++) {
        if (strcmp(contacts[i].getName(), name) == 0) {
            contacts[i].print();
            found = true;
        }
    }
    if (!found) cout << "Contact not found!" << endl;
}

void PhoneBook::showAll() {
    if (size == 0) {
        cout << "PhoneBook is empty!" << endl;
    }
    else {
        for (int i = 0; i < size; i++) {
            contacts[i].print();
        }
    }
}
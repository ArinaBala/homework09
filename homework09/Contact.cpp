#include "Contact.h"

Contact::Contact() {
    fullName = nullptr;
    homePhone = nullptr;
    workPhone = nullptr;
    mobilePhone = nullptr;
    info = nullptr;
}

Contact::Contact(const char* name) : Contact() {
    fullName = new char[strlen(name) + 1];
    strcpy_s(fullName, strlen(name) + 1, name);
}

Contact::Contact(const char* name, const char* home, const char* work, const char* mobile, const char* inf) : Contact(name) {
    homePhone = new char[strlen(home) + 1];
    strcpy_s(homePhone, strlen(home) + 1, home);

    workPhone = new char[strlen(work) + 1];
    strcpy_s(workPhone, strlen(work) + 1, work);

    mobilePhone = new char[strlen(mobile) + 1];
    strcpy_s(mobilePhone, strlen(mobile) + 1, mobile);

    info = new char[strlen(inf) + 1];
    strcpy_s(info, strlen(inf) + 1, inf);
}

Contact::~Contact() {
    delete[] fullName;
    delete[] homePhone;
    delete[] workPhone;
    delete[] mobilePhone;
    delete[] info;
}

void Contact::init(const char* name, const char* home, const char* work, const char* mobile, const char* inf) {
    delete[] fullName;
    delete[] homePhone;
    delete[] workPhone;
    delete[] mobilePhone;
    delete[] info;

    fullName = new char[strlen(name) + 1];
    strcpy_s(fullName, strlen(name) + 1, name);

    homePhone = new char[strlen(home) + 1];
    strcpy_s(homePhone, strlen(home) + 1, home);

    workPhone = new char[strlen(work) + 1];
    strcpy_s(workPhone, strlen(work) + 1, work);

    mobilePhone = new char[strlen(mobile) + 1];
    strcpy_s(mobilePhone, strlen(mobile) + 1, mobile);

    info = new char[strlen(inf) + 1];
    strcpy_s(info, strlen(inf) + 1, inf);
}

void Contact::print() {
    if (fullName != nullptr)
        cout << "Full name: " << fullName << endl;
    else
        cout << "Full name: none" << endl;

    if (homePhone != nullptr)
        cout << "Home phone: " << homePhone << endl;
    else
        cout << "Home phone: none" << endl;

    if (workPhone != nullptr)
        cout << "Work phone: " << workPhone << endl;
    else
        cout << "Work phone: none" << endl;

    if (mobilePhone != nullptr)
        cout << "Mobile phone: " << mobilePhone << endl;
    else
        cout << "Mobile phone: none" << endl;

    if (info != nullptr)
        cout << "Info: " << info << endl;
    else
        cout << "Info: none" << endl;

   
}

const char* Contact::getName() {
    return fullName;
}
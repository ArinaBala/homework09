#include "PhoneBook.h"

int main() {
    PhoneBook pb;

    while (true) {
        cout << "\nMENU\n";
        cout << "1. Add contact\n";
        cout << "2. Remove contact\n";
        cout << "3. Find contact\n";
        cout << "4. Show all\n";
        cout << "5. Exit\n";
        cout << "Choose: ";

        int choice;
        cin >> choice;
        

        if (choice == 1) {
            char name, home, work, mobile, info;
            cout << "Enter full name: ";
            cin.getline(name, 100);
            cout << "Enter home phone: ";
            cin.getline(home, 100);
            cout << "Enter work phone: ";
            cin.getline(work, 100);
            cout << "Enter mobile phone: ";
            cin.getline(mobile, 100);
            cout << "Enter info: ";
            cin.getline(info, 100);

            Contact c;
            c.init(name, home, work, mobile, info);
            pb.addContact(c);
        }
        else if (choice == 2) {
            char name;
            cout << "Enter name to remove: ";
            cin.ignore();
            cin.getline(name, 100);
            pb.removeContact(name);
        }
        else if (choice == 3) {
            char name;
            cout << "Enter name to find: ";
            cin.ignore();
            cin.getline(name, 100);
            pb.findContactByName(name);
        }
        else if (choice == 4) {
            pb.showAll();
        }
        else if (choice == 5) {
            break;
        }
        else {
            cout << "Invalid choice!" << endl;
        }
    }

    return 0;
}

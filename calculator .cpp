#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct Student {
    string name;
    string id;
    string password;
};

bool login(const vector<Student>& students, const string& id, const string& password) {
    for (const Student& student : students) {
        if (student.id == id && student.password == password) {
            return true; // Login successful
        }
    }
    return false; // Login failed
}

int main() {
    // Sample student data
    vector<Student> students = {
        {"Alice", "12345", "password123"},
        {"Bob", "56789", "secret"},
        {"Charlie", "98765", "qwerty"}
    };

    string studentID, password;

    cout << "Enter student ID: ";
    cin >> studentID;

    cout << "Enter password: ";
    cin >> password;

    if (login(students, studentID, password)) {
        cout << "Login successful!" << endl;
    } else {
        cout << "Login failed. Invalid ID or password." << endl;
    }

    return 0;
}

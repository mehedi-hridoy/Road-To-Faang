// Encapsulation in C++
#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    int id;
    int age;
    string name;
    float marks;

public:
    Student() : id(0), age(0), name(""), marks(0.0f) {}

    Student(int id, int age, string name, float marks) : id(0), age(0), name(""), marks(0.0f) {
        setId(id);
        setAge(age);
        setName(name);
        setMarks(marks);
    }

    // Setters (validated)
    bool setId(int newId) {
        if (newId <= 0) {
            return false;
        }
        id = newId;
        return true;
    }

    bool setAge(int newAge) {
        if (newAge < 0 || newAge > 150) {
            return false;
        }
        age = newAge;
        return true;
    }

    bool setName(const string &newName) {
        if (newName.empty()) {
            return false;
        }
        name = newName;
        return true;
    }

    bool setMarks(float newMarks) {
        if (newMarks < 0.0f || newMarks > 100.0f) {
            return false;
        }
        marks = newMarks;
        return true;
    }

    // Getters (read-only access)
    int getId() const { return id; }
    int getAge() const { return age; }
    const string &getName() const { return name; }
    float getMarks() const { return marks; }

    void print() const {
        cout << "Student{id=" << id << ", name=\"" << name << "\", age=" << age
             << ", marks=" << marks << "}" << '\n';
    }
};

int main() {
    Student s;

    if (!s.setId(101)) {
        cout << "Invalid id\n";
    }
    if (!s.setName("Hridoy")) {
        cout << "Invalid name\n";
    }
    if (!s.setAge(21)) {
        cout << "Invalid age\n";
    }
    if (!s.setMarks(92.5f)) {
        cout << "Invalid marks\n";
    }

    // Invalid updates are rejected, preserving invariants.
    if (!s.setMarks(150.0f)) {
        cout << "Rejected: marks must be between 0 and 100\n";
    }

    s.print();
    cout << "Read-only access via getters -> name: " << s.getName() << ", marks: " << s.getMarks() << '\n';

    Student t(202, 19, "Asha", 88.0f);
    t.print();

    return 0;
}
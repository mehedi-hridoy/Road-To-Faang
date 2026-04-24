#include<iostream>
#include<string>

using namespace std;

class Employee {
    private:
        int id;
        int age;
        string name;
        float salary;
    
    public:
        void setId(int newId) {
            if (newId > 0) {
                id = newId;
            } else {
                cout << "Invalid ID. ID must be positive." << endl;
            }
        }
    public:
        void setAge(int newAge) {
            if (newAge >= 18 && newAge <= 65) {
                age = newAge;
            } else {
                cout << "Invalid Age. Age must be between 18 and 65." << endl;
            }
        }
    public: 
       // we could add here a layer of authention to check user has righht permission
        void setSalary(float newSalary) {
            if (newSalary >= 0) {
                salary = newSalary;
            } else {
                cout << "Invalid Salary. Salary must be non-negative." << endl;
            }
        }
    

     // getters 
    public:
        int getId() const {
            return id;
        }
    public:
        int getAge() const {
            return age; 
        }
    public:
        float getSalary() const {
            return salary;
        }

};

int main() {
    Employee emp;
    emp.setId(101);
    emp.setAge(30);
    emp.setSalary(50000.0f);

    cout << "Employee ID: " << emp.getId() << endl;
    cout << "Employee Age: " << emp.getAge() << endl;
    cout << "Employee Salary: $" << emp.getSalary() << endl;

    return 0;
}  
class Employee {
private:
    int id; 
    double salary; 

public:
    Employee(int i, double s) : id(i), salary(s) {} 

    void setSalary(double s) { salary = s; } 
    double getSalary() const { return salary; } 
};

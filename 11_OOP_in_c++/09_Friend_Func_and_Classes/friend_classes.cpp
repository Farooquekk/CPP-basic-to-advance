class ClassA {
private:
    int data;

public:
    ClassA(int val) : data(val) {}

    // Declaring ClassB as a friend class
    friend class ClassB;
};

class ClassB {
public:
    void showData(ClassA& a) {
        // Accessing private member of ClassA
        std::cout << "ClassA data: " << a.data << std::endl;
    }
};

class MyClass {
    private:
        int data;

    public:
        MyClass(int val) : data(val) {}

        // Declaring a friend function
        friend void displayData(const MyClass& obj);
};

// Friend function definition
void displayData(const MyClass& obj) {
    // Accessing private member data
    std::cout << "Data: " << obj.data << std::endl;
}

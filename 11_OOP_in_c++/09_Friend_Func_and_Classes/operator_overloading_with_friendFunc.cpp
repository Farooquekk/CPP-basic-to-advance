class Complex {
private:
    double real, imag;

public:
    Complex(double r, double i) : real(r), imag(i) {}

    // Friend function to overload << operator for output
    friend std::ostream& operator<<(std::ostream& out, const Complex& c);
};

std::ostream& operator<<(std::ostream& out, const Complex& c) {
    out << c.real << " + " << c.imag << "i";
    return out;
}

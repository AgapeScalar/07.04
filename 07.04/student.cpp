class Fraction {
private:
    int numerator, denominator;
    static int instanceCount;  

public:
    Fraction() : numerator(0), denominator(1) { instanceCount++; }

    Fraction(int num, int den) : numerator(num), denominator(den == 0 ? 1 : den) { instanceCount++; }

    Fraction(int num) : Fraction(num, 1) {}

    static int getInstanceCount() {
        return instanceCount;
    }
};

int Fraction::instanceCount = 0;

class Point {
private:
    double x, y, z;
    static int instanceCount;  

public:
    Point() : x(0), y(0), z(0) { instanceCount++; }

    Point(double xVal, double yVal, double zVal) : x(xVal), y(yVal), z(zVal) { instanceCount++; }

    Point(double xVal, double yVal) : Point(xVal, yVal, 0) {}

    static int getInstanceCount() {
        return instanceCount;
    }
};

int Point::instanceCount = 0;

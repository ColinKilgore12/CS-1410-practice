// CS1410 - Assignment 03
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// TODO 1: ShapeKind Enumeration
enum class ShapeKind {
    Circle,
    Square,
    Rectangle
};

// TODO 2: Shape Structure
struct Shape {
    ShapeKind kind;
    double length;
    double width;
};

// Function prototypes
double area(Shape s);
double perimeter(Shape s);
string nameOf(Shape s);
void promptAndReadInputFor(Shape& shape);

// TODO 3: area() definition
double area(Shape s) {
    const double PI = 3.141592653589793;

    switch (s.kind) {
        case ShapeKind::Circle:
            return PI * (s.length / 2.0) * (s.length / 2.0);
        case ShapeKind::Square:
            return s.length * s.length;
        case ShapeKind::Rectangle:
            return s.length * s.width;
        default:
            return 0.0;
    }
}

// TODO 4: perimeter() definition
double perimeter(Shape s) {
    const double PI = 3.141592653589793;

    switch (s.kind) {
        case ShapeKind::Circle:
            return PI * s.length;  // π * diameter
        case ShapeKind::Square:
            return 4 * s.length;
        case ShapeKind::Rectangle:
            return 2 * (s.length + s.width);
        default:
            return 0.0;
    }
}

// TODO 5: nameOf() definition
string nameOf(Shape s) {
    switch (s.kind) {
        case ShapeKind::Circle:
            return "Circle";
        case ShapeKind::Square:
            return "Square";
        case ShapeKind::Rectangle:
            return "Rectangle";
        default:
            return "Unknown";
    }
}

// TODO 6: promptAndReadInputFor() definition
void promptAndReadInputFor(Shape& shape) {

    if (shape.kind == ShapeKind::Rectangle) {
        cout << "Enter length and width of rectangle: ";
        cin >> shape.length >> shape.width;

        if (shape.length == shape.width) {
            shape.kind = ShapeKind::Square;
        }
    }
    else if (shape.kind == ShapeKind::Square) {
        cout << "Enter length of square: ";
        cin >> shape.length;
        shape.width = shape.length;
    }
    else if (shape.kind == ShapeKind::Circle) {
        cout << "Enter diameter of circle: ";
        cin >> shape.length;
        shape.width = shape.length;
    }
}

// Main function
int main() {

    // Shape objects
    Shape circle = { ShapeKind::Circle, 0.0, 0.0 };

    // TODO 7: define square and rectangle
    Shape square = { ShapeKind::Square, 0.0, 0.0 };
    Shape rectangle = { ShapeKind::Rectangle, 0.0, 0.0 };

    // TODO 8: Call promptAndReadInputFor()
    promptAndReadInputFor(circle);
    promptAndReadInputFor(square);
    promptAndReadInputFor(rectangle);

    // TODO 9: Print report in table format
    cout << "\n";
    cout << left << setw(12) << "Shape"
         << setw(12) << "Length"
         << setw(12) << "Width"
         << setw(15) << "Area"
         << setw(15) << "Perimeter"
         << endl;

    cout << string(66, '-') << endl;

    cout << left << setw(12) << nameOf(circle)
         << setw(12) << circle.length
         << setw(12) << circle.width
         << setw(15) << area(circle)
         << setw(15) << perimeter(circle)
         << endl;

    cout << left << setw(12) << nameOf(square)
         << setw(12) << square.length
         << setw(12) << square.width
         << setw(15) << area(square)
         << setw(15) << perimeter(square)
         << endl;

    cout << left << setw(12) << nameOf(rectangle)
         << setw(12) << rectangle.length
         << setw(12) << rectangle.width
         << setw(15) << area(rectangle)
         << setw(15) << perimeter(rectangle)
         << endl;

    return 0;
}
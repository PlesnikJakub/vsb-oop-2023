#include <iostream>
#include "Car.h"
#include "Rectangle.h"
#include "Triangle.h"
#include <vector>
#include "Circle.h"
using namespace std;

int main()
{
    std::cout << "Hello World!\n";

    Vehicle* v = new Vehicle(10);
    std::cout << v->GetMaxSpeed() << std::endl;

    Car* c = new Car(4, 240);
    std::cout << c->GetSeatCount() << std::endl;
    std::cout << c->GetMaxSpeed() << std::endl;

    /*******************************************************/

    Rectangle* r = new Rectangle(2, 5);
    std::cout << r->GetArea() << std::endl;
    r->SayHi();

    Shape* s = r;
    std::cout << s->GetArea() << std::endl;
    // Shape* s = dynamic_cast<Shape*>(r);

    Triangle* t = new Triangle(2, 5);
    std::cout << t->GetArea() << std::endl;
    Shape* s1 = t;
    std::cout << s1->GetArea() << std::endl;

    vector<Shape*> shapes;
    shapes.push_back(r);
    shapes.push_back(t);

    for (Shape* s : shapes)
    {
        cout << "Area: " << s->GetArea() << endl;
    }


}

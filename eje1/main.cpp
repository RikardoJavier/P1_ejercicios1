#include <iostream>
#include <Shape.hpp>
int main(int argc, char ** argv)
{
int A=15,B=24;
shape triangulo(A,B);
shape2 Rectangulo(A,B);

std::cout << "Area del triangulo = " << triangulo.areaT() << std::endl;
std::cout << "Area del Rectangulo = " << Rectangulo.areaC() << std::endl;
    return 0;
}

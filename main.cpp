#include <iostream>
#include "shape.h"
#include <vector>



int main(){
    std::vector<shape*> shapes;
    shapes.push_back(new circle);
    shapes.push_back(new circle("Cirlce",3));
    shapes.push_back(new triangle("Triangle",3,4));
    shapes.push_back(new square("Square",3,4));
    for(auto p : shapes)
        std::cout << *p;








    return 0;
};
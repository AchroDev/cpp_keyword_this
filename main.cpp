#include <iostream>
#include <string>

// The "this" keyword is a pointer to the current object instance that the method belongs to.

class Entity
{
public:
    int x, y;

    Entity(int x, int y)
    {
        Entity *e = this; // This is an example of how the "this" keyword actually works, showing it is just a pointer to the object instance

        x = x; // Currently we are just assigning the x in the parameters here with its own value
    }
};

int main()
{

    std::cin.get();
}

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

        e->x = x; // Now we can write it this way and assign x
    }
};

int main()
{

    std::cin.get();
}

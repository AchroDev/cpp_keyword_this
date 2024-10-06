#include <iostream>
#include <string>

// The "this" keyword is a pointer to the current object instance that the method belongs to.

class Entity
{
public:
    int x, y;

    Entity(int x, int y)
    {
        this->x = x; // To clean it up we can really write it like this as the previous code showed how "this" worked
    }
};

int main()
{

    std::cin.get();
}

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
        //(*this).x = x; // Alternatively you can cast "this" to a pointer and call assign x this way, but it isn't as clean as dereferencing with the arrow
        this->y = y;
    }

    // Example function to return one of the variables
    int GetX() const
    {
        const Entity *e = this; // In a const function like this one, "this" actually has to be a const as well
        e->x = 3;               // Now that Entity e is a const, the compiler WILL NOT allow us to modify the variable, as we shouldn't anyway.

        return x;
    }
};

int main()
{

    std::cin.get();
}

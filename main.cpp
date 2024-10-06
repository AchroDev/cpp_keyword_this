#include <iostream>
#include <string>

// The "this" keyword is a pointer to the current object instance that the method belongs to.

// Declaring example PrintEntity function
void PrintEntity(Entity *e);

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
    }
};

// Defining the PrintEntity fuction
void PrintEntity(Entity *e)
{
    // Print
}

int main()
{

    std::cin.get();
}

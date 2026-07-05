#include <stdio.h>

struct Person
{
    char name[50];
    float salary;
    int age;
};

int main()
{
    struct Person p1 = {"Rahul", 50000.0, 25};
    struct Person p2 = {"Amit", 60000.0, 30};

    printf("Name of first person: %s\n", p1.name);
    printf("Age of second person: %d\n", p2.age);

    return 0;
}
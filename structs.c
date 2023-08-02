#include <stdio.h>
#include <stdbool.h>

void say_something()
{
    printf("hi");
}

struct Person
{
    unsigned short age;
    // unsigned int id;
    char name[50];
    bool is_baby;
};

void print_person(struct Person person)
{
    printf("person is %s\n", person);
}

void main()
{
    struct Person me;
    struct Person wife;

    // me.name = "sadeq";
    me.age = 25;
    me.is_baby = false;

    // wife.name = "aram";
    wife.age = 27;
    wife.is_baby = true;

    // print_person(me);
    // print_person(wife);

    // say_something();
}
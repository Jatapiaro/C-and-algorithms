#include <stdio.h>
#include <stdlib.h>

struct Person
{
    int id;
    int age;
    int list_of_family_ids[100];
};

typedef struct Person Person;

int main(int argc, char const *argv[])
{
    // person is a sruct of type Person 
    Person person, person2;

    person.id = 1234567;
    person.age = 78;
    person.list_of_family_ids[0] = 5383;
    printf("person has id %i and an age of %i\n", person.id, person.age);
    
    person2.id = 1234567 + 34;
    person2.age = 78 - 69;
    printf("person has id %i and an age of %i\n", person2.id, person2.age);

    return 0;
}

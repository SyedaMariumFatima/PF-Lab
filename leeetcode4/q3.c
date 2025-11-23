#include <stdio.h>

struct student
{
    int age;
    char firstname[12];
    char lastname[15];
    int standard;
};

int main()
{
    struct student student0;
    scanf("%d", &student0.age);
    scanf("%s", &student0.firstname);
    scanf("%s", &student0.lastname);
    scanf("%d", &student0.standard);

    printf("%d %s %s %d", student0.age, student0.firstname, student0.lastname, student0.standard);
}

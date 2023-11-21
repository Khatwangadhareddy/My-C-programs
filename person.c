#include<stdio.h>
struct Person
{
    int age;
    double salary;
};
int main() {
    
    struct Person person1;
    person1.age =18;
    person1.salary =42334.56;
    printf("Age of the person: %d\n", person1.age);
    printf("Salary of the person: %.2lf\n", person1.salary);
    return 0;
     
    
}

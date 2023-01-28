#include<stdio.h>
struct person
{
    char name;
    int age;
    float salary;

};
void display(struct person p)
{

    printf("Name:%s\n",p.name);
    printf("Age:%d\n",p.age);
    printf("Salary:%.2f\n",p.salary);

}

int main()
{
    struct person person1,person2;
    person1.age=22;
    person1.salary=23658.336;
    strcpy(person1.name,"abdullah");

    display(person1);

    person2.age=23;
    person2.salary=236658.336;
    strcpy(person2.name,"nazmus-sakib");


    display(person2);
}

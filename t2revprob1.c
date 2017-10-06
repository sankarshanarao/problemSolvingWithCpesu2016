//define union in a structure and display the contents using a function
#include<stdio.h>

struct __attribute__((packed)) stude
{
        int marks;
        union
        {
            int roll;
            char * name;
        }l;
};

void prinstru(struct stude *s)
{
    printf("%d %d",s->marks, s->l.roll);
}

void main()
{
    struct stude s;
    s.marks=100;
    s.l.roll=20;
    prinstru(&s);
}

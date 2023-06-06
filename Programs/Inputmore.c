#include <stdio.h>

#define endl "\n"

char fname[100];
char lname[100];
int age;
char fullname[200];

int main()
{
    printf("Hello, Good morning! %s", endl);
    printf("Please input your firstname %s", endl);
    scanf("%s", fname);
    printf("Please input your last name %s", endl);
    scanf("%s", lname);
    printf("Please input your age: ");
    scanf("%d", &age);
    
    sprintf(fullname, "%s %s", fname, lname);
    
    printf("Hello, %s\n", fullname);
    
    if (age <= 17) {
        printf("You are not an adult\n");
    } else {
        printf("You are an adult\n");
    }
    
    return 0;
}

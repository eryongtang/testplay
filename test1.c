#include<stdio.h>
struct student{
    int age;
    char name[];
};
int main(){
    struct student s={19,"xiaoming"};
    printf("%d %s\n",s.age,s.name);
    return 0;
}

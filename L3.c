#include<stdio.h>
struct details{
    char str[10];
    int roll_no;
    float marks;
};
void update(struct details *x){
    int i;
printf("\nenter the marks:");
scanf("%d",&i);
x->marks=i;
}

int main(){
    struct details s1={"sai",89,55.4};
    printf("name: %s  and his marks are %d and %f as rollno",s1.str,s1.roll_no,s1.marks);
    update(&s1);
    printf("updated things :\n name: %s, rollno: %d, marks: %.2f",s1.str,s1.roll_no,s1.marks);
    s1.marks=200;
    printf("\nname: %s, rollno: %d, marks: %.2f",s1.str,s1.roll_no,s1.marks);
    return 0;
}
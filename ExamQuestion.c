// By using pointer increase increase a num by 50 


#include <stdio.h>

struct Student {
    int num;
};

void increment(struct Student *ptr) {
    ptr->num =ptr->num+ 50;
}

int main() {
    struct Student student;
    
   student.num=100;
   
    printf("Original number: %d\n", student.num);

    increment(&student);

    printf("Number after incrementing by 50: %d\n", student.num);

    return 0;
}
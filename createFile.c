#include <stdio.h>
#include <stdlib.h>


int main() {

// you can write(w), append(a)

    FILE * fpointer = fopen("employees.txt", "w");

    fprintf(fpointer, "Jim, salesman\n Pam, director\n, Veronica, cook\n"); 

    

    fclose(fpointer);
    return 0;

}
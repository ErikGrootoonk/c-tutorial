#include <stdio.h>
#include <stdlib.h>

// void sayHi(char name[], int age){
//   printf("Hello %s, you are %d\n", name, age);
// }

// int main() 
// {
// sayHi("Mike", 14);
// sayHi("Tom", 70);
// sayHi("Oscar", 53);
// return 0;
// }

double cube(double num) {
  double result = num * num * num;
  return result;

}

int main(){
  
  printf("Answer: %f\n", cube(3.0));

  return 0;
}



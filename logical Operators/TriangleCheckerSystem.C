#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three sides of a triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    // Add conditions to check :
    //-Valid triangle: sum of any two sides > third side
    //-Equilateral: all side are equal
    //isosceles: two sides are equal
    //-Scalene: no sides are equal
    //-Right angled: a^2 + b^2 = c^2 (check all combinations)

    //Check triangle validity:
    int valid = (a + b > c) && (a + c > b) && (b + c > a);
      if (!valid){
        printf("Invalid triangle! The sides cannot form a traingle\n");
        return 0; // exit early if invalid
    }
    printf("Valid triangle!!\n");
   

    // Display triangle types
    int equilateral = (a == b && b == c);
    int isosceles = (a == b || b == c || a == c) && !equilateral;
    int scalene = (a != b && b != c && a != c);
    int right_angled = (a * a + b * b == c * c) || (b * b + c * c == a * a) || (a * a + c * c == b * b);

  
    // Display triangle types
    if (equilateral){
        printf("The triangle is equilateral.\n");
    }
    if (isosceles){
        printf("The triangle is iscoscles.\n");
    }
    if (scalene){
        printf("The triangle is scalene.\n");
    }
    if (right_angled){
        printf("This triangle is a right angled triangle.\n");
    }
return 0;
}
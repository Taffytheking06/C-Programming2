#include <stdio.h>
#include <math.h> //for fabs()

int main(){
    float a = 0.1 + 0.2;
    float b = 0.3;

    // Wrong: Direct comparison of floats
    if (a == b) {
        printf("Exactly equal\n");  
    }else{
        printf("Not exactly equal (this might surprise you!)\n");
    }

    // Better: Compare with tolerance
    float tolerance = 0.00001;
    if (fabs(a - b) < tolerance){
        printf("Equal within tolerance\n");
    }
return 0;
}


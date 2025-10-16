#include <stdio.h>

int main(){
    /* Create a program that
    1. asks user how many lights to control
    2. For each light, asks for on/off status
    3. Counts how many lights are ON
    4. Reports the result */
    int total_lights;
    int current_light = 1;
    int light_status;
    int lights_on = 0;

    printf("\n=== SMART LIGHT SCHEDULER ===\n");

    // Get total number of lights
    printf("How many lights do you want to control?: ");
    scanf("%d", &total_lights);

    // Input validation for total lights
    while (total_lights <= 0) {
        printf("Please enter a positive number: ");
        scanf("%d, &total_lights");
    }

    printf("\n=== LIGHT STATUS INPUT ===\n");
    printf("Enter 0 for OFF, 1 for ON\n\n");

    // Process each light using while loop
    while (current_light <= total_lights) {
        printf("Light %d/%d: ", current_light, total_lights);
        scanf("%d", &light_status);

        // input validation for light status
        while (light_status != 0 && light_status != 1) {
            printf("Invalid input! Enter 0 (OFF) or 1(ON): ");
            scanf("%d", &light_status);
        }

        // count if light is ON
        if (light_status == 1) {
            lights_on++;
            printf("Light %d is ON\n", current_light);
        } else {
            printf("Light %d is OFF\n", current_light);
        }
        
        current_light++;        //Move to next light
    }

    // Display report
    printf("\n=== LIGHTING REPORT ===\n");
    printf("Total lights controlled: %d\n", total_lights);
    printf("Lights ON: %d\n", lights_on);
    printf("Lights OFF: %d\n", total_lights - lights_on);

    // calculate percentage
    float percentage_on = (float)lights_on / total_lights * 100;
    printf("Percentage ON: %.1f%%\n", percentage_on);

    // Enegry saving recommendations
    printf("\n=== ENERGY ANALYSIS ===\n");
    if (lights_on == 0){
        printf(" All lights are OFF - Great energy saving!\n");
    } else if (lights_on == total_lights){
        printf(" All lights are ON - Consider turning some off\n");
    } else if (percentage_on > 70) {
        printf("High usage (%.%1f%%) - Consider energy saving mode\n", percentage_on);
    } else if (percentage_on < 30){
        printf("Low usage (%.1f%%) - Efficient energy use!\n", percentage_on);
    } else {
        printf("Moderate usage (%.1f%%) - Good balance\n", percentage_on);
    }

    // Room specific suggestions
    if (lights_on > 0) {
        printf("\n=== SMART SUGGESTIONS ===\n");
        if (lights_on > total_lights / 2) {
            printf("Consider turning off lights in unoccupied rooms\n");
        }
        if (total_lights >= 5 && lights_on >= 3) {
            printf("Use motion sensors for automatic control\n");
        }
        printf("Use dimmer switches for mood lighting\n");
    }
    return 0;
}
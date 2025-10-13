#include <stdio.h>

int main() {
    int monitoring_time = 10;  // monitor for 10cycles
    int current_cycle = 1;
    float temperature;

    printf("=== SMART HOME TEMPERATURE MONITORING ===\n");

    while (current_cycle <= monitoring_time) {
    printf("\nCycle %d: Enter current temperature: ", current_cycle);
    scanf("%f",&temperature);

    if (temperature > 30){
        printf("WARNING: Temperature too high! (%.1f°C)\n", temperature);
    } else if (temperature < 15) {
        printf("WARNING: Temperature too low! (%.1f°C)\n", temperature);
    } else{
        printf("Temperature normal (%.1f°C)\n", temperature);
    }
    current_cycle++;
    }
    printf("\nMonitoring session completed.\n");
    return 0;
}   
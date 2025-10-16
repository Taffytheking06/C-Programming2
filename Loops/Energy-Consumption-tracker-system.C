#include <stdio.h>

int main() {
    int hour = 0;
    float total_energy = 0;
    float energy_usage;

    printf("=== DAILY ENERGY CONSUMPTION TRACKER ===\n");

    while (hour < 24) {
        printf("Enter energy usage for hour %d (kWh): ", hour);
        scanf("%f", &energy_usage);

        total_energy += energy_usage;

        if (energy_usage > 5.0) {
            printf("  High consumption detected!!\n");
        }

        hour++;
    }
    printf("\n=== DAILY SUMMARY ===\n");
    printf("Total energy consumed: %.2f kWh\n", total_energy);
    printf("Average hourly usage: %.2f kWh\n", total_energy / 24);

    if (total_energy > 50) {
        printf(" HIGH TOTAL CONSUMPTION - Consider energy saving measures\n");
    }
    return 0;
}
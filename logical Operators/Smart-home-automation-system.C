#include <stdio.h>

int main() {
    // variables needed
    int time_of_day;
    int occupancy;
    float temperature;
    float humidity;
    int energy_usage;
    int user_override;

    // Appliances we'll control
    int lights_on = 0;
    int hvac_on = 0;
    int appliances_on = 0;

    printf("=== SMART HOME AUTOMATION SYSTEM ===\n\n");

    //Get sensor readings and user preferences
    printf("Enter current hour(0-23): ");
    scanf("%d", &time_of_day);

    printf("Is anyone home? (0=No, 1=Yes): ");
    scanf("%d", &occupancy);

    printf("Enter current temperature (°C): ");
    scanf("%f", &temperature);

    printf("Enter current humidity (%%): ");
    scanf("%f", &humidity);

    printf("Enter current energy usage (0-100%%): ");
    scanf("%d", &energy_usage);

    printf("User override? (0=Auto, 1=Manual ON, 2=Manual OFF): ");
    scanf("%d", &user_override);

    printf("\n=== CURRENT STATUS ===\n");
    printf("Time: %d:00, Occupancy: %s, Temp: %.1f°C\n", time_of_day, occupancy ? "YES" : "NO", temperature);
    printf("Humidity: %.1f%%, Energy: %d%%, Mode: ", humidity, energy_usage);

    if (user_override == 0) printf("Auto\n");
    else if (user_override == 1) printf("Manual ON\n");
    else printf("Manual OFF\n");

    //Decide if lights should turn ON
    printf("\n=== LIGHT CONTROL ===\n");

    //Lights should turn ON when:
    // its evening/night (6pm-6am) AND someone is home
    // OR user manually turned them on
    // AND not manually turned off

    int auto_lights = ((time_of_day >= 18 || time_of_day  <= 6) && occupancy);
    lights_on = (auto_lights && user_override != 2) || (user_override == 1);

    printf("Auto lights decision: %s\n", auto_lights ? "ON" : "OFF");
    printf("Final lights: %s\n", lights_on ? "LIGHTS ON" : "LIGHTS OFF");

    // decide hvac (heating/cooling) status
    printf("\n=== HVAC CONTROL ===\n");

    //Cooling should turn ON when
    // Too hot AND someone home AND within energy limits
    int need_cooling = (temperature > 25) && occupancy && (energy_usage < 80);

    //heating turn ON when
    int need_heating = (temperature < 18) && occupancy && (energy_usage < 80);

    // Apply user overrire
    if (user_override == 1) {
        hvac_on = 1;
        printf("HVAC: MANUAL COOLING ON\n");
    } else if (user_override == 2){
        hvac_on = 0;
        printf("HVAC: MANUAL OFF\n");
    } else if(need_cooling){
        hvac_on = 2;
        printf("HVAC: AUTO COOLING ON (Too hot: %.1f°C)\n", temperature);
    } else if (need_heating){
        hvac_on = 1;
        printf("HVAC: AUTO HEATING ON (Too cold: %.1f°C)\n", temperature);
    } else {
        hvac_on = 0;
        printf("HVAC: OFF (Temperature comfortable)\n");
    }

    // decide if high power applianced can run
    printf("\n=== APPLIANCE CONTROL ===\n");

    //appliance can run when
    // not during peak energy hours (6-9AM, 5-8PM) OR energy is low
    // -AND someone is home (safety)
    int is_peak_hours = (time_of_day >= 6 && time_of_day <= 9) || (time_of_day >= 17 && time_of_day <= 20);
    int auto_appliances = occupancy && (!is_peak_hours || energy_usage < 50);
    
    appliances_on = (auto_appliances && user_override != 2) || (user_override == 1);

    printf("Peak hours: %s\n", is_peak_hours ? "YES" : "NO");
    printf("Auto appliances: %s\n", auto_appliances ? "ALLOWED" : "BLOCKED");
    printf("Final appliances: %s\n", appliances_on ? "APPLIANCES ON" : "APPLIANCES OFF");

    //Energy saving mode
    printf("\n=== ENERGY SAVING MODE ===\n");

    int energy_saver = (energy_usage > 70) || (!occupancy && (temperature > 15 && temperature < 28));
    
    if (energy_saver) {
        printf("ENERGY SAVER ACTIVE:\n");
        if (energy_usage > 70){
            printf("  - High energy usage detected\n");
        }
        if (!occupancy){
            printf("  - No one home - optimizing for efficiency\n");
        }
    

    // Energy saving actions
    if (lights_on && !occupancy){
        printf("Turning off unneccessary lights\n");
    }
    if (hvac_on && !occupancy && temperature > 15 && temperature < 28){
        printf("Adjusting HVAC for empty home\n");
    }
} else {
    printf("Energy usage normal\n");
}

// Final system summary
printf("\n ==== FINAL SYSTEM STATUS ====\n");
printf("Lights: %s\n", lights_on ? "ON" : "OFF");
printf("HVAC: ");
if (hvac_on == 0) printf("OFF\n");
else if (hvac_on == 1) printf("Heating\n");
else printf("COOLING\n");
printf("Appliances: %s\n", appliances_on ?  "ON" : "OFF");

return 0;
}    
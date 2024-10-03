#include <stdio.h>
#include <string.h>

// Function Declarations
void checkWeather(char city[]);

int main() {
    char city[50];
    int option;
    
    do {
        printf("\n=== Weather App ===\n");
        printf("1. Check Weather\n");
        printf("2. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &option);
        getchar();  // Consume the newline character left by scanf
        
        switch(option) {
            case 1:
                printf("Enter the city name: ");
                fgets(city, sizeof(city), stdin);
                city[strcspn(city, "\n")] = '\0'; // Remove trailing newline
                checkWeather(city);
                break;
            case 2:
                printf("Exiting the app. Stay safe!\n");
                break;
            default:
                printf("Invalid option! Please try again.\n");
        }
        
    } while(option != 2);
    
    return 0;
}

// Function to simulate checking the weather for a city
void checkWeather(char city[]) {
    // Sample weather data
    if (strcmp(city, "Kampala") == 0) {
        printf("Weather in Kampala: 27°C, Partly Cloudy.\n");
    } else if (strcmp(city, "Entebbe") == 0) {
        printf("Weather in Entebbe: 25°C, Sunny.\n");
    } else if (strcmp(city, "Mbarara") == 0) {
        printf("Weather in Mbarara: 23°C, Rainy.\n");
    } else if (strcmp(city, "Jinja") == 0) {
        printf("Weather in Jinja: 26°C, Mostly Sunny.\n");
    } else {
        printf("Weather information for %s is not available.\n", city);
    }
}

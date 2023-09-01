#include <stdio.h>
#include <unistd.h> // Library for the usleep function

int main() {
    int currentRPM = 1000; // Current RPM
    int targetRPM = 3000;  // Desired RPM
    int increment = 100;   // RPM increment per iteration
    int delayMicroseconds = 100000; // Delay time between iterations (microseconds)

    printf("Starting RPM increase...\n");

    while (currentRPM < targetRPM) {
        // Simulating gradual RPM increase
        currentRPM += increment;
        // Simulating ECU action (e.g., adjusting fuel injection)
        // Here you would put the code to perform the action on the real hardware
        // Displaying RPM values
        printf("Current RPM: %d\n", currentRPM);
        // Waiting for a short period to simulate the passage of time (control loop)
        usleep(delayMicroseconds); // Waits for a number of microseconds
    }
    printf("Target RPM reached: %d\n", currentRPM);
    printf("End of RPM increase.\n");
    return 0;
}
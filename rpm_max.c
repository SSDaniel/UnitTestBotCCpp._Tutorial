#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Definition of RPM constants
const int RPM_MAX = 7000;
const int RPM_MIN = 1000;
const int RPM_TARGET = 3000;

// Definition of control constants
const float KP = 0.1;
const float KI = 0.01;
const float KD = 0.05;

// Function to calculate the control signal
float calculateControl(float error, float integral, float derivative) {
    return KP * error + KI * integral + KD * derivative;
}

int main() {
    srand(time(NULL));

    // Control variables
    float setpoint = RPM_TARGET;
    float current = RPM_MIN;
    float integral = 0;
    float previous = 0;

    printf("Starting RPM control...\n");

    for(int count=0;count < 100000000; count++) {
        // Simulated RPM sensor reading
        float reading = current + (rand() % 201 - 100); // Simulates RPM variation

        // Error calculation
        float error = setpoint - reading;

        // Integral calculation
        integral += error;

        // Derivative term calculation
        float derivative = error - previous;

        // Control signal calculation
        float control = calculateControl(error, integral, derivative);

        // Limit the control signal to prevent extreme values
        if (control > 1.0) {
            control = 1.0;
        } else if (control < -1.0) {
            control = -1.0;
        }

        // Update variables
        previous = error;
        current = reading;

        printf("Current RPM: %.2f | Control: %.2f\n", current, control);

        // Wait for a period of time to simulate the passage of time (control loop)

        // Simulate the control loop
        for (int i = 0; i < 100000000; i++) {
            // Wait
             }
    };

    return 0;
}
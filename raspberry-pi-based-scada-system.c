/*
 * Course: Raspberry Pi Based Scada System
 * Platform: Raspberry Pi
 * Author: Ashraf S A AlMadhoun
 * Purpose: Auto-generated metadata block to document the learning goals.
 * Notes: Auto-generated metadata block (2025-11-18)
 */

#include <stdio.h> // Include I/O for telemetry printing
#include <unistd.h> // Include sleep for timing

// Define GPIOs for sensors and actuator
static const int SENSOR1_GPIO = 22; // Sensor 1 input GPIO22
static const int SENSOR2_GPIO = 23; // Sensor 2 input GPIO23
static const int ACTUATOR_GPIO = 24; // Actuator output GPIO24

// Stub functions to emulate GPIO operations
int gpio_export(int gpio) { return 0; } // Export GPIO
int gpio_set_direction(int gpio, int output) { return 0; } // Set direction
int gpio_read(int gpio) { return 0; } // Read GPIO
int gpio_write(int gpio, int value) { return 0; } // Write GPIO

// Program entry point
// Main routine: orchestrates the raspberry pi based scada system scenario
int main(void) { // Start of main function
  printf("Raspberry Pi SCADA: telemetry + control\n"); // Startup message
  gpio_export(SENSOR1_GPIO); // Export sensor 1 GPIO
  gpio_export(SENSOR2_GPIO); // Export sensor 2 GPIO
  gpio_export(ACTUATOR_GPIO); // Export actuator GPIO
  gpio_set_direction(SENSOR1_GPIO, 0); // Set sensor 1 as input
  gpio_set_direction(SENSOR2_GPIO, 0); // Set sensor 2 as input
  gpio_set_direction(ACTUATOR_GPIO, 1); // Set actuator as output
  for (int i = 0; i < 20; ++i) { // Loop to sample and control
    int s1 = gpio_read(SENSOR1_GPIO); // Read sensor 1 value
    int s2 = gpio_read(SENSOR2_GPIO); // Read sensor 2 value
    int cmd = (s1 && !s2); // Simple control rule
    gpio_write(ACTUATOR_GPIO, cmd); // Write command to actuator
    printf("{\"s1\":%d,\"s2\":%d,\"act\":%d}\n", s1, s2, cmd); // Print telemetry JSON
    usleep(250000); // Delay for 250 ms
  } // End loop
  printf("SCADA loop complete\n"); // Completion message
  return 0; // Exit success
} // End main


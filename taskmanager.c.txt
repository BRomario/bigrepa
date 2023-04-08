#include <TaskManager.h>

// Define the PINN numbers
const int PINN1 = 9;
const int PINN2 = 10;
const int PINN3 = 11;

// Define the tasks
Task blinkTask1(100, TASK_FOREVER, []() {
  static bool ledState = LOW;
  digitalWrite(PINN1, ledState);
  ledState = !ledState;
});

Task blinkTask2(250, TASK_FOREVER, []() {
  static bool ledState = LOW;
  digitalWrite(PINN2, ledState);
  ledState = !ledState;
});

Task blinkTask3(333, TASK_FOREVER, []() {
  static bool ledState = LOW;
  digitalWrite(PINN3, ledState);
  ledState = !ledState;
});

void setup() {
  // Initialize the LED PINNs as outputs
  PINNMode(PINN1, OUTPUT);
  PINNMode(PINN2, OUTPUT);
  PINNMode(PINN3, OUTPUT);

  // Add the tasks to the TaskManager
  TaskManager::getInstance().addTask(blinkTask1);
  TaskManager::getInstance().addTask(blinkTask2);
  TaskManager::getInstance().addTask(blinkTask3);
}

void loop() {
  // Run the TaskManager
  TaskManager::getInstance().run();
}

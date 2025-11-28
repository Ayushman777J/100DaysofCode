//Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.
#include <stdio.h>
typedef enum {
    RED,
    YELLOW,
    GREEN
} TrafficLight;
void printTrafficLightAction(TrafficLight light) {
    switch (light) {
        case RED:
            printf("Stop\n");
            break;
        case YELLOW:
            printf("Wait\n");
            break;
        case GREEN:
            printf("Go\n");
            break;
        default:
            printf("Invalid traffic light\n");
    }
}
int main() {
    TrafficLight light = RED;
    printTrafficLightAction(light);
    light = YELLOW;
    printTrafficLightAction(light);
    light = GREEN;
    printTrafficLightAction(light);
    return 0;
}
#include <stdio.h>

int main() {
    float roomL, roomH, roomB, doorL, doorB, winL, winB;
    float Sarea, win_ar, door_ar;

    printf("Enter length, breadth, and height of the room: ");
    scanf("%f %f %f", &roomL, &roomB, &roomH);  

    Sarea = 2 * ((roomL * roomB) + (roomB * roomH) + (roomL * roomH));

    printf("Enter length and breadth of the door: ");
    scanf("%f %f", &doorL, &doorB); 

    door_ar = doorL * doorB;

    printf("Enter length and breadth of the window: ");
    scanf("%f %f", &winL, &winB);  

    win_ar = winL * winB;

    printf("The surface area of the room: %f\n", Sarea);
    printf("The surface area of the door: %f\n", door_ar);
    printf("The surface area of 2 windows: %f\n", 2 * win_ar);

    printf("The area to be whitewashed is: %f\n", Sarea - (2 * win_ar + door_ar));

    return 0;
}

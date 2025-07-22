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
    float rooffloor = 2*roomB*roomL;
    float roof = roomB*roomL;

    printf("The area to be whitewashed is: %f\n", roof);

    printf("The area to be painted is: %f\n", Sarea - (2 * win_ar + door_ar + rooffloor));

    return 0;
}

#include <stdio.h>

int main() {
    int cp, sp, diff;

    printf("Enter Cost Price: ");
    scanf("%d", &cp);

    printf("Enter Selling Price: ");
    scanf("%d", &sp);

    if (sp > cp) {
        diff = sp - cp;
        printf("Profit: %d\n", diff);
    }
    else if (cp > sp) {
        diff = cp - sp;
        printf("Loss: %d\n", diff);
    }
    else {
        printf("No Profit, No Loss.\n");
    }

    return 0;
}

#include <stdio.h>

int main() {
    float input;
    
    while (input != 1) {
        printf("Enter the NFL score (Enter 1 to stop): ");
        scanf("%f", &input);

        // rat's nest loop
        for (int twoPC = 0; twoPC <= (input/8); twoPC++) {
            for (int onePC = 0; onePC <= (input/7); onePC++) {
                for (int TD = 0; TD <= (input/6); TD++) {
                    for (int FG = 0; FG <= (input/3); FG++) {
                        for (int safety = 0; safety <= (input/2); safety++) {
                            if ((TD * 6) + (FG * 3) + (safety * 2) + (twoPC * 8) + (onePC * 7) == input) {
                                printf("%d TD + 2pt, %d TD + FG, %d TD, %d 3pt FG, %d Safety\n", twoPC, onePC, TD, FG, safety);
                            }
                        }
                    }
                }
            }
        }
    }
}
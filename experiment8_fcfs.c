#include <stdio.h>

int main(void) {
    int at[] = {0, 1, 2}, bt[] = {4, 3, 2};
    int ct[3], tat[3], wt[3], i, start;

    ct[0] = at[0] + bt[0];
    for (i = 1; i < 3; i++) {
        start = at[i] > ct[i - 1] ? at[i] : ct[i - 1];
        ct[i] = start + bt[i];
    }

    printf("Patient AT BT CT TAT WT\n");
    for (i = 0; i < 3; i++) {
        tat[i] = ct[i] - at[i];
        wt[i] = tat[i] - bt[i];
        printf("P%d %d %d %d %d %d\n", i + 1, at[i], bt[i], ct[i], tat[i], wt[i]);
    }
    return 0;
}

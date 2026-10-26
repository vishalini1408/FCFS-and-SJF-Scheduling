#include <stdio.h>

int main(void) {
    int bt[] = {4, 2, 3}, id[] = {1, 2, 3};
    int ct[3], tat[3], wt[3], i, j, temp;

    for (i = 0; i < 2; i++) {
        for (j = i + 1; j < 3; j++) {
            if (bt[j] < bt[i]) {
                temp = bt[i]; bt[i] = bt[j]; bt[j] = temp;
                temp = id[i]; id[i] = id[j]; id[j] = temp;
            }
        }
    }

    ct[0] = bt[0];
    for (i = 1; i < 3; i++) ct[i] = ct[i - 1] + bt[i];

    printf("Patient BT CT TAT WT\n");
    for (i = 0; i < 3; i++) {
        tat[i] = ct[i];
        wt[i] = tat[i] - bt[i];
        printf("P%d %d %d %d %d\n", id[i], bt[i], ct[i], tat[i], wt[i]);
    }
    return 0;
}

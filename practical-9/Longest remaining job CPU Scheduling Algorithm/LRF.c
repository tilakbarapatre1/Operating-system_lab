#include <stdio.h>

#define MAX_PROCESSES 10

void findWaitingTime(int p[], int n, int bt[], int wt[], int ct[]) {
    int rem_bt[MAX_PROCESSES];

    for(int i = 0; i < n; i++)
        rem_bt[i] = bt[i];

    int complete = 0, time = 0;
    int longest = 0;

    while(complete != n) {
        int max = -1;
        int found = 0;

        // Find process with maximum remaining time
        for(int i = 0; i < n; i++) {
            if(rem_bt[i] > 0 && rem_bt[i] > max) {
                max = rem_bt[i];
                longest = i;
                found = 1;
            }
        }

        if(!found) {
            time++;
            continue;
        }

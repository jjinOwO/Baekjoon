#include <stdio.h>
#include <string.h>
int main() {

    int n;
    scanf("%d", &n);
    int half = 0;  int quarter = 0; int t_quarter = 0;
    int q_rest = 0;  int h_rest = 0; int t_rest = 0;
    int pizza = 0; int rest = 0;
    for (int i = 0; i < n; i++) {

        char arr[4];
        scanf("%s", arr);

        if (strcmp(arr, "1/4") == 0) quarter++;
        else if (strcmp(arr, "1/2") == 0) half++;
        else if (strcmp(arr, "3/4") == 0) t_quarter++;
    }

    if (quarter == t_quarter) pizza += quarter;
    else {
        if (quarter > t_quarter) {
            pizza += t_quarter;
            q_rest += quarter - t_quarter;
        }

        else if (quarter < t_quarter) {
            pizza += quarter;
            t_rest += t_quarter - quarter;
        }
    }
    pizza += half / 2;
    h_rest += half % 2;

    pizza += t_rest;

    while (h_rest > 0) {
        pizza += 1;
        h_rest--;
        q_rest -= 2;
    }
    while (q_rest > 0) {
        pizza++;
        q_rest -= 4;
    }

    printf("%d", pizza);


    return 0;
}
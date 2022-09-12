#include<stdio.h>
int S[12];
int arr[12];
int index = 0;
void Combination(int n, int r, int i = 0) {
    if (r < 1 || n < r)
    {
        if (index == 6)
        {
            for (int i = 0; i < index; i++) {
                printf("%d ", arr[i]);
            }
            printf("\n");
        }
        return;
    }

    arr[index++] = S[i];
    Combination(n - 1, r - 1, i + 1);

    index--;
    Combination(n - 1, r, i + 1);
    //return
}

int main() {

    int n;
    scanf_s("%d", &n);

    for (int i = 0; i < n; i++) {
        int in;
        scanf_s("%d", &in);
        S[i] = in;
    }

    Combination(n, 6);

    return 0;
}
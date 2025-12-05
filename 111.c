#include <stdio.h>

int main() {
    int n, k;
    
    scanf("%d", &n);
    
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    scanf("%d", &k);
    
    int q[n];  
    int front = 0, rear = 0;
    
    for (int i = 0; i < k; i++) {
        if (arr[i] < 0)
            q[rear++] = i;
    }
    
    if (front == rear)
        printf("0 ");
    else
        printf("%d ", arr[q[front]]);
    
    for (int i = k; i < n; i++) {

        while (front < rear && q[front] <= i - k)
            front++;

        if (arr[i] < 0)
            q[rear++] = i;

        if (front == rear)
            printf("0 ");
        else
            printf("%d ", arr[q[front]]);
    }
    
    return 0;
}

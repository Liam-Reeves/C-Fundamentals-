#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define MAX 5

char queue[MAX][50];

int front = -1, rear = -1;

void enqueue(char name[]){
    if (rear == MAX - 1) { // Check if the queue is full
        printf("Queue is full\n");

    } else{
        if (front == -1) { // If queue is empty
            front = 0;

            rear++;

        }
    ;
    }
}
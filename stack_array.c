#include <stdio.h>
#include <stdbool.h>

#define MAX 100

typedef struct {
    int data[MAX];
    int top;
} Stack;

void init(Stack* s) { s->top = -1; }
bool isEmpty(Stack* s) { return s->top == -1; }
bool isFull(Stack* s) { return s->top == MAX - 1; }
bool push(Stack* s, int x) { if (isFull(s)) return false; s->data[++s->top] = x; return true; }
bool pop(Stack* s, int* out) { if (isEmpty(s)) return false; *out = s->data[s->top--]; return true; }
bool peek(Stack* s, int* out) { if (isEmpty(s)) return false; *out = s->data[s->top]; return true; }

int main(void) {
    Stack s; init(&s);
    int n, x;
    printf("How many values to push? ");
    if (scanf("%d", &n) != 1 || n < 0 || n > MAX) return 1;
    for (int i = 0; i < n; ++i) { if (scanf("%d", &x) != 1) return 1; if (!push(&s, x)) { printf("Stack overflow!\n"); break; } }
    printf("Top element: "); if (peek(&s, &x)) printf("%d\n", x); else printf("Empty\n");
    printf("Popping all: ");
    while (pop(&s, &x)) printf("%d ", x);
    printf("\n");
    return 0;
}

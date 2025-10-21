#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* push_front(Node* head, int x) {
    Node* n = (Node*)malloc(sizeof(Node));
    if (!n) { perror("malloc"); exit(1); }
    n->data = x; n->next = head; return n;
}

Node* delete_value(Node* head, int x) {
    Node dummy; dummy.next = head;
    Node* prev = &dummy; Node* cur = head;
    while (cur) {
        if (cur->data == x) { prev->next = cur->next; free(cur); break; }
        prev = cur; cur = cur->next;
    }
    return dummy.next;
}

void print_list(Node* head) {
    for (Node* p = head; p; p = p->next) printf("%d -> ", p->data);
    printf("NULL\n");
}

void free_list(Node* head) {
    while (head) { Node* t = head->next; free(head); head = t; }
}

int main(void) {
    Node* head = NULL;
    int n, x;
    printf("How many elements to add at front? ");
    if (scanf("%d", &n) != 1 || n < 0) return 1;
    for (int i = 0; i < n; ++i) {
        if (scanf("%d", &x) != 1) return 1;
        head = push_front(head, x);
    }
    printf("List: "); print_list(head);
    printf("Enter value to delete (first occurrence): ");
    if (scanf("%d", &x) != 1) return 1;
    head = delete_value(head, x);
    printf("After delete: "); print_list(head);
    free_list(head);
    return 0;
}

#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {
    /* your code here */
    if (head == NULL || head->next == NULL) {
        return 0;
    }

    node *tortoise = head;
    node *hare = head;

    while (hare != NULL && hare->next != NULL) {
        hare = hare->next->next;

        tortoise = tortoise->next;

        if (tortoise == hare) return 1;
    }

    return 0;
}
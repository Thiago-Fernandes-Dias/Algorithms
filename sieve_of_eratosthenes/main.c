#include <stdio.h>

#include "sieve.h"

int main(void)
{
        Node *list, *cur;

        list = generate_primes(31);
        cur = list;
        while (cur->next != NULL)
        {
                printf("%d ", cur->num);
                cur = cur->next;
        }
        printf("\n");

        return 0;
}
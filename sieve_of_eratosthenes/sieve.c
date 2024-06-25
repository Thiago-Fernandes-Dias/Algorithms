#include <stdlib.h>
#include <stdbool.h>

#include "sieve.h"

Node *generate_primes(int max)
{
        if (max < 2)
                return NULL;
        int limit = max + 1;
        bool marks[limit];
        for (int i = 0; i < limit; i++)
                marks[i] = true;
        marks[0] = marks[1] = false;
        for (int i = 3; i < limit; i++)
                marks[i] = i % 2 != 0;
        for (int j = 3; j < limit; j++)
        {
                if (!marks[j])
                        continue;
                for (int k = j + 1; k < limit; k++)
                {
                        if (k % j != 0)
                                continue;
                        marks[k] = false;
                }
        }
        Node *node = malloc(sizeof(Node));
        Node *cur = node;
        for (int i = 0; i < limit; i++)
        {
                if (!marks[i])
                        continue;
                cur->num = i;
                cur->next = malloc(sizeof(Node));
                cur = cur->next;
        }

        return node;
}
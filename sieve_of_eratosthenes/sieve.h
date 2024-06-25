#ifndef SIEVE_H
#define SIEVE_H

typedef struct node
{
        int num;
        struct node *next;
} Node;

Node *generate_primes(int max);

#endif
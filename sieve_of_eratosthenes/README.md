# Sieve of Eratosthenes Algorithm

My implementation of the Sieve of Eratosthenes Algorithm, an ancient and efficient method for finding all prime numbers up to a given limit. It is named after the Greek mathematician Eratosthenes, who developed it.

## Explanation:

1. We start by listing all numbers from 2 up to the maximum limit we want to check.
2. Initially, we assume all these numbers are prime.
3. We begin with the number 2, which we know is prime.
4. We mark all multiples of 2 as non-prime by crossing them off the list. Multiples of 2 are composite numbers by 5. definition, as they are divisible by 2 besides 1 and themselves.
5. Next, we move to the next uncrossed number in the list, which is 3. We know it is prime because it hasn't been marked as non-prime before.
6. We mark all multiples of 3 as non-prime.
7. We repeat this process for the next uncrossed number, marking all its multiples as non-prime.
8. We continue repeating steps 6 and 7 until we reach the maximum limit.
9. In the end, all the uncrossed numbers remaining in the list are prime.
10. The efficiency of the Sieve of Eratosthenes algorithm lies in the fact that we don't need to individually check every number. By marking multiples of a number as non-prime, we eliminate several subsequent iterations. This significantly reduces the number of operations required to find the prime numbers.
# Sieve-of-Eratosthenes

Given a number n, print all primes smaller than or equal to n. It is also given that n is a small number.

Example:

Input : n =10
Output : 2 3 5 7 

Input : n = 20 
Output: 2 3 5 7 11 13 17 19

Explanation with Example:
Let us take an example when n = 50. So we need to print all print numbers smaller than or equal to 50.

We create a list of all numbers from 2 to 50.
Sieve1

According to the algorithm we will mark all the numbers which are divisible by 2 and are greater than or equal to the square of it.
sieve2

Now we move to our next unmarked number 3 and mark all the numbers which are multiples of 3 and are greater than or equal to the square of it.
SieveofEratosthenes3

We move to our next unmarked number 5 and mark all multiples of 5 and are greater than or equal to the square of it.
Sieve4

We continue this process and our final table will look like below:
Sieve5

So the prime numbers are the unmarked ones: 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47.

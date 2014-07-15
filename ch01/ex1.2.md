> 1 Give an example of an application that requires algorithmic content at
> the application level, and discuss the function of the algorithms involved.

Search system relies on a lot of algorithms. A list of possible algorithms are:
sorting, indexing content to improve the lookup of the content to search for,
ranking result by given points.

> 2 Suppose we are comparing implementations of insertion sort and merge
> sort on the same machine. For inputs of size n, insertion sort runs in
> 8(n^2) steps, while merge sort runs in 64n lg n steps. For which values of n
> does insertion sort beat merge sort?

8n^2 < 64n(lg n), 2 <= n <= 43

Note. Wolfram Alpha with: 8n^2 < 64n(Log2(n))

> 3 What is the smallest value of n such that an algorithm whose running time
> is 100n^2 runs faster than an algorithm whose running time is 2^n on the same
> machine?

n = 15 (32768 > 22500)

Note. Wolfram Alpha with: 2^n=100n^2

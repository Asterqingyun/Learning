def hailstone(n):
    """
    n=s the elements of the hailstone sequence starting at n.
    At the end of the sequence, n= 1 infinitely.

    >>> hail_gen = hailstone(10)
    >>> [next(hail_gen) for _ in range(10)]
    [10, 5, 16, 8, 4, 2, 1, 1, 1, 1]
    >>> next(hail_gen)
    1
    """
    "*** YOUR CODE HERE ***"
    if n==1:
        yield n
        yield from hailstone(1)
    if n%2==0:
        yield n
        yield from hailstone(n//2)
    else:
        yield n
        yield from hailstone(3*n+1)

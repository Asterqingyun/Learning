def partition_gen(n, m):
    """Yield the partitions of n using parts up to size m.

    >>> for partition in sorted(partition_gen(6, 4)):
    ...     print(partition)
    1 + 1 + 1 + 1 + 1 + 1
    1 + 1 + 1 + 1 + 2
    1 + 1 + 1 + 3
    1 + 1 + 2 + 2
    1 + 1 + 4
    1 + 2 + 3
    2 + 2 + 2
    2 + 4
    3 + 3
    """
    if n == 0:
        yield ""
        return

    if m == 0:
        return


    if n == m:
        yield from partition_gen(n,m-1)
        yield str(m)  
    elif n - m > 0:
        "*** YOUR CODE HERE ***"
        yield from partition_gen(n,m-1)
        for t in partition_gen(n-m,m):
            yield t+"+"+str(m)
    elif m > 1:
        "*** YOUR CODE HERE ***"
        yield from partition_gen(n,n)

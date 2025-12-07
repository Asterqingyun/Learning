def close(s, k) :
    """Return how many elements of s are within k of their index.

    >>> t = [6, 2, 4, 3, 5]
    >>> close(t, 0)  # Only 3 is equal to its index
    1
    >>> close(t, 1)  # 2, 3, and 5 are within 1 of their index
    3
    >>> close(t, 2)  # 2, 3, 4, and 5 are all within 2 of their index
    4
    >>> close(list(range(10)), 0)
    10
    """
    assert k >= 0
    count = 0
    for i in range(len(s)):  # Use a range to loop over indices
        if abs(s[i]-i)<=k:
            count+=1 
    return count

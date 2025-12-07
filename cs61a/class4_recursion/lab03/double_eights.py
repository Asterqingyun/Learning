def double_eights(n):
    """Returns whether or not n has two digits in row that
    are the number 8.

    >>> double_eights(1288)
    True
    >>> double_eights(880)
    True
    >>> double_eights(538835)
    True
    >>> double_eights(284682)
    False
    >>> double_eights(588138)
    True
    >>> double_eights(78)
    False
    """
    "*** YOUR CODE HERE ***"
    if not(n//10) :
       return False
    if ((n//10)%10)==8 and n%10==8:
        return True
    else:
        return double_eights(n//10)


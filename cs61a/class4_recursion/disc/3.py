def is_prime(n):
    """Returns True if n is a prime number and False otherwise.
    >>> is_prime(2)
    True
    >>> is_prime(16)
    False
    >>> is_prime(521)
    True
    """
    "*** YOUR CODE HERE ***"
    def divide_to_n(x,y):
        if y==1:
            return False
        else:
            if x%y==0:
                return True
            else:
                return divide_to_n(x,y-1)
    return not divide_to_n(n,n-1)



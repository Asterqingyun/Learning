def ten_pairs(n):
    """Return the number of ten-pairs within positive integer n.

    >>> ten_pairs(7823952) # 7+3, 8+2, and 8+2
    3
    >>> ten_pairs(55055)
    6
    >>> ten_pairs(9641469) # 9+1, 6+4, 6+4, 4+6, 1+9, 4+6 
    6
    >>> # ban iteration
    """
    "*** YOUR CODE HERE ***"
    num=0
    num+=count_digit(n,1)*count_digit(n,9)
    num+=count_digit(n,2)*count_digit(n,8)
    num+=count_digit(n,3)*count_digit(n,7)
    num+=count_digit(n,4)*count_digit(n,6)
    return num


def count_digit(n, digit,num=0):
    """Return how many times digit appears in n.

    >>> count_digit(55055, 5) # digit 5 appears 4 times in 55055
    4
    >>> count_digit(666,6)
    3
    """
    "*** YOUR CODE HERE ***"
    
    if n<=0:
        return num
    if n%10==digit:
        num+=1
    return count_digit(n//10,digit,num)
    


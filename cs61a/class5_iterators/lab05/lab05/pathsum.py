def pathsum(t, n):
    """
    >>> my_tree = tree(2, [tree(3, [tree(5), tree(7)]), tree(4)])
    >>> pathsum(my_tree, 12) # 2 -> 3 -> 7
    True
    >>> pathsum(my_tree, 5)  # A path that doesn't reach a leaf such as 2 -> 3 doesn't count
    False
    """
    "*** YOUR CODE HERE ***"
    if is_leaf(t) :
        if t==tree(n):
            return True
        else:
            return False
    else:
        return any(pathsum(branch,n-label(t)) for branch in branches(t))



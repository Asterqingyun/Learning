def balanced(t):
    """Checks if each branch has same sum of all elements and
    if each branch is balanced.

    >>> t = tree(1, [tree(3), tree(1, [tree(2)]), tree(1, [tree(1), tree(1)])])
    >>> balanced(t)
    True
    >>> t = tree(1, [t, tree(1)])
    >>> balanced(t)
    False
    >>> t = tree(1, [tree(4), tree(1, [tree(2), tree(1)]), tree(1, [tree(3)])])
    >>> balanced(t)
    False
    """
    "*** YOUR CODE HERE ***"
    if is_leaf(t):
        return True
    l=[sum_tree(branch)for branch in branches(t)]
    for branch in branches:
        if not balanced(branch):
            return False
    if min(l)==max(l):
        return True
    else:
        return False 


def partial_reverse(s: list[int], start: int) -> None:
    """Reverse part of a list in-place, starting with start up to the end of
    the list.

    >>> a = [1, 2, 3, 4, 5, 6, 7]
    >>> partial_reverse(a, 2)
    >>> a
    [1, 2, 7, 6, 5, 4, 3]
    >>> partial_reverse(a, 5)
    >>> a
    [1, 2, 7, 6, 5, 3, 4]
    """
    "*** YOUR CODE HERE ***"
    begin=start
    end=len(s)-1
    while begin<end:
        a[begin],a[end]=a[end],a[begin]
        begin+=1
        end-=1



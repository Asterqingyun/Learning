def max_path_sum(t):
    """Return the maximum root-to-leaf path sum of a tree.
    >>> t = tree(1, [tree(5, [tree(1), tree(3)]), tree(10)])
    >>> max_path_sum(t) # 1, 10
    11
    >>> t2 = tree(5, [tree(4, [tree(1), tree(3)]), tree(2, [tree(10), tree(3)])])
    >>> max_path_sum(t2) # 5, 2, 10
    17
    """
    "*** YOUR CODE HERE ***"
    def get_sum(t):
        if is_leaf(t):
            return [label(t)]
        else:
            result=[get_sum(branch)for branch in branches(t)]
            sum1=[]
            for item in result:
                for n in item:
                    n+=label(t)
                    sum1+=[n]
        return sum1
    return max(get_sum(t))
        

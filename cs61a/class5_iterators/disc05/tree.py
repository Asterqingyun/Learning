def tree(label, branches=[]):
    for branch in branches:
        assert is_tree(branch), 'branches must be trees'
    return [label] + list(branches)

def label(tree):
    return tree[0]

def branches(tree):
    return tree[1:]

def is_leaf(tree):
    return not branches(tree)

def is_tree(tree):
    if type(tree) != list or len(tree) < 1:
        return False
    for branch in branches(tree):
        if not is_tree(branch):
            return False
def has_path(t, p):
    """Return whether tree t has a path from the root with labels p.

    >>> t2 = tree(5, [tree(6), tree(7)])
    >>> t1 = tree(3, [tree(4), t2])
    >>> has_path(t1, [5, 6])        # This path is not from the root of t1
    False
    >>> has_path(t2, [5, 6])        # This path is from the root of t2
    True
    >>> has_path(t1, [3, 5])        # This path does not go to a leaf, but that's ok
    True
    >>> has_path(t1, [3, 5, 6])     # This path goes to a leaf
    True
    >>> has_path(t1, [3, 4, 5, 6])  # There is no path with these labels
    False
    """
    if label(t) != p[0]:
        return False
    elif len(p)==1:
        return True
    else:
        "*** YOUR CODE HERE ***"
        return any([has_path(branch,p[1:])for branch in branches(t)])
def find_path(t, x):
    """
    >>> t2 = tree(5, [tree(6), tree(7)])
    >>> t1 = tree(3, [tree(4), t2])
    >>> find_path(t1, 5)
    [3, 5]
    >>> find_path(t1, 4)
    [3, 4]
    >>> find_path(t1, 6)
    [3, 5, 6]
    >>> find_path(t2, 6)
    [5, 6]
    >>> print(find_path(t1, 2))
    None
    """
    
    t2 = tree(5, [tree(6), tree(7)])
    t1 = tree(3, [tree(4), t2])
    path=[]
    if label(t)==x:
        return [label(t)]
    else:
        for branch in branches(t):
            if find_path(branch):
                return [label(t)]+find_path(branch)
            
             
    return None

def only_paths(t, n):
    """Return a tree with only the nodes of t along paths from the root to a leaf of t
    for which the node labels of the path sum to n. If no paths sum to n, return None.

    >>> print_tree(only_paths(tree(5, [tree(2), tree(1, [tree(2)]), tree(1, [tree(1)])]), 7))
    5
      2
      1
        1
    >>> t = tree(3, [tree(4), tree(1, [tree(3, [tree(2)]), tree(2, [tree(1)]), tree(5), tree(3)])])
    >>> print_tree(only_paths(t, 7))
    3
      4
      1
        2
          1
        3
    >>> print_tree(only_paths(t, 9))
    3
      1
        3
          2
        5
    >>> print(only_paths(t, 3))
    None
    """
    if is_leaf(t) and t==tree(n):
        return t 
    elif not is_leaf(t):
        b=[]
        for branch in branches(t):
            new_path=only_paths(branch,n-label(t))
            if new_path:
                b+=[new_path]
        if b:
            return tree(label(t),b)   
    else:
        return None 
        
        



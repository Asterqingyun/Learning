def minimum_mewtations(typed: str, source: str, limit: int) -> int:
    """A diff function for autocorrect that computes the edit distance from TYPED to SOURCE.
    This function takes in a string TYPED, a string SOURCE, and a number LIMIT.

    Arguments:
        typed: a starting word
        source: a string representing a desired goal word
        limit: a number representing an upper bound on the number of edits

    >>> big_limit = 10
    >>> minimum_mewtations("cats", "scat", big_limit)       # cats -> scats -> scat
    2
    >>> minimum_mewtations("purng", "purring", big_limit)   # purng -> purrng -> purring
    2
    >>> minimum_mewtations("ckiteus", "kittens", big_limit) # ckiteus -> kiteus -> kitteus -> kittens
    3
    """
    if len(typed)==1 or len(source)==1:
        # BEGIN
        "*** YOUR CODE HERE ***"
        if typed[0]==source[0]:
            return abs(len(typed)-len(source))
        else:
            return abs(len(typed)-len(source))+1
        # END
    # Recursive cases should go below here
    if limit<0:
        return limit+1
    if typed[0]==source[0]:
        return minimum_mewtations(typed[1:],source[1:],limit)
    else:
        add = minimum_mewtations(source[0]+typed,source,limit-1)
        remove = minimum_mewtations(typed[1:],source,limit-1)
        substitute = minimum_mewtations(source[0]+typed[1:],source,limit-1)
        # BEGIN
        "*** YOUR CODE HERE ***"
    return min(add,remove,substitute)+1
        # END

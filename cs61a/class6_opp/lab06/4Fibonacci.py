class VirFib():
    """A Virahanka Fibonacci number.

    >>> start = VirFib()
    >>> start
    VirFib object, value 0
    >>> start.next()
    VirFib object, value 1
    >>> start.next().next()
    VirFib object, value 1
    >>> start.next().next().next()
    VirFib object, value 2
    >>> start.next().next().next().next()
    VirFib object, value 3
    >>> start.next().next().next().next().next()
    VirFib object, value 5
    >>> start.next().next().next().next().next().next()
    VirFib object, value 8
    >>> start.next().next().next().next().next().next() # Ensure start isn't changed
    VirFib object, value 8
    """

    def __init__(self, value: int = 0):
        self.value = value
        self.last_one=1

    def next(self):
        "*** YOUR CODE HERE ***"
        v=0
        next_one=VirFib(v)
        next_one.last_one=self.value
        next_one.value=self.value+self.last_one
        return next_one
                




    def __repr__(self) -> str:
        return "VirFib object, value " + str(self.value)

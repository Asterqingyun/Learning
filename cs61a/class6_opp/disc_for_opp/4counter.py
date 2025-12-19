class Counter:
    """Counts how many times inc has been called on itself or any of its spawn.

    >>> total = Counter()
    >>> odd, even = total.spawn(), total.spawn()
    >>> one, three = odd.spawn(), odd.spawn()
    >>> for c in [one, even, three, even, odd, even]:
    ...     c.inc()
    >>> [c.count for c in [one, three, even, odd, total]]
    [1, 1, 3, 3, 6]
    """
    def __init__(self, parent=None):
        self.parent = parent
        self.count=0

    def inc(self):
        self.count += 1
        if self.parent!=None:
            Counter.inc(self.parent)
    def spawn(self):
        return Counter(parent=self)

class MissDict:
    """Has a dict, gets a list of values for an iterable of keys, and counts keys that are not in the dict.

    >>> double = MissDict({1: 2, 2: 4, 3: 6, 5: 10})
    >>> half = MissDict({2: 1.0, 3: 1.5, 4: 2.0})
    >>> double.get([1, 3, 5, 2, 4])  # No value for key 4 (1 miss)
    [2, 6, 10, 4]
    >>> double.get([5, 4, 3, 0, 4])  # No value for keys 0 or either 4 (3 misses)
    [10, 6]
    >>> half.get([1, 3, 5, 2, 4])    # No value for keys 1 or 5 (2 misses)
    [1.5, 1.0, 2.0]
    >>> print(double)
    4/6 of the misses
    """
    misses = Counter()
    def __init__(self, d):
        assert isinstance(d, dict)
        self.d = d
        self.misses = MissDict.misses.spawn()

    def get(self, keys):
        result = []
        for k in keys:
            if k in self.d:
               result.append(self.d[k]) 
            else:
               self.misses.inc() 
        return result

    def __str__(self):
        return f'{self.misses.count}/{(MissDict.misses.count)} of the misses'



def fastest_words(words_and_times ):
    """Return a list of lists indicating which words each player typed fastest.
    In case of a tie, the player with the lower index is considered to be the one who typed it the fastest.

    Arguments:
        words_and_times: a dictionary {'words': words, 'times': times} where
        words is a list of the words typed and times is a list of lists of times
        spent by each player typing each word.

    >>> p0 = [5, 1, 3]
    >>> p1 = [4, 1, 6]
    >>> fastest_words({'words': ['Just', 'have', 'fun'], 'times': [p0, p1]})
    [['have', 'fun'], ['Just']]
    >>> p0  # input lists should not be mutated
    [5, 1, 3]
    >>> p1
    [4, 1, 6]
    """
    words, times = words_and_times['words'], words_and_times['times']
    player_indices = range(len(times))  # contains an *index* for each player
    word_indices = range(len(words))    # contains an *index* for each word
    # BEGIN PROBLEM 10
    result=[[]for i in player_indices]

    less=[0 for i in word_indices]
    for i in word_indices:
        l=[item[i] for item in times]   
        m=min(l)
        for j in range(len(l)):
            if l[j]==m:
                break
        less[i]=j
    for i in player_indices:
        for m in word_indices:
            if less[m]==i:
                result[i]+=[words[m]]
    return result 
    "*** YOUR CODE HERE ***"
    # END PROBLEM 10


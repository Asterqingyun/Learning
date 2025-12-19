class Transaction:
    def __init__(self, id: int, before: int, after: int):
        self.id = id
        self.before = before
        self.after = after

    def changed(self) -> bool:
        """Return whether the transaction resulted in a changed balance."""
        "*** YOUR CODE HERE ***"
        if self.before==self.after:
            return False
        else:
            return True

    def report(self) -> str:
        """Return a string describing the transaction.

        >>> Transaction(3, 20, 10).report()
        '3: decreased 20->10'
        >>> Transaction(4, 20, 50).report()
        '4: increased 20->50'
        >>> Transaction(5, 50, 50).report()
        '5: no change'
        """
        msg: str = 'no change'
        if self.changed():
            "*** YOUR CODE HERE ***"
            if self.before>self.after:
                msg='decreased '+str(self.before)+'->'+str(self.after)
            elif self.before<self.after:
                msg='increased '+str(self.before)+'->'+str(self.after)
        return str(self.id) + ': ' + msg

class BankAccount:
    """A bank account that tracks its transaction history.

    >>> a = BankAccount('Eric')
    >>> a.deposit(100)    # Transaction 0 for a
    100
    >>> b = BankAccount('Erica')
    >>> a.withdraw(30)    # Transaction 1 for a
    70
    >>> a.deposit(10)     # Transaction 2 for a
    80
    >>> b.deposit(50)     # Transaction 0 for b
    50
    >>> b.withdraw(10)    # Transaction 1 for b
    40
    >>> a.withdraw(100)   # Transaction 3 for a
    'Insufficient funds'
    >>> len(a.transactions)
    4
    >>> len([t for t in a.transactions if t.changed()])
    3
    >>> for t in a.transactions:
    ...     print(t.report())
    0: increased 0->100
    1: decreased 100->70
    2: increased 70->80
    3: no change
    >>> b.withdraw(100)   # Transaction 2 for b
    'Insufficient funds'
    >>> b.withdraw(30)    # Transaction 3 for b
    10
    >>> for t in b.transactions:
    ...     print(t.report())
    0: increased 0->50
    1: decreased 50->40
    2: no change
    3: decreased 40->10
    """

    # *** YOU NEED TO MAKE CHANGES IN SEVERAL PLACES IN THIS CLASS ***

    def __init__(self, account_holder: str):
        self.balance: int = 0
        self.holder = account_holder
        self.transactions=[]
        self.num=0

    def deposit(self, amount: int) -> int:
        """Increase the account balance by amount, add the deposit
        to the transaction history, and return the new balance.
        """
        self.balance = self.balance + amount
        self.transactions.append(Transaction(self.num,self.balance-amount,self.balance))
        self.num+=1
        return self.balance

    def withdraw(self, amount ) :
        """Decrease the account balance by amount, add the withdraw
        to the transaction history, and return the new balance.
        """
        if amount > self.balance:
            self.transactions.append(Transaction(self.num,self.balance,self.balance))
            self.num+=1
            return 'Insufficient funds'
        self.balance = self.balance - amount
        self.transactions.append(Transaction(self.num,self.balance+amount,self.balance))
        self.num+=1
        return self.balance

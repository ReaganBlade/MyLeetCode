# 1116. Print Zero Even and Odd

from threading import Condition

class ZeroEvenOdd:
    def __init__(self, n):
        self.n = n
        self.exec_cond = Condition()
        self.order = 0
        self.turn = 1
        
	# printNumber(x) outputs "x", where x is an integer.
    def zero(self, printNumber: 'Callable[[int], None]') -> None:
        for _ in range(self.n):
            with self.exec_cond:
                self.exec_cond.wait_for(lambda: self.order == 0)
                printNumber(0)
                if self.turn & 1:
                    self.order = 1
                else:
                    self.order = 2
                self.exec_cond.notify_all()
                
        
    def even(self, printNumber: 'Callable[[int], None]') -> None:
        for i in range(2, self.n + 1, 2):
            with self.exec_cond:
                self.exec_cond.wait_for(lambda : self.order == 2)
                printNumber(i)
                self.order = 0
                self.turn += 1
                self.exec_cond.notify_all()
    
        
    def odd(self, printNumber: 'Callable[[int], None]') -> None:
        for i in range(1, self.n + 1, 2):
            with self.exec_cond:
                self.exec_cond.wait_for(lambda : self.order == 1)
                printNumber(i)
                self.order = 0
                self.turn += 1
                self.exec_cond.notify_all()
        
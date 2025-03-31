# Fibonacci Sequence

def fib(a, b, lim):
    if a < lim:
        print(a)
        return fib(b, a + b, lim)
    return
    

if __name__ == "__main__":
    a = 0
    b = 1

    lim = 13

    fib(0, 1, lim)
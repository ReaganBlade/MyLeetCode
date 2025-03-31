# 1780. Check if Number is a Sum of Powers of Three


# Approach 1: Backtracking (Brute Force)
class Solution:
    def checkPowersOfThree(self, n: int) -> bool:
        return self._check_power_three(0, n)

    def _check_power_three(self, power: int, n: int) -> bool:
        if n == 0:
            return True
        
        if 3**power > n:
            return False
        
        add_power = self._check_power_three(power + 1, n - 3 ** power)
        skip_power = self._check_power_three(power + 1, n)

        return add_power or skip_power
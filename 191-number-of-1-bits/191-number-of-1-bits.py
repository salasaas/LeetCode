class Solution:
    def hammingWeight(self, n: int) -> int:
        count = bin(n).count('1')
        return count
        
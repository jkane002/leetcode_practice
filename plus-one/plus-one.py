class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        listToString = ''.join(str(i) for i in digits)
        num = int(listToString) + 1
        return [int(digit) for digit in str(num)]
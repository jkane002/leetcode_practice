class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        listOfWords = list(s.split())
        if not listOfWords: return 0
        return len(listOfWords[-1])
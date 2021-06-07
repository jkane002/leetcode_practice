class Solution:
    
    def convertString(self, word:str) -> int:
        '''
        converts string to alpha pos & casts as int
        '''
        string = ""
        for char in word:
            string += str(ord(char)-ord('a'))
        
        return int(string)
        
    
    def isSumEqual(self, firstWord: str, secondWord: str, targetWord: str) -> bool:
        return self.convertString(firstWord) + self.convertString(secondWord) == self.convertString(targetWord)
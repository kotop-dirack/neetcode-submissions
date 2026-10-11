import string
class Solution:
    def isPalindrome(self, s: str) -> bool:
        alp = string.ascii_letters
        alp += '0123456789'
        s2 = ''
        flag = False
        for i in s:
            if i in alp:
                s2 += i
        s2 = s2.lower()
        l = 0
        r = len(s2)-1
        if len(s2) == 0:
            return True
        else:    
            while l <= r:
                if s2[l] == s2[r]:
                    l += 1
                    r -= 1
                    flag = True
                else:
                    flag = False
                    break
            return True if flag else False
           
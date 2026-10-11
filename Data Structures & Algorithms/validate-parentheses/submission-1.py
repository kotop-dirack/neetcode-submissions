class Solution:
    def isValid(self, s: str) -> bool:
        mas = deque()
        has = {')' : '(', ']' : '[', '}' : '{'}

        for i in s:
            if i in has:
                if mas and mas[-1] == has[i]:
                    mas.pop()
                else:
                    return False
            else:
                mas.append(i)
        return True if not mas else False       
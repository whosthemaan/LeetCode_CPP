def isAnagram(self, s: str, t: str) -> bool:
    if(len(s)!=len(t)):
        return False
    for i in range(len(s)):
        if(t.count(s[i])>0):
            t = t.replace(str(s[i]), '', 1)
        else:
            return False
    return True

print(isAnagram("anagram", "nagaram"))
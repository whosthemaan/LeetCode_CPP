def canConstruct(ransomNote: str, magazine: str) -> bool:
    for i in range(len(ransomNote)):
        if(magazine.count(ransomNote[i])>0):
            magazine = magazine.replace(str(ransomNote[i]), '', 1)
        else:
            return False
    return True

print(canConstruct("aa", "ab"))
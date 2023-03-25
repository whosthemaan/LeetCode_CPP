def calculate(s: str) -> int:
    s = s.replace(' ', '')
    s = s + '+'
    final = []
    num = 0
    operator = '+'
    for i in s:
        if i.isdigit():
            num = (num * 10) + int(i)
        else:
            if operator=='-':
                final.append(-num)
            elif operator=='+':
                final.append(num)
            elif operator=='*':
                final.append(final.pop()*num)
            elif operator=='/':
                final.append(int(final.pop()/num))
            num, operator = 0, i
    return sum(final)

s = "3+2*5"
print(calculate(s))
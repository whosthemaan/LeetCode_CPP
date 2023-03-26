def minNumberOfFrogs(croakOfFrogs: str) -> int:
    open_case = 0
    c = r = o = a = k = 0
    number_of_frogs = 0
    for i in croakOfFrogs:
        if(i=='c'):
            c+=1
            open_case += 1
            if(number_of_frogs<open_case):
                number_of_frogs = open_case
        elif(i=='r'):
            r+=1
        elif(i=='o'):
            o+=1
        elif(i=='a'):
            a+=1
        elif(i=='k'):
            k+=1
            open_case -= 1
    
        # case for incomplete croaks
        if(r>c or o>r or a>o or k>a): 
            return -1

    # state of all completions and equal count of croak character each
    if open_case == 0 and c==r==o==a==k:
        return number_of_frogs

    return -1

croakOfFrogs = "croakcroak"
print(minNumberOfFrogs(croakOfFrogs))
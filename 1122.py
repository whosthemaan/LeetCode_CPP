def relativeSortArray(self, arr1: List[int], arr2: List[int]) -> List[int]:
    arr12 = []
    arr = []
    arr1 = Counter(arr1)
    for i in arr2:
        arr12+=[i]*arr1[i]
    for i in arr1:
        if i not in arr2:
            arr+=[i]*arr1[i]
    return arr12+sorted(arr)

def main():
   arr1 = {}
   relativeSortArray(self, arr1, arr2) 

if __name__ == "__main__":
    main()
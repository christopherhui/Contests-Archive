n = int(input())
for z in range(n):
    val = input()
    aList = list(val)
    for i in range(0, len(aList)):
        if int(aList[i]) == 4:
            aList[i] = '3'
    a = int(''.join(aList))
    b = int(val) - a
    print('Case #' + str(z + 1) + ':', a, b)

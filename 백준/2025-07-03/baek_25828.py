count = 0
g,p,t = map(int, input().split())
case_1 = g*p
case_2 = g + p*t
if case_1 < case_2:
    print(1)
elif case_1 > case_2:
    print(2)
else:
    print(0)
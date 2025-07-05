a, b = map(int, input().split())
under = 0

num = 0
for i in range(1,a + 1):
    if 10 - i >= 1 and 10 - i <= b:
        num = num + 1
        
if num < 0:
    num = 0
elif num >= 10:
    num = 9
    
print("There {0} ".format('is' if num == 1 else 'are') + str(num) +" ways to get the sum 10.")
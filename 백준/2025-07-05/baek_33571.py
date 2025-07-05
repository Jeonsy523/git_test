one_hole = ['A','a','b','D','d','e','g','O','o','P','p','Q','q','R','@']
two_hole = ['B']

S = input()
count = 0

for char in S:
    if char in one_hole:
        count = count + 1
    elif char in two_hole:
        count = count + 2

print(count)
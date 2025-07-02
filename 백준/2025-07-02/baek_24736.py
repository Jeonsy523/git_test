a = [0,0,0,0,0]
b = [0,0,0,0,0]

a[0], a[1], a[2], a[3], a[4] = map(int, input().split())
b[0], b[1], b[2], b[3], b[4] = map(int, input().split())

print(a[0]*6 + a[1]*3 + a[2]*2 + a[3]*1 + a[4]*2)
print(b[0]*6 + b[1]*3 + b[2]*2 + b[3]*1 + b[4]*2)
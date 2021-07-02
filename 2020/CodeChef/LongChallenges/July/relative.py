t = input()
t = int(t)
while t:
    str = input()
    temp = str.split()
    g = int(temp[0])
    c = int(temp[1])
    c = c * c
    g = 2 * g
    print(int(c / g))
    t = t - 1

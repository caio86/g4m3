l, c = map(int, input().split())
qtd = 0

arr = []
hori = ['-'] * c
vert = ['-'] * l
for i in range(l):
    arr.append(input().split())
    for j in range(c):
        if (arr[i][j] == '1' and vert[i] == '-'):
            vert[i] = 'M'
            qtd+=1
        if (arr[i][j] == '1' and hori[j] == '-'):
            hori[j] = 'M'
            qtd+=1

print(qtd)
for i in range(l):
    for j in range(c):
        print(arr[i][j], end=" ")
    print(vert[i])
for i in range(c):
    print(hori[i], end=" ")
print()

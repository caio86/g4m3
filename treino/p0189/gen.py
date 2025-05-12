from random import randint as ri

N=100

lista=[]
for _ in range(N):
    lista.append(ri(0, 1))

print(N, sum(lista))
for i in lista:
    print(i)

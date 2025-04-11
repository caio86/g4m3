import random, string

def randomword(length):
   letters = string.ascii_lowercase
   return ''.join(random.choice(letters) for i in range(length))

N=10000
M=100

Q=N*M

words = []

print(N, M)

for _ in range(Q):
    words.append(randomword(4))

words = sorted(words)


for i, pal in enumerate(words):
    final = "\n" if ( i+1 ) % M == 0 else " "
    print(pal, end=final)

print(Q)

for i in range(Q):
    print(random.choice(words))





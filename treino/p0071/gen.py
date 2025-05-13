import random;

N=1000000
L=-100000000
R=100000000

print(N)
for i in range(N):
    val = random.getrandbits(1)
    print(R if val else L, end=" ")
print()

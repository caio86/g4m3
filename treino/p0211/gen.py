import random

N=2000

print(N)

# for _ in range(N):
#     print(random.randint(1,3), end=" ")

print(1, end=" ")
for _ in range(N-2):
    print(2, end=" ")
print(3, end=" ")

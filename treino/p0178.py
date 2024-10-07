def eh_primo(n: int) -> bool:

    if n == 1:
        return False

    if n == 2:
        return True

    if n % 2 == 0:
        return False

    for i in range(3, int(n**0.5) + 1, 2):
        if n % i == 0:
            return False

    return True


N = int(input())

soma = 0
start, stop = (
    N**2,
    (N + 1) ** 2,
)
for i in range(N**2, (N + 1) ** 2 + 1):
    if eh_primo(i):
        soma += 1

print(soma)

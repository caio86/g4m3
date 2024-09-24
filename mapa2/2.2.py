N = int(input())

qtdFadas = 0
for _ in range(N):
    frase = input().lower()
    if "fada" in frase:
        qtdFadas += 1

print(qtdFadas)

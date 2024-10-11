def solve(parcelas: list[str]) -> list[int]:
    resultado = []
    for parcela in parcelas:
        opcao1 = int(int(parcela[0]) + int(parcela[1] + parcela[2]))
        opcao2 = int(int(parcela[0] + parcela[1]) + int(parcela[2]))
        resultado.append(max(opcao1, opcao2))

    return resultado


N = int(input())

parcelas = [input() for _ in range(N)]

for res in solve(parcelas):
    print(res)

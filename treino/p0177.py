def solve(n: int, m: int) -> list[list[int]]:
    tabela = [[1 for _ in range(n)] for _ in range(n)]

    def formula(x: int) -> int:
        return (2 * x) % m

    for i in range(n):
        for j in range(n):
            if i == 0 and j == 0:
                tabela[i][j] = 1
                continue
            if j == 0:
                acima = tabela[i - 1][j]
                tabela[i][j] = formula(acima)
                continue
            anterior = tabela[i][j - 1]
            tabela[i][j] = formula(anterior)
    return tabela


def main():
    N, M = map(int, input().split())
    res = solve(N, M)
    for row in res:
        print(" ".join(map(str, row)))


if __name__ == "__main__":
    main()

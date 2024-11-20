class Solve:
    def __init__(self, n: int, c: int) -> None:
        campo = [False] * (n + 1)

        self.campo = campo
        self.qtdComandos = c
        self.N = n
        self.C = c

    def checarEsquerda(self, indice: int) -> None:
        pass

    def checarDireita(self, indice: int) -> None:
        if indice >= self.N:
            return

        if self.campo[indice]:
            self.apagar(indice)
            return

        if any(self.campo[indice:]):
            tam = len(self.campo[indice:])
            metade = tam // 2
            n1 = self.campo[indice : tam - metade]
            n2 = self.campo[indice:][:metade]

        return

    def emChamas(self, indice: int):
        self.campo[indice] = True

    def apagar(self, indice: int):
        self.campo[indice] = False
        print("APAGOU", indice)


def main():
    N, C = map(int, input().split())

    res = Solve(N, C)

    for _ in range(C):
        comando = input().split()
        op, x = comando[0], int(comando[1])

        match op:
            case "S":
                pass
                # res.emChamas(x)
            case "L":
                pass
                # res.checarEsquerda(x)
            case "R":
                res.checarDireita(x)

    print(res.campo)


if __name__ == "__main__":
    main()

class Solution:
    def solve(self, pessoas: list[int]):
        paul = pessoas[-1]
        for pessoa in pessoas:
            if pessoa > paul:
                print(pessoa)


N = int(input())

pessoas = [int(input()) for _ in range(N)]

Solution().solve(pessoas)

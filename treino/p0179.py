def solve(dicio: dict) -> bool:
    for _ in range(N):
        key, value = input().split()
        if key in dicio:
            return False
        dicio[key] = value
    return True


N = int(input())

dicionario = {}

print("YES" if solve(dicionario) else "NO")

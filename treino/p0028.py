def findIndexes(lista):
    indexes = {}

    for i, v in enumerate(lista):
        if v in indexes:
            indexes[v].append(i)
        else:
            indexes[v] = [i]

    return indexes


N, Q = map(int, input().split())
planetas = list(map(int, input().split()))
versoes = []

for _ in range(Q):
    a, b = map(int, input().split())
    versoes.append((a, b))

origens = findIndexes(planetas)

# for a, b in versoes:
#
#     maior = 0
#
#     for origem in origens[a]:
#         distancia = 1
#         for j in range(origem + 1, origem + N):
#             distancia += 1
#             destino = j % N
#
#             if planetas[destino] == b:
#                 maior = max(maior, distancia)

for a, b in versoes:
    if a not in origens or b not in origens:
        print(0)
        continue

    origem_index_list = origens[a]
    destino_index_list = origens[b]

    maior = 0

    for origem_index in origem_index_list:
        for destino_index in destino_index_list:
            distancia = (destino_index - origem_index + 1) % N
            if distancia == 0:
                distancia = N
            maior = max(maior, distancia)

    print(maior)

texto = input()

resultado = ""

for palavra in texto.split():
    for i, letra in enumerate(palavra):
        if i % 2 == 1:
            resultado += letra
    resultado += " "

resultado += "\n"

print(resultado)

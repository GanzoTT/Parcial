# Solicita al usuario un número entero positivo
n = int(input("Introduce un número entero positivo: "))

# Verifica si el número es positivo
if n <= 0:
    print("Número inválido. Introduce un entero positivo.")
else:
    # Imprime el número inicial
    print(f"Secuencia para {n}:")
    steps = 0
    while n != 1:
        print(f"{n} -> ", end="")
        if n % 2 == 0:
            n = n // 2
        else:
            n = 3 * n + 1
        steps += 1
    print("1")
    print(f"Finalizada en {steps} pasos.")


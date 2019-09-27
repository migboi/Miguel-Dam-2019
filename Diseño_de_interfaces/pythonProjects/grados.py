def convert_to(fahrenheit):
    return round((fahrenheit-32)*5/9,2)

numero=int(input("Introduce los grados: "))

print(convert_to(numero))

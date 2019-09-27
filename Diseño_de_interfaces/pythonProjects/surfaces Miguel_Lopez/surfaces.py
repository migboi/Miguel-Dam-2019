import math

def cuadrado(a:float)->float:

    return a*a

def triangulo(b:float,h:float)->float:

    return b*h/2

def circulo(r:float)->float:

    return math.pi*r

opcion=-1

while(opcion<0):

    print("===Mernu===")
    
    print("1-Cuadrado")
    print("2-Triangulo")
    print("3-Circulo")
    print("0-salir")
    opcion=int(input("Introduce la opcion que quieras: "))


    if opcion==1:

         a=float(input("Introduce el tamañao del lado del cuadrado "))
         print("LA superficie del cudrado es ",cuadrado(a))


    if opcion==2:

        b=float(input("Introduce la base : "))
        h=float(input("Introduce la altura: "))
        print("La superfice del tringulo es ",triangulo(b,h))
    
    if opcion==3:
        r=float(input("Introduce el radio: "))
        print("La superficie del circulo es :",circulo(r))

    if opcion==0:
        opcion==-1




def diferencia():
    x=int(input("introduce el primer número: "))
    
    y=int(input("introduce el segundo número: "))
    
    if x>y:
        return x-y
    else:
        return y-x 


print("La diferencia es ",diferencia())

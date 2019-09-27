
def Calcular(a: float,b: float,c: float) ->float:
    
    """
    Calcular return tyhe info or teh operation 
    >>> Calcular(2,3,1)
    1
    >>> Calcular(2,4,1)
    2.8284271247461903
    """
 
    return (b**2-4*a*c)**0.5

print(Calcular(2,4,1))


def Ecuacion(a:int,b:int,c:int)->int:

    """
    return the result of  cuadratic ecuation


    >>> Ecuacion(1,2,3)
    -0.9523809523809522+1.3468700594029477j

    >>> Ecuacion(3,2,1)

    -0.3333333333333333+0.47140452079103173j

    >>> Ecuacion(5,7,6)
    0.7+1.0535653752852738j
    """

    pos = (-b + (b**2-4*a*c)**0.5)/(2*a)
    neg = (-b - (b**2-4*a*c)**0.5)/(2*a)


print("Los resultados son:",pos "y",neg)

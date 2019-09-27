import math

def radios(r:float,f:float,e:float=90)-> float:

    """
    T=R*F*cos(ϴ)

    where:
    R: is the magnitude of the torque,
    F: is the force vector,
       ϴ (theta): is the angle between the force vector and the lever arm vector.


    """

    return r*f*math.cos(math.radians(e))

help(radios)

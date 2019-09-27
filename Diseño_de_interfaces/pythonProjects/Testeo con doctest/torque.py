def torque(r:float, f: float, angle:float = 90) -> float:
    import math
    """
    Calculates the torque with the given parameters:
    r: magnitude of the torque
    f: force vector
    angle: angle in degrees

    Preconditions
    angle must be in degrees
    
    Usage:
    
    >>> torque(10,10,90)
    6.123233995736766e-15

    >>> torque(10,10)
    6.123233995736766e-15

    >>> torque(5,10, 120)
    -24.99999999999999
    """
    return r*f*math.cos(math.radians(angle))

import math

def volume (r:float,h:float,R:float)-> float:

    """
    this function calculing the volume of a 
    truncate cone.

    Volume=h*pi/3*(R2+r2+R*r)
    
    h,r,R never cant less menor or equal 0
   

    >>> volume(2,2,2)
     25.133

    >>> volume(2,3,2)
    37.699

    
    
    """
    
    return round(h*math.pi/3*(math.pow(R,2)+math.pow(r,2)+(R*r)),3)

help(volume)





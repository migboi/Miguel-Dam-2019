from random import randrange

def myName():
    return "Miguel"

def column(grid:list, disc:str) -> int:

    for a in range(len(grid)-1):
        for b in range(len(grid[a])):
             print(grid[a][b],end="")##imprime tablero

            
        print()
    input()   
  
    for a in range(len(grid)-1):
        for b in range(len(grid[a])):

            if(a==0 and b==5):
                if(grid[a][b+5]=="@" and grid[a+1][b+5]=="@"):
                    return ()
            else:
                  return randrange(0, 9, 1)
            
  
    
    

     
   
   

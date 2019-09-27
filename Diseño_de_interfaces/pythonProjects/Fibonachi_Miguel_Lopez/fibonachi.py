
b=int(input("Insert the final number: "))

 
    ###Caution not insert a big number

lista=[0,1]
   
for a in range(b):
    lista.append(lista[a]+lista[a+1])
         

for a in range(len(lista)-2):
    
    if a==0:
        print("=================")

    elif a!=0:
       print("[ ",lista[a]," , ",lista[a+1]," , ",lista[a+2], " ]")

    

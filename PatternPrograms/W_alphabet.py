#Pyhton program to create a Pattern of 'W' Alphabet

i,j=0,3     # spaces these digits will be used for altering number of rows/columns and needs to be changes as per requirements

#iteration for rows
for r in range(4): 
  #iteration for columns
    for c in range(7):
      #here we are placing stars on either sides and inner diagonal of 'W'
        if c==0 or c==6 or (c==5 and r==2) or c==4 and r==1:
            print('*',end='')
        elif r==i and c==j:
          #places stars at DIAGONALS
            print('*',end='')
            i+=1
            j-=1
        else:
            print(end=' ')
    print()

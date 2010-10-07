tree_row = 0
tree = []
row_items = []

for line in open('18.txt','r').readlines():
    tree.append([])

    row_items = line.rstrip().split(' ')
    for i in row_items:
        tree[tree_row].append(i)

    tree_row+=1

for j in range(len(tree)-2,-1,-1): #range from 2nd last row to row 0
    for i in range(0, len(tree[j]) ):
        print (i,j)
        #if tree[i][j] + tree[i+1][1] >= tree[i][j] + tree[i+1][j+1]:
        #    tree[i][j] = tree[i][j] + tree[i+1][j]
        #else:
        #    tree[i][j] = tree[i][j] + tree[i+1][j+1]

   

        j-=1
        


print tree
print tree[1][0]

import fileinput

sum = 0

for line in fileinput.input(['13.txt']):
    sum += int(line)

print str(sum)[0:10]

    

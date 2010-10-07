dictionary = {

    1:3,     #one
    2:3,     #two
    3:5,     #three
    4:4,     #four
    5:4,     #five
    6:3,     #six
    7:5,     #seven
    8:5,     #eight
    9:4,     #nine
    10:3,    #ten
    11:6,    #eleven
    12:6,    #twelve
    13:8,    #thirteen
    14:8,    #fourteen
    15:7,    #fifteen
    16:7,    #sixteen
    17:9,    #seventeen
    18:8,    #eighteen
    19:8,    #nineteen
    20:6,    #twenty
    30:6,    #thirty
    40:5,    #forty
    50:5,    #fifty
    60:5,    #sixty
    70:7,    #seventy
    80:6,    #eighty
    90:6,    #ninety
    100:10,  #one hundred
    200:10,  #two hundred
    300:12,  #three hundred
    400:11,  #four hundred
    500:11,  #five hundred
    600:10,  #six hundred
    700:12,  #seven hundred
    800:12,  #eight hundred
    900:11,  #nine hundred
    1000:11,  #one thousand
    "and":3
    }

oneToNineteen = 0
for i in range(1,20):
    oneToNineteen += dictionary[i]

twentyToNinetyNine = 0
for i in range(2,10):
    twentyToNinetyNine += dictionary[i*10]
    for j in range (1,10):
        twentyToNinetyNine += dictionary[i*10]
        twentyToNinetyNine += dictionary[j]
    
oneToNinetyNine = oneToNineteen + twentyToNinetyNine

oneHundredTo999 = 0
for i in range(1,10):
    oneHundredTo999 += dictionary[i*100] * 100
    oneHundredTo999 += oneToNinetyNine
    oneHundredTo999 += dictionary["and"] * 99

total = oneToNinetyNine + oneHundredTo999 + dictionary[1000]

print total

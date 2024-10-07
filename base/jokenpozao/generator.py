import random
elem = ["scissors", "human", "sponge", "paper", "air", "water", "gun", "rock", "fire"]
size = len(elem)
for i in range(10000):
    print(">>>>>>>> INSERT")
    print(elem[random.randrange(size)])
    print(elem[random.randrange(size)])
    print("======== EXPECT")
    print("<<<<<<<< FINISH\n\n")

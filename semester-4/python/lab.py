
words = {
    "kursi": "chair",
    "darwaza": "door",
    "kalam": "pen"
}

while True:
    inp = input("Enter hindi word: ")
    if inp in words:
        print(f"{inp} in english: {words[inp]}")
    else:
        print("Not in dictionary\n")


fpath = "input.txt"

censor = ["donkey", "monkey"]

with open(fpath, 'r') as fi:
    content = fi.read()
    print("Input file content:", content)
    print("\n--------\n")
    for word in censor:
        content = content.replace(word, "####")
    with open(fpath, "w") as fo:
        print("Output file content:", content)
        fo.write(content)

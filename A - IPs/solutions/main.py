for i in range(0, int(input())):
    print(".".join('{:08b}'.format(int(word)) for word in input().split(".")))

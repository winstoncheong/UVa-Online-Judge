# 10055: Hashmat the brave warrior

try:
    while True:
        line = input()
        vals = list(map(int, line.split()))

        print(abs(vals[0] - vals[1]))
except EOFError as e:
    ...
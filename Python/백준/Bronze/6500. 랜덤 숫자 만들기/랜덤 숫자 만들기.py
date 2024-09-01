def main():
    while True:
        n = int(input())
        if n == 0:
            break
        v = [n]
        n *= n
        while True:
            s = str(n)
            while len(s) < 8:
                s = "0" + s
            n = int(s[2:6])
            if n in v:
                break
            v.append(n)
            n *= n
        print(len(v))

if __name__ == "__main__":
    main()
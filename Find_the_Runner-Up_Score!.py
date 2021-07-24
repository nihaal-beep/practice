if __name__ == '__main__':
    n = int(input())
    arr = map(int, input().split())
    nlist = list(arr)
    
    nlist = list(set(nlist))
    nlist.sort()
    print(nlist[len(nlist)-2])
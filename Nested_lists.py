if __name__ == '__main__':
    list1=[]
    list3=[]
    n = int(input())
    for i in range(n):
        
        name = input()
        score = float(input())
        list1.append([name,score])
        
    list1 = dict(list1)
    list2=sorted(set(list1.values()))
    
    value2=list2[1]
    for name,score in list1.items():
        if score == value2:
            list3.append(name)
    
    list3.sort()
    for k in list3:
        print(k)

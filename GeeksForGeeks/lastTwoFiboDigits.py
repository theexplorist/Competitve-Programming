#code

a = [0, 1]
for i in range(2, 301):
    a.append(a[i - 1] + a[i - 2])
        
t = int(input())
while t > 0 :
    n = int(input())
    print(a[n % 300] % 100)
    t = t - 1
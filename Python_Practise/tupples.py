#tupples
(p1,p2)=('Max','Ham')
print(p1)
Great_F1_Drivers=dict()
Great_F1_Drivers['Max']=25
Great_F1_Drivers['Hamilton']=99
Great_F1_Drivers['Kimi']=23
Great_F1_Drivers['Russell']=1

a=Great_F1_Drivers.items()
print(a)
print(sorted(a))

tmp=list()
for (k,v) in Great_F1_Drivers.items():
	tmp.append((v,k))

print(sorted(tmp,reverse=True))
print(sorted([(v,k) for (k,v) in Great_F1_Drivers.items()]))
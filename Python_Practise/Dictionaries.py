F1_Drivers=dict()
F1_Drivers['P1']='Max'
F1_Drivers['P2']='Hamilton'
F1_Drivers['P3']='Lando'
F1_Drivers['P4']='Bottas'
print(F1_Drivers)
print(F1_Drivers['P1'])

Great_F1_Drivers=dict()
Great_F1_Drivers['Max']=25
Great_F1_Drivers['Hamilton']=99
Great_F1_Drivers['Kimi']=23
Great_F1_Drivers['Russell']=1

p=Great_F1_Drivers.get('Max',0)
print(p)

q=Great_F1_Drivers.get('Perez',10)
print(q)
print(Great_F1_Drivers)

for key in F1_Drivers:
	print(key,":",F1_Drivers[key])


#for paragraph
#counts=dict()
#for line in txt:
#	words=line.split()
#	for word in words:
#		counts[word]=counts.get(word,0)+1


for a,b in F1_Drivers.items():
	print(a,b)
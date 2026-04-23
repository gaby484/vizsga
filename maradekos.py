szam = int(input('Kérem a számot: '))
adat = input('Kérem az osztót!')
oszto = int(adat)
eredmeny = szam % oszto
while oszto > 0:
    if eredmeny > 0:
        print('Nem osztható maradék nélkül.')
    else:
        print('Osztható.')
    oszto = int(input('Kérem az osztót! '))
    if oszto > 0:
        eredmeny = szam % oszto
print('Program vége.')
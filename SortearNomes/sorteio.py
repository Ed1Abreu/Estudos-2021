import random

PrimeiroNome = str(input('Digite o primeiro nome: '))
SegundoNome = str(input('Digite o segundo nome: '))
TerceiroNome = str(input('Digite o terceiro nome: '))
QuartoNome = str(input('Digite o quarto nome: '))

lista = [PrimeiroNome, SegundoNome, TerceiroNome, QuartoNome]

sorteado = random.choice(lista)

print('O nome sorteado foi {}'.format(sorteado))
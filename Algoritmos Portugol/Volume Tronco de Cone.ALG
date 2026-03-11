Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação] 
// Professor   : Antonio Carlos Nicolodi 

Var

  altura, raiomenor, raiomaior: inteiro
  npi, resu, potencia: real

Inicio

  escreva("Digite o Raio Menor:")
  leia(raiomenor)
  escreva("Digite o Raio Maior:")
  leia(raiomaior)
  escreva("Digite o Altura:")
  leia(altura)
  escreva("Digite o valor de Pi")
  leia(npi)
  
  potencia := raiomenor^2+raiomaior^2
  resu := (raiomaior*raiomenor+potencia)/3*npi*altura
  escreva("Resultado:",resu)


fimalgoritmo
Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação] 
// Professor   : Antonio Carlos Nicolodi 

Var

  altura, raio: inteiro
  npi, resu: real

Inicio

  escreva("Escreva o Pi:")
  leia(npi)
  escreva("Escreva a Altura do Cone:")
  leia(altura)
  escreva("Escreva o Raio do Cone:")
  leia(raio)
  
  resu := (raio^2*npi)*altura/3
  
  escreva("O Volume do cone é:",resu)



fimalgoritmo
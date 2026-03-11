Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação] 
// Professor   : Antonio Carlos Nicolodi 

Var

      escada, objetivo, resu, atual: inteiro


Inicio

      escreval("Digite quantos degrais possui a escada:")
      leia(escada)
      escreval("Em qual degrau você está ?")
      leia(atual)
      escreval("Digite em qual degrau você deseja subir")
      leia(objetivo)
      
      resu := escada-atual+objetivo-escada
      

      escreval("Você terá que subir um total de",resu," degrais")



fimalgoritmo
Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação] 
// Professor   : Antonio Carlos Nicolodi 

Var

   salario, aumento, bonus, imposto, final: real


Inicio

      escreva("Digite o valor do seu salário:")
      leia(salario)


      bonus := (salario/100*5)
      imposto := (salario/100*7)
      final := (salario+bonus)-imposto
      

      escreva("O seu salário após a bonificação e imposto e igual à:",final)



fimalgoritmo
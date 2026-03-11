Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi

Var

   segundo, minuto, hora, res, dia, mes: real

Inicio

      escreval("Digite a quantidade de meses que deseja transformar")
      leia(mes)
      
      se (mes<1) entao
      escreval("Por favor, digite uma quantidade de meses válida!")
      
      senao
      dia := mes*30
      hora := mes*730
      minuto := mes*43830
      segundo := mes*2629800
      escreval("Em meses e igual a:",mes)
      escreval("Em dias e igual a:",dia)
      escreval("Em horas e igual a:",hora)
      escreval("Em minutos e igual a:",minuto)
      escreval("Em segundos e igual a:",segundo)
      fimse


fimalgoritmo
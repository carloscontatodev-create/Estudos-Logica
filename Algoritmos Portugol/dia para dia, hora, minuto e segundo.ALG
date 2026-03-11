Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi

Var

   segundo, minuto, hora, res, dia: real

Inicio

     escreval("Escreva a quantidade de dias que deseja transformar:")
     leia(dia)
     
     se (dia<1) entao
     dia := 0
     escreval("Por favor escolha um número de dias possivel")
     
     senao
     hora := dia*24
     minuto := dia*1440
     segundo := dia*86400
     escreval("Em dias é igual a:",dia)
     escreval("Em hora e igual a:",hora)
     escreval("Em minutos e igual a:",minuto)
     escreval("Em segundos e igal a:", segundo)
     fimse

fimalgoritmo
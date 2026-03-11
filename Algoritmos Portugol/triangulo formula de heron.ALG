Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi

Var

   ladoa,ladob,ladoc,total,semi, peri, raiz: real

Inicio

        escreval("Digite o primeiro lado do triângulo:")
        leia(ladoa)
        escreval("Digite o segundo lado do triângulo:")
        leia(ladob)
        escreval("Digite o terceiro lado do triângulo:")
        leia(ladoc)
        
        semi := (ladoa+ladob+ladoc)/2
        total := (semi-ladoa)*(semi-ladob)*(semi-ladoc)
        peri := total*semi
        raiz := raizq(peri)
        
        escreval("A área desse triângulo é de:",raiz)
        
        
        


fimalgoritmo
Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi

Var

   n1,n2,n3,n4,media: real
   res, raiz: real


Inicio

        escreval("Digite o primeiro número:")
        leia(n1)
        escreval("Digite o segundo número:")
        leia(n2)
        escreval("Digite o terceiro número:")
        leia(n3)
        escreval("Digite o quarto número:")
        leia(n4)
        
        se ((n1<=0) ou (n2<=0) ou (n3<=0) ou (n4<=0)) entao
        escreval("Não digite números negativos e nem 0")
        
        senao
        
        media := (n1^2)+(n2^2)+(n3^2)+(n4^2)
        res :=   media/4
        raiz := raizq(res)
        escreval("A media quadrática é:",raiz)
        
        fimse


fimalgoritmo
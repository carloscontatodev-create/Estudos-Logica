Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação] 
// Professor   : Antonio Carlos Nicolodi 

Var

  produto1, produto2, valorp1, valorp2, subtotal1, subtotal2, total: inteiro

Inicio

    escreval("Digite a quantidade do produto 1:")
    leia(produto1)
    escreval("Digite o valor do produto 1:")
    leia(valorp1)
    escreval("Digite a quantidade de produto 2:")
    leia(produto2)
    escreval("Digite o valor do produto 2:")
    leia(valorp2)
    
    subtotal1 := produto1*valorp1
    subtotal2 := produto2*valorp2
    total := subtotal1+subtotal2
    
    escreval("O valor do produto 1 é:",subtotal1)
    escreval("O valor do produto 2 é:",subtotal2)
    escreval("O valor dessa compra total é:", total)




fimalgoritmo
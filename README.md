<h1 align="center">Implementação de uma versão simplificada do RSA</h1>

## Descrição do Projeto
<p>O objetivo desse repositório é implementar o algoritmo de criptografia RSA a partir do estudo de seus conceitos matemáticos. Não é o objetivo escrever um algoritmo performático ou mesmo para uso em si, mas sim aprender conceitos, principalmente com relação a aplicação matemática, durante a execução do projeto. </p>


Tabela de conteúdos
=================
<!--ts-->
   * [Calculando Inversos Multiplicativos Modulares](#Inverso)
     * [Pequeno Teorema de Fermat](#PFT)
     * [Algoritmo de Euclides Estendido](#xEuclides)    
   * [Exponenciação Binária](#Expbin)
   * [Função Totiente de Euler](#TotEuler)
   * [Como usar](#como-usar)
      * [Pre Requisitos](#pre-requisitos)
      * [Local files](#local-files)
      * [Remote files](#remote-files)
      * [Multiple files](#multiple-files)
      * [Combo](#combo)
   * [Tests](#testes)
   * [Tecnologias](#tecnologias)
<!--te-->


Algoritmo de Euclides
Propriedades
Propriedade 1 -gcd(a,0) = |a|
Propriedade 2 -gcd(a, b) = gcd(b % a, a)


Estendido

Bezout ax + by = gcd(a, b) 
Propriedade 2 - ax + by = gcd(b % a, a)  
gcd(b % a, a) = (b % a)x1 + ay1
ax + by = (b % a)x1 + ay1
b = a.q + r
13 = 6*2 + 1
13 = 6*(13//6) + 1
ax + by = (b % a)x1 + ay1
ax + by = (b - a*[b/a])x1 + ay1
ax + by = bx1 -a*[b/a]x1 + ay1
ax + by = ay1 -a*[b/a]x1 + bx1
ax + by = a(y1 -[b/a]x1) + bx1

x = y1 -[b/a]x1
y = x1

/////////////////

e * d (mod n) = 1

ex + ny = gcd(e, n)

ex + ny = 1 (mod n)
ex = 1 (mod n)

Calculando inverso multiplicativo  e * d = 1 mod(tot(n))

x inverso multiplicativo de e mod n
y inverso multiplicativo de d mod e

## Exponenciação Binária
<p name="Expbin"> Exponenciação Binária, também chamado de exponenciação por elevação ao quadrado, é uma técnica utilizada pra realizar a operação a^n utilizando O(log n) operações. </p>

## Função Totiente de Euler
<p name="TotEuler"> Apresentada por Leonhard Euler, a Função Totiente de Euler toma como entrada um número n, e devolve a quantidade de inteiros positivos menores que n que são coprimos com n, isto é não possuem nenhum divisor comum além do próprio 1. No âmbito de nosso porém iremos usufruir de uma propriedade que diz que para um n da forma n = p * q , sendo p e q ambos primos  </p>

## Calculando Inversos Multiplicativos Modulares
<p name="Inverso"> Nesse momento nos deparamos com a necessidade de calcular <strong> d </strong>, que é dado pela expressão e * d = gcd(e, d) (mod &phi(n)), dado que <strong> e </strong> e <strong> d </strong> são coprimos temos que e * d = 1 mod(tot(n)), ou seja, <em>d</em> é o inverso multiplicativo modular de  <em>e</em>. </p>
<p>Com o objetivo traçado temos duas opções de caminho, com o Pequeno Teorema de Fermat ou o Algoritmo de Euclides Estendido, a seguir iremos dar breves explicações das duas ferramentas, bem como elucidar suas vantagens, fraquezas e nossa escolha com base em tais circunstâncias. </p>


### Pequeno Teorema de Fermat
<p name="PFT"> O Pequeno Teorema de Fermat, conhecido também pela sua contração PFT, é de autoria do Príncipe dos Amadores, Pierre de Fermat, e como era de praxe em suas contribuições não foi demonstrado por ele, cabendo a Euler tal trabalho. No entanto, no nosso escopo não iremos nos preocupar com demonstrar o teorema, mas sim usá-lo a nosso favor.</p>
<p>Desse modo, o PFT enuncia que dado um p primo, se o gcd(a,p) = 1, então</p>
<p align="center" > a^(p-1) congruente 1 (mod p)</p>

### Algoritmo de Euclides Estendido
<p name="xEuclides">Euclides  de Alexandria foi um importante matemático grego, tem como sua principal contribuição o livro Os Elementos, é nessa obra que se tem o primeiro registro do hoje conhecido como Algoritmo de Euclides, no entanto é provável que o algoritmo não foi idealizado por Euclides, dado que sua obra compilava conhecimentos de resultados já conhecidos em sua época.  </p>
<p name= "xEuclides"> O algoritmo possui diversas aplicações como resolver equações diofantinas, construção de frações contínuas e seu uso para nós será para calcular inversos multiplicativos modulares. Para tal iremos passar por algumas propriedades, bem como demonstrar a origem de expressões que aparecem no código. </p>
<p align="center" > Propriedade 1 - gcd(0,a) = |a|</p>
<p align="center" > Propriedade 2 - gcd(a,b) = gcd(b%a,a) </p>


## Linear Diophantine Equation
<p> Estudar esse topico quando possivel. link https://cp-algorithms.com/algebra/linear-diophantine-equation.html </p>

int convertASCII(string msg)
{
    string conv =  "";
    string aux;
    int a;
    for(char c: msg)
    {
        a = int(c);
        aux = to_string(a);
        conv = conv + aux;
    }
    int res = stoi(conv);
}


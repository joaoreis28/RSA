<h1 align="center">Implementação de uma versão simplificada do RSA</h1>

## Descrição do Projeto
<p>O objetivo desse repositório é implementar o algoritmo de criptografia RSA a partir do estudo de seus conceitos matemáticos. Não é o objetivo escrever um algoritmo performático ou mesmo para uso em si, mas sim aprender conceitos durante a execução do projeto. </p>


Tabela de conteúdos
=================
<!--ts-->
   * [Calculando Inversos Multiplicativos Modulares](#Inverso)
     * [Pequeno Teorema de Fermat](#PFT)
     * [Algoritmo de Euclides Estendido](#xEuclides)    
   * [Pequeno Teorema de Fermat](#tabela-de-conteudo)
   * [Instalação](#instalacao)
   * [Como usar](#como-usar)
      * [Pre Requisitos](#pre-requisitos)
      * [Local files](#local-files)
      * [Remote files](#remote-files)
      * [Multiple files](#multiple-files)
      * [Combo](#combo)
   * [Tests](#testes)
   * [Tecnologias](#tecnologias)
<!--te-->




Pequeno Teorema de Fermat


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



## Calculando Inversos Multiplicativos Modulares
<p name="Inverso"> Nesse momento nos deparamos com a necessidade de calcular <strong> d </strong>, que é dado pela expressão e * d = gcd(e, d) (mod &phi(n)), dado que <strong> e </strong> e <strong> d </strong> são coprimos temos que e * d = 1 mod(tot(n)), ou seja, <em>d</em> é o inverso multiplicativo modular de  <em>e</em>. </p>

# Pequeno Teorema de Fermat
<p name="PFT"> </p>

Calculando inverso multiplicativo  e * d = 1 mod(tot(n))

x inverso multiplicativo de e mod n
y inverso multiplicativo de d mod e

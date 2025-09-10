# Exercícios de Lógica e Estruturas de Controle em C++

Bem-vindo(a) à sua jornada de programação em C++! Este repositório foi criado para ajudar você a praticar e fortalecer sua lógica de programação, com foco nas estruturas **condicionais (`if/else`)** e de **repetição (`while`)**.

O material está dividido em três módulos, com dificuldade crescente. Para tirar o máximo de proveito, recomendamos que você siga a ordem dos exercícios e tente resolvê-los por conta própria antes de procurar ajuda.

## Como começar

Siga estes passos para começar a resolver os exercícios e enviar suas soluções, tudo diretamente no navegador.

### Passo 1: Faça o Fork do Repositório

Primeiro, crie uma cópia deste repositório em sua própria conta do GitHub. Para isso, clique no botão **"Fork"** no canto superior direito desta página.

### Passo 2: Crie sua Pasta e Resolva os Exercícios

Agora você está em sua própria cópia do repositório. Siga as instruções abaixo para criar sua pasta e adicionar as soluções.

1.  Na página principal do seu repositório bifurcado (fork), clique no botão **"Add file"** e, em seguida, em **"Create new file"**.
2.  No campo de nome do arquivo, crie sua pasta e o arquivo ao mesmo tempo, usando o seguinte formato:
    ```
    seu_nome/questao_01_par_ou_impar.cpp
    ```
    (Substitua `seu_nome` e `questao_01...` pelos valores corretos.)
    Ao digitar `seu_nome/`, o GitHub criará a pasta para você.
3.  No editor de código abaixo, escreva a sua solução em C++ para o exercício.
4.  Quando terminar, role para baixo e, no campo "Commit new file", adicione uma breve descrição, como "Solução para a Questão 1".
5.  Clique no botão verde **"Commit new file"**.

Repita esse processo para cada exercício que você resolver.

### Passo 3: Crie um Pull Request (PR)

Depois de resolver um ou mais exercícios e enviar os arquivos para o seu repositório, você pode criar um **Pull Request** para que suas respostas sejam revisadas e, talvez, mescladas com o repositório original.

1.  Vá para a página principal do seu repositório bifurcado.
2.  Clique na aba **"Pull requests"**.
3.  Clique no botão verde **"New pull request"**.
4.  Certifique-se de que a seta aponta do seu repositório para o repositório original (`original:main` <- `seu_repositorio:main`).
5.  Clique em **"Create pull request"**, adicione uma breve descrição e confirme.

Pronto! Suas soluções serão enviadas para revisão.

---

### **Lista de Exercícios**

#### **Módulo 1: Fundamentos e Lógica Básica (`if/else`)**

* **Objetivo:** Praticar a entrada e saída de dados, variáveis e a estrutura condicional `if/else`.
* **Pré-requisitos:** Conhecimento básico de C++, incluindo `main()`, `iostream` (`cin` e `cout`).

1.  **Par ou Ímpar:** Crie um programa que leia um número inteiro e diga se ele é par ou ímpar.
2.  **Maior ou Menor de Idade:** Desenvolva um algoritmo que peça a idade do usuário. Se a idade for 18 ou mais, imprima "Você é maior de idade". Caso contrário, imprima "Você é menor de idade".
3.  **Maior de Dois Números:** Escreva um programa que receba dois números e imprima o maior deles. Se forem iguais, imprima "Os números são iguais".
4.  **Sistema de Login Simples:** Crie um algoritmo para um sistema de login. O programa deve pedir um nome de usuário e uma senha. Se o usuário for "admin" e a senha for "1234", imprima "Login bem-sucedido!". Em qualquer outro caso, imprima "Usuário ou senha incorretos".
5.  **Status de Aprovação:** Faça um programa que leia três notas de um aluno (de 0 a 10). Calcule a média. Se a média for maior ou igual a 7, imprima "Aprovado". Se for entre 5 e 6.9, imprima "Recuperação". Se for menor que 5, imprima "Reprovado".

#### **Módulo 2: Introdução a Repetição (`while`)**

* **Objetivo:** Introduzir a estrutura de repetição `while` e combiná-la com as condicionais.
* **Pré-requisitos:** Conclusão do Módulo 1.

6.  **Contagem Progressiva:** Escreva um programa que imprima todos os números de 1 a 100 usando um loop `while`.
7.  **Soma Cumulativa:** Desenvolva um algoritmo que calcule a soma de todos os números de 1 a 50 usando `while`.
8.  **Pares até 20:** Crie um programa que imprima os números pares de 1 a 20.
9.  **Leitura até Zero:** Faça um programa que peça ao usuário para digitar números. O programa deve parar quando o usuário digitar o número 0. Ao final, imprima a soma de todos os números digitados (excluindo o 0).
10. **Tabuada:** Desenvolva um algoritmo que leia um número e imprima a tabuada desse número, de 1 a 10, usando um loop `while`.
11. **Validação de Senha:** Crie um programa que leia uma senha. O programa deve continuar pedindo a senha até que a senha correta ("senha123") seja digitada. Ao acertar, imprima "Acesso concedido.".
12. **Maior Número da Sequência:** Faça um algoritmo que leia uma sequência de 5 números e imprima o maior número digitado.

#### **Módulo 3: Desafios Integrados (`if/else` + `while`)**

* **Objetivo:** Combinar condicionais (`if/else`) e loops (`while`) para resolver problemas mais complexos e dinâmicos.
* **Pré-requisitos:** Conclusão dos Módulos 1 e 2.

13. **Jogo de Adivinhação:** Crie um algoritmo para um jogo de adivinhação. O programa deve "escolher" um número secreto (por exemplo, 42). O usuário tenta adivinhar. O programa deve dar dicas ("Maior" ou "Menor") a cada tentativa, até que o usuário acerte.
14. **Contador de Vogais:** Escreva um programa que leia uma frase e conte quantas vogais ('a', 'e', 'i', 'o', 'u') existem nela.
15. **Fatorial de um Número:** Faça um programa que leia um número e calcule o seu fatorial (ex.: fatorial de 5 é 5\*4\*3\*2\*1).
16. **Cálculo de Média de N Números:** Desenvolva um algoritmo que receba uma quantidade indeterminada de números e calcule a média deles. O programa deve parar a leitura quando o usuário digitar um valor negativo. Ao final, imprima a média e a quantidade de números digitados.
17. **Divisores de um Número:** Crie um programa que leia um número inteiro e imprima todos os seus divisores.
18. **Soma dos Dígitos:** Faça um algoritmo que leia um número inteiro e calcule a soma de todos os seus dígitos.
19. **Número Palíndromo:** Escreva um programa que leia um número inteiro e verifique se ele é um palíndromo (ou seja, se lido da esquerda para a direita é igual a lido da direita para a esquerda).
20. **Sequência de Fibonacci:** Crie um programa que leia um número `n` e imprima a sequência de Fibonacci até o `n`-ésimo termo.

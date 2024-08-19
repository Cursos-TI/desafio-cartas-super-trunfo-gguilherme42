# CartasSuperTrunfo

O Super Trunfo é um jogo no qual os jogadores comparam as propriedades de suas cartas para determinar quem tem a mais forte. Cada carta representa um objeto com várias propriedades. Nesse desafio, o tema do jogo será Países, e as cartas serão divididas por estados, com cada estado tendo quatro cartas que representam diferentes cidades.

Cada país será dividido em oito estados, identificados pelas letras de A a H. Cada estado terá quatro cidades, numeradas de 1 a 4. A combinação da letra do estado e o número da cidade define o código da carta (por exemplo, A01, A02, B01, B02).

Cada carta de cidade apresentará as seguintes informações:

População: número de habitantes da cidade.
Área: área total da cidade em quilômetros quadrados (km²).
PIB: produto interno bruto da cidade, representando a soma de todos os bens e serviços produzidos no município.
Número de pontos turísticos: quantidade de pontos turísticos famosos na cidade

Você continuará a desenvolver o jogo Super Trunfo com o tema países. Agora, você implementará comparações entre as propriedades das cartas de cidades, utilizando operadores relacionais. Além disso, você usará modificadores de tipo para manipular grandes números com precisão. Cada carta terá um super poder que é a soma de todas as propriedades, e será considerado na comparação. É necessário ter cuidado na conversão de tipos, pois haverá a soma de diferentes tipos de dados.

## Funcionalidades do sistema
O sistema permitirá ao usuário comparar cartas de cidades com base nas propriedades inseridas manualmente e nas propriedades calculadas, como densidade populacional e PIB per capita. Utilizando operadores relacionais, o sistema determinará a carta vencedora.

## Propriedades das cartas
As cartas apresentarão as seguintes informações:

- Estado (char)
- Código da carta (char[])
- Nome da cidade (char[])
- População (unsigned long int)
- Área em km² (float)
- PIB (float)
- Número de pontos turísticos (int)
- Densidade populacional (float): calculada como população dividida pela área da cidade.
- PIB per capita (float): calculado como PIB total da cidade dividido pela população.
- Super Poder (float): soma de todas as propriedades, ajustada conforme a lógica do super poder.

## Comparação das cartas
### A parte da comparação acontecerá da seguinte maneira:

- O sistema permitirá ao usuário comparar duas cartas, exibindo todas as propriedades de cada uma.
- O sistema utilizará operadores relacionais para determinar a carta vencedora com base nas propriedades selecionadas.
- A propriedade de densidade populacional será considerada vencedora quando tiver o menor valor, enquanto as outras propriedades vencerão quando tiverem o maior valor.
- Cada carta terá um super poder que é a soma de todas as propriedades (população, área, PIB, PIB per capta e densidade populacional invertida para comparação e número de pontos turísticos).
- A saída da comparação será 1 ou 0, caso a relação seja verdadeira ou falsa. Se o resultado da comparação for 1, a carta 1 ganhou; - se o resultado for 0, a carta 2 ganhou.
- O sistema deve imprimir o resultado das comparações para cada propriedade.

### Importante
Não é para comparar variáveis do tipo char, apenas int e float. Verifique a mudança de tipos de variáveis nas propriedades, se necessário.

### Entrada e saída de dados
### Os requisitos para a entrada de dados são:
 - O sistema será operado inteiramente via terminal ou prompt de comando.
 - O usuário será solicitado a inserir os dados das cartas a serem comparadas de forma interativa.
 - Cada entrada será solicitada de maneira clara, indicando o dado específico que está sendo solicitado (por exemplo, "Digite o estado da primeira carta:", "Digite o código da segunda carta:").
### Os requisitos para a saída de dados são:
 - Após a comparação, o sistema exibirá os resultados de forma clara e organizada.
 -  Cada propriedade comparada será apresentada em uma linha separada com a descrição correspondente e o resultado da comparação.

## Requisitos funcionais e não funcionais
### Os requisitos funcionais são os mesmos do nível básico e intermediário, com o seguinte acréscimo:
- O sistema deve calcular e exibir corretamente os resultados das comparações.
### Os requisitos não funcionais são:
 - Usabilidade: a interface do usuário CLI deve ser simples e fácil de usar, mesmo para pessoas que não têm familiaridade com linhas de comando.
- Performance: o sistema deve executar as operações de entrada, cálculo e saída sem atrasos perceptíveis.
- Documentação: o código deve ser bem documentado, incluindo comentários sobre a função de cada parte do código e instruções de uso do sistema.
- Manutenibilidade: o código deve ser escrito de forma clara, empregando nomes de variáveis que permitam o fácil entendimento por um novo desenvolvedor.
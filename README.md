# Imposto_renda
Read this with Blame


Projeto desenvolvido para a disciplina de Programação. Consiste em um programa em C que calcula o imposto de renda de um lugar fictício com base nas informações abaixo.

------

Todo início de mês é hora da declaração do imposto de renda na República, uma ditadura absolutista do Leste Europeu. O ministro da economia determinou que cada cidadão deve informar mensalmente seus rendimentos no mês anterior (na moeda local, Unidade de Troca Financeira, ou UT₣), em ofício protocolado em 3 vias, com reconhecimento de firma em cartório. O cálculo do imposto a pagar no mês é baseado em tabelas que são reajustadas anualmente. A tabela para este ano é a seguinte:


Alíquota | Rendimentos (UT₣), Janeiro a Abril
0        |           Até 1.200,25
7,5%     |           De 1.200.26 até 2.300,50
15,0%    |           De 2.300,51 até 3.500,75
22,5%    |           De 3.500,76 até 4.000,00
27,5%    |           Acima de 4.000,00

Alíquota | Rendimentos (UT₣), Maio a Agosto
0        |           Até 1.500,00
7,5%     |           De 1.500,01 até 2.800,25
15,0%    |           De 2.800,26 até 3.500,50
22,5%    |           De 3.500,51 até 4.300,75
27,5%    |           Acima de 4.300,75

Alíquota | Rendimentos (UT₣), Setembro a Dezembro
0        |          Até 1.875,00
7,5%     |          De 1.875,01 até 3.400,50
15,0%    |          De 3.400,51 até 3.900,25
22,5%    |          De 3.900,26 até 4.600,25
27,5%    |          Acima de 4.600,25

O imposto é calculado de forma que a alíquota não incide sobre o total dos rendimentos, mas somente sobre a parcela que se encontra em determinada faixa. Desta forma, um cidadão com rendimento de UT₣ 1.200,25 em Janeiro está isento do pagamento do imposto, mas um cidadão com rendimento de UT₣ 1.201,25 não terá que pagar UT₣ 90,09 de imposto, mas somente UT₣ 0,08 (arredondando os valores para 2 casas decimais). A tabela abaixo apresenta outros exemplos:

Você deve implementar um programa que recebe como entrada, por meio da função scanf, um número no intervalo [1,12] indicando o mês e um valor indicando o rendimento mensal de um cidadão (nesta ordem!), e mostra na saída, por meio da função printf, um único número, correspondente ao valor do imposto devido, arredondado para 2 casas decimais. O programa não deve mostrar nenhuma outra mensagem, ou seja, tudo o que ele deve apresentar é o valor da saída. Obs.: Em uma situação real, os valores da tabela não estariam hard coded no código-fonte, e sim definidos em um banco de dados. Além disso, entradas e saídas não seriam feitas diretamente por meio de terminais em modo texto, os dados seriam transmitidos e armazenados em bancos de dados, possivelmente com apresentação sob demanda em alguma interface apropriada. E claro, cada dado fornecido precisaria ser
testado - o que acontece se alguém informar rendimento negativo, ou o mês 15? Por enquanto, abstraia estes detalhes!

Este problema poderia ter uma solução mais elegante com o uso de repetições e vetores, mas por ora você NÃO DEVE utilizar estes recursos!

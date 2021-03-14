# Imposto_renda

Projeto desenvolvido para a disciplina de Programação. Consiste em um programa em C que calcula o imposto de renda de um lugar fictício com base nas informações abaixo.

------

Todo início de mês é hora da declaração do imposto de renda na República, uma ditadura absolutista do Leste Europeu. O ministro da economia determinou que cada cidadão deve informar mensalmente seus rendimentos no mês anterior (na moeda local, Unidade de Troca Financeira, ou UT₣), em ofício protocolado em 3 vias, com reconhecimento de firma em cartório. O cálculo do imposto a pagar no mês é baseado em tabelas que são reajustadas anualmente. A tabela para este ano é a seguinte:

![image](https://user-images.githubusercontent.com/46321386/111055833-8d725180-8458-11eb-88b5-ad04d5036b62.png)



O imposto é calculado de forma que a alíquota não incide sobre o total dos rendimentos, mas somente sobre a parcela que se encontra em determinada faixa. Desta forma, um cidadão com rendimento de UT₣ 1.200,25 em Janeiro está isento do pagamento do imposto, mas um cidadão com rendimento de UT₣ 1.201,25 não terá que pagar UT₣ 90,09 de imposto, mas somente UT₣ 0,08 (arredondando os valores para 2 casas decimais). A tabela abaixo apresenta outros exemplos:

Você deve implementar um programa que recebe como entrada, por meio da função scanf, um número no intervalo [1,12] indicando o mês e um valor indicando o rendimento mensal de um cidadão (nesta ordem!), e mostra na saída, por meio da função printf, um único número, correspondente ao valor do imposto devido, arredondado para 2 casas decimais. O programa não deve mostrar nenhuma outra mensagem, ou seja, tudo o que ele deve apresentar é o valor da saída. Obs.: Em uma situação real, os valores da tabela não estariam hard coded no código-fonte, e sim definidos em um banco de dados. Além disso, entradas e saídas não seriam feitas diretamente por meio de terminais em modo texto, os dados seriam transmitidos e armazenados em bancos de dados, possivelmente com apresentação sob demanda em alguma interface apropriada. E claro, cada dado fornecido precisaria ser
testado - o que acontece se alguém informar rendimento negativo, ou o mês 15? Por enquanto, abstraia estes detalhes!

Este problema poderia ter uma solução mais elegante com o uso de repetições e vetores, mas por ora você NÃO DEVE utilizar estes recursos!

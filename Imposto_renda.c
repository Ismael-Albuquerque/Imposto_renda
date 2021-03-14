//Aluno Ismael da Silva Machado de Albuquerque
//Mtr 2295288
#include <stdio.h>

int main()
{
//definindo as variaveis de aliquota, faixa de renda, rendimento,imposto e mes
    int mes;
    float imposto, rendimento, aliq1, aliq2, aliq3, aliq4,aliq5, faixa1, faixa2, faixa3, faixa4;

//atribuindo os valores das aliquotas
    aliq1 = 0.00;
    aliq2 = 0.075;
    aliq3 = 0.15;
    aliq4 = 0.225;
    aliq5 = 0.275;

//ler e guardar os valores do mes e da renda

    printf("Digite o mes de 1 a 12:\n");
    scanf("%d", &mes);

    printf("Digite o valor da renda:\n");
    scanf("%f", &rendimento);

//separando os dados de acordo com o mes para fazer o calculo do imposto de janeiro a abril
    if ( mes >= 1 && mes <= 4 )
    {
        //faixa de renda para os meses de janeiro a abril
        faixa1 = 1200.25;
        faixa2 = 2300.50;
        faixa3 = 3500.75;
        faixa4 = 4000.00;

        //calculo do imposto para rendimeto menores ou igual ao valor da faixa 1
        if ( rendimento <= faixa1 )
        {
            imposto = rendimento * aliq1;
        }
        //calculo do imposto para a parcela do rendimento que ultrapassa a faixa 1
        else if ( rendimento <= faixa2 )
        {
            imposto = (rendimento - faixa1) * aliq2;
        }
        //calculo do imposto para a parcela do rendimento que esta na faixa 2 somado ao
        //imposto para a parcela do rendimento que ultrapassa a faixa 2
        else if ( rendimento <= faixa3 )
        {
            imposto = ((faixa2-faixa1 )* aliq2) + ((rendimento - faixa2) * aliq3);
        }
        //calculo do imposto para a parcela do rendimento que esta na faixa 2 somado ao
        //imposto para a parcela do rendimento esta na faixa 3 somado ao imposto para a
        //parcela do rendimento que ultrapassa a faixa 3
        else if ( rendimento <= faixa4)
        {
            imposto = ((faixa2-faixa1)* aliq2) + ((faixa3-faixa2)* aliq3) + ((rendimento-faixa3)*aliq4);
        }
        //calculo do imposto para a parcela do rendimento que esta na faixa 2 somado ao
        //imposto para a parcela do rendimento esta na faixa 3 somado ao imposto para a
        //parcela do rendimento que esta na faixa 4 somado ao imposto para a parcela do rendimento
        //que ultrapassa a faixa 4
        else
        {
            imposto = ((faixa2-faixa1)* aliq2) + ((faixa3-faixa2)* aliq3) + ((faixa4-faixa3)*aliq4) + ((rendimento - faixa4)*aliq5);
        }
        //imprime o valor do imposto a ser pago
        printf("%.2f", imposto);
    }

    //separando os dados de acordo com o mes para fazer o calculo do imposto de maio a agosto

    else if ( mes >= 5 && mes <= 8 )
    {
        //faixa de renda para os meses de maio a agosto
        faixa1 = 1500.00;
        faixa2 = 2800.25;
        faixa3 = 3500.50;
        faixa4 = 4300.75;

        //calculo do imposto para rendimeto menores ou igual ao valor da faixa 1
        if ( rendimento <= faixa1 )
        {
            imposto = rendimento * aliq1;
        }
        //calculo do imposto para a parcela do rendimento que ultrapassa a faixa 1
        else if ( rendimento <= faixa2 )
        {
            imposto = (rendimento - faixa1) * aliq2;
        }
        //calculo do imposto para a parcela do rendimento que esta na faixa 2 somado ao
        //imposto para a parcela do rendimento que ultrapassa a faixa 2
        else if ( rendimento <= faixa3 )
        {
            imposto = ((faixa2-faixa1 )* aliq2) + ((rendimento - faixa2) * aliq3);
        }
        //calculo do imposto para a parcela do rendimento que esta na faixa 2 somado ao
        //imposto para a parcela do rendimento esta na faixa 3 somado ao imposto para a
        //parcela do rendimento que ultrapassa a faixa 3
        else if ( rendimento <= faixa4)
        {
            imposto = ((faixa2-faixa1)* aliq2) + ((faixa3-faixa2)* aliq3) + ((rendimento-faixa3)*aliq4);
        }
        //calculo do imposto para a parcela do rendimento que esta na faixa 2 somado ao
        //imposto para a parcela do rendimento esta na faixa 3 somado ao imposto para a
        //parcela do rendimento que esta na faixa 4 somado ao imposto para a parcela do rendimento
        //que ultrapassa a faixa 4
        else
        {
            imposto = ((faixa2-faixa1)* aliq2) + ((faixa3-faixa2)* aliq3) + ((faixa4-faixa3)*aliq4) + ((rendimento - faixa4)*aliq5);
        }
        //imprime o valor do imposto a ser pago
        printf("%.2f", imposto);
    }

    //calculo dos meses de setembro a dezembro
    else
    {
        //faixa de renda para os meses de setembro a dezembro
        faixa1 = 1875.00;
        faixa2 = 3400.50;
        faixa3 = 3900.25;
        faixa4 = 4600.25;

        //calculo do imposto para rendimeto menores ou igual ao valor da faixa 1
        if ( rendimento <= faixa1 )
        {
            imposto = rendimento * aliq1;
        }
        //calculo do imposto para a parcela do rendimento que ultrapassa a faixa 1
        else if ( rendimento <= faixa2 )
        {
            imposto = (rendimento - faixa1) * aliq2;
        }
        //calculo do imposto para a parcela do rendimento que esta na faixa 2 somado ao
        //imposto para a parcela do rendimento que ultrapassa a faixa 2
        else if ( rendimento <= faixa3 )
        {
            imposto = ((faixa2-faixa1 )* aliq2) + ((rendimento - faixa2) * aliq3);
        }
        //calculo do imposto para a parcela do rendimento que esta na faixa 2 somado ao
        //imposto para a parcela do rendimento esta na faixa 3 somado ao imposto para a
        //parcela do rendimento que ultrapassa a faixa 3
        else if ( rendimento <= faixa4)
        {
            imposto = ((faixa2-faixa1)* aliq2) + ((faixa3-faixa2)* aliq3) + ((rendimento-faixa3)*aliq4);
        }
        //calculo do imposto para a parcela do rendimento que esta na faixa 2 somado ao
        //imposto para a parcela do rendimento esta na faixa 3 somado ao imposto para a
        //parcela do rendimento que esta na faixa 4 somado ao imposto para a parcela do rendimento
        //que ultrapassa a faixa 4
        else
        {
            imposto = ((faixa2-faixa1)* aliq2) + ((faixa3-faixa2)* aliq3) + ((faixa4-faixa3)*aliq4) + ((rendimento - faixa4)*aliq5);
        }
        //imprime o valor do imposto a ser pago
        printf("%.2f", imposto);
    }

    return 0;
}

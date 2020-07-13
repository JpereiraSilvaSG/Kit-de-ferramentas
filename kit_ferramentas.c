#include <stdio.h> 
#include <stdlib.h> 


/*
    Trabalho para a disciplina Tópicos especiais (SIN 494)

    Alunos: 
    Carlos Eduardo Máximo, João Pedro Pereira da Silva e Pedro Emanuel de Avelar Sousa de Almeida

    Matricula: 
     6962, 5199 e 6965 (respectivamente aos nomes)


    Nome do Programa:
    Kit de Ferramentas
*/

int main ()
{
    int op, op_area , cont, i, c1, c2, c3, aux = 0,  num, n; // Variavel para guardar as opçoes op, cont contador = i e aux = j auxiliar, c1 = contador1
    float lado, areaquadrado, areatriangulo, arearetangulo, base, altura;

    do{

        system (" cls || clear ");

        printf("========== { MENU - KIT DE FERRAMENTAS }==========");

        printf("\n\nInformar o numero de acordo com a ferramenta que deseja utilizar:\n\n");
        printf("(1) Verificar se o numero e primo\n");
        printf("(2) Calcula a area de uma figura\n");
        printf("(3) Mostrar o enesimo numero da sequencia Fibonacci\n");
        printf("(4) Calcular o fatorial de um numero\n");
        printf("(5) Calcula o valor de x elevado a y\n");
        printf("(6) Calcula a media aritimetica dos numeros digitiados\n");
        printf("(7) Calcula o maximo divisor comum entre dois numeros\n");
        printf("(8) Calculadora\n");
        printf("(9) Calcula a diferença entre duas datas em anos, meses\n");
        printf("(10) Converter um numero decimal inteiro para romano\n");
        printf("(11) Converta o tempo dado em segundos para horas, minutos e segundos\n");
        printf("(12) Para encerrar o programa!\n\n");
        scanf("%d", &op);

        getchar();

        system (" cls || clear ");

        if (op == 1){
            aux = 0;

            printf("\nDigite um valor: ");  
            scanf("%i", &num);

            getchar();

            system (" cls || clear ");
        
            for (cont = 1; cont <= num; cont++){ 

            if (num % cont == 0){ 
                aux++;
            }

        }

            if (aux == 2){
                printf("O valor digitado e primo!\n");
            }else{
                printf("O valor digitado nao e primo!\n");
            }

            sleep(3);

        }
        
        // Programa para calcular area da figura.

        else if (op == 2) {
            
            system(" cls || clear ");

            op_area = 0;

            printf("\nEscolha uma das figuras abaixo: ");
            printf("\n(1) Calcular a Area do Triangulo");
            printf("\n(2) Calcular a Area do Quadrado");
            printf("\n(3) Calcular a Area do Retangulo\n");
            scanf("%d", &op_area);// Variavel que guarda a opção que o usuario digitou. 

            getchar();

            system(" cls || clear ");

            if (op_area == 2) {
                printf("\nInforme o valor do lado do quadrado: ");
                scanf("%f", &lado);
            }
            else {
                printf("\nInforme a base da figura: ");
                scanf("%f", &base);

                printf("\nInfome a altura da figura: ");
                scanf("%f", &altura);
            }

            getchar();

            system(" cls || clear ");

            arearetangulo = base * altura; 
            areaquadrado =  lado * lado;
            areatriangulo = ( base * altura ) / 2;

            switch (op_area) {

                case 1:
                    printf("\nA area do Trinagulo calculada e: %0.2f", areatriangulo);
                    sleep(4);
                break;

                case 2:
                    printf("\nA area do Quadrado calculada e: %0.2f", areaquadrado);
                    sleep(4);
                break;

                case 3:
                    printf("\nA area do Retangulo calculada e: %0.2f", arearetangulo);
                    sleep(4);
                break;

                default:
                    printf("\nA opçao digitada e invalida");
                    sleep(4);
                break;

        }

            system(" cls || clear ");
    
        }

        else if (op == 3) {

            printf("Qual elemento da sequencia de Fibonacci voce deseja saber?\n\n");
            scanf("%i", &n);

            getchar();

            system(" cls || clear ");

            c1 = 0; // Atribuição do valor de c1 = 0
            c2 = 1;

            for (i = 1 ; i < n; i++ ) {
            
                c3 = c1 + c2;

                c1 = c2;
                c2 = c3;

            }

            printf("\n\nO enesimo elemento e: %i\n", c1);

            sleep(4);
        
        }

    }while (op != 12);

    system(" cls || clear ");

    printf("Programa criado por: \n");
    printf("\nCarlos Eduardo Maximo - (6962)");
    printf("\nPedro Emanuel de Avelar Sousa de Almeida (6965)");
    printf("\nJoao Pedro Pereira da Silva - (5199)");

    printf("\n\nAuxiliado tambem por: \n");
    printf("\nJoao Lucas Mayrinck D Oliveira;\n\n");

    printf("\n\nPressione \"Enter\" para finalizar o programa!\n");
        
    getchar();

    system(" cls || clear ");

    return 0;
}
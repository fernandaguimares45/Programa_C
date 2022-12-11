#include <stdio.h>
#define STOC_A 5
#define STOC_B 12
#define STOC_C 23
#define STOC_D 3


int main()
{

    float codA, codB, codC, CodD; //Codigo do Livro
    float presA= 53.00 , presB=35.80 , presC=98.50 , presD=40.00;  //Preco de cada livro
    int stqA=5, stqB=12, stqC=23, stqD=3; //Estoque dos livros e seu codigo
    char L1;
    int Q1;
    float VL; //Valor do livro, variavel 
    printf(" \nCod  Descricao Preco      (R$)                    \tEstoque"); //Tabela dos livros
    printf(" \nA    Lord of the Rings    \t%10.2f          \t%4d",presA,stqA);
    printf(" \nB    Harry Potter         \t%10.2f      \t%4d",presB,stqB);
    printf(" \nC    Dicionario Aurelio   \t%10.2f      \t%4d",presC,stqC);
    printf(" \nD    Cozinha Rita Lobo    \t%10.2f      \t%4d",presD,stqD);

    printf("\nQual livro voce deseja?: ");
    scanf(" %c",&L1);
    printf("Insira a quantidade de livros: ");
    scanf("%d",&Q1);
    switch(L1){
        case 'A':
            if(Q1<=stqA){
                VL=Q1*presA;
                stqA= STOC_A-Q1;
                break;
            }
            else printf("Sem item suficiente \n");
        case 'B':
            if(Q1<=stqB){
                VL=Q1*presB;
                stqA= STOC_B-Q1;
                break;
            }
            else printf("Sem item suficiente \n");
        case 'C':
            if(Q1<=stqC){
                VL=Q1*presC;
                stqA= STOC_C-Q1;
                break;
            }
            else printf("Sem item suficiente \n");
        case 'D':
            if(Q1<=stqD){
                VL=Q1*presD;
                stqA= STOC_D-Q1;
                break;
            }
            else printf("Sem item suficiente \n");
        
    } 
}

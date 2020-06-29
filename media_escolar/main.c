 #include <stdlib.h>
 #include <stdio.h>
 #include <locale.h>
 #include <string.h>

int main()
{
    float nota[4];
    char nomeAluno[50];
    float contador = 0;
    int i;
    float media;
    setlocale(LC_ALL, "Portuguese");
    printf("\t\t\t\t\t|||||POWERED BY FREDERICO DUARTE|||||\n\n");
    printf("\t\t\t\t----------Programa para calcular média escolar----------\n\n");
    printf("Por favor, digite o nome completo do aluno:\n");
    gets(nomeAluno);
            printf("\t\t-----ATENÇÃO-----\n");
        printf("--NOTAS QUEBRADAS FAVOR INSERIR COM VÍRGULA--\n");
        system("PAUSE");
    for(i=0;i<4;i++)
    {
        printf("Por favor digite a %d nota do aluno:\n", i+1);
        scanf("%f", &nota[i]);
        contador = contador + nota[i];
    }
    media = contador/4;
    if(media >= 6.0)
    {
        printf("Parabéns!!! || O aluno %s está APROVADO || Média: %.2f || BOAS FÉRIAS!!\n", nomeAluno, media);
    }
    else
    {
        printf("Sentimos muito!!! || O aluno %s esta REPROVADO!! || Média: %.2f\n", nomeAluno, media);
    }

return 0;
}

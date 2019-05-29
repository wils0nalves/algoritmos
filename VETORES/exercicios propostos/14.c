#include<stdio.h>
#include<stdlib.h>

main()

{
      char aluno[7][20];
      float nota1[7],nota2[7],media[7];
      int i,reprovado = 0,aprovado = 0;
      
      for (i = 1; i <= 3;i++)
      {
          printf("digite seu nome: ");
          scanf("%s",&aluno[i]);
          printf("digite sua primeira nota %s: ",aluno[i]);
          scanf("%f",&nota1[i]);
          printf("digite sua segunda nota %s: ",aluno[i]);
          scanf("%f",&nota2[i]);
          printf("\n");
      }
      
      printf("\n\n\t\ta media da turma sera: ");
      
      for (i = 1; i <= 3;i++)          media[7] = ((nota1[i]+nota2[i])/2);

      printf("%2.1f",media[7]);
      
       for (i = 1; i <= 3;i++) 
       {
           if(media[i] < 5)
           aprovado++;
       }
       
       for (i = 1; i <= 3;i++) 
       {
           if(media[i] >= 5)
           reprovado++;   
       }
       printf("\n\nsão %d alunos aprovados! ",aprovado);
       
       printf("\nsão %d alunos reprovados! ",reprovado);
      
      printf("\n\n\n\n\n\n");
      system("pause");
      }

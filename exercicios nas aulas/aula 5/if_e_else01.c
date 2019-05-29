#include<stdlib.h>
#include<stdio.h>

main()

{
      float n1,n2,media;
      
      printf("\n\t\t\t::::::Calculando a media:::::::\n\n");
      
      printf("\ndigite a nota 1 : ");
                     scanf("%f",&n1);
      
      printf("\ndigite a nota 2: ");
                     scanf("%f",&n2);
      
      media=(n1+n2)/2;
      
      if (media>7)
      
      {
                  printf("\naprovado com a media de %4.2f \n",media); 
                  
                  printf("\n\n\n\n");
                  }
      
                  else
                  if(media<7)
                  {
                             printf("\nreprovado com ");
                             printf("a media de %4.2f\n\n\n",media);
                             }
      
      printf("\n\n\n\n\n");
      
      system("pause");
      
            }

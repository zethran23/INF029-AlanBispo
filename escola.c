#include <stdio.h>

int main(void)
{
   int escolha;
	int sair = 0;

	
	while (!sair){

	printf("1 - Aluno\n");
	printf("2 - Professor\n");
	printf("3 - Disciplina\n");
	printf("0 - Sair\n");
	
	scanf("%d", &escolha);


	switch(escolha){
	    
	    case 0: {
	        sair = 1;
	        break;
	    }
	    case 1: {
	        
	        printf("Modulo aluno: \n");
	        int sairAluno = 0;
	        int escolhaAluno;
	        
	        while(!sairAluno){
	            
	            printf("1- Cadastrar Aluno \n");
	            printf("2- Listar Aluno \n");
	            printf("3- Atualizar Aluno \n");
	            printf("4- Excluir Aluno \n");
	            printf("0- Voltar");
	            
	            scanf("%d", &escolhaAluno);
	            
	            switch(escolhaAluno){
	                
	                case 0: {
	                    sairAluno = 1;
	                    break;
	                }
	                
	                case 1: {
	                    printf("Cadastro Aluno \n");
	                }
	                
	            }
	            
	        }
	        
	        
	        break;
	      }
	    
	  }
   }
}
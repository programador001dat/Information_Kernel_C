#include <stdio.h> //Biblioteca para entrada/saida com C. printf(), perror.
#include <sys/utsname.h> //Estrutura utsname e a função uname que retorna informações de OS e o Kernel.

int main(){ //Todo codigo C começa com a função main().

   struct utsname buffer; //Variavel struct guarde varios tipos de variaveis como(int, float, char, _Bool) dentro de buffer.

   // Se houver erro, retorna 1 para o erro. uname é responsavel por chamar as informações do OS e o Kernel.
   if (uname(&buffer) != 0) { //&Localizar a varivel buffer na memória RAM, Se o resultado for 1, retorne um erro.
      perror("Erro ao localizar.");
      return 1;
   }

   // Se não houver erros, acesse os valores dentro da variavel buffer.
   printf("Sistema Operacional:\t\t%s\n", buffer.sysname);       //Nome do OS.
   printf("Maquina na Rede:\t\t%s\n", buffer.nodename);          //Nome da máquina na REDE.
   printf("Versão do Kernel:\t\t%s\n", buffer.release);          //Versão do Kernel.
   printf("Versão Completa do Kernel:\t%s\n", buffer.version);   //Versão completa do Kernel.
   printf("Arquitetura da Maquina:\t\t%s\n", buffer.machine);    //Arquitetura da maquina.

   return 0; //Assim que o codigo terminar, finalize com 0 significa codigo com sucesso.
}


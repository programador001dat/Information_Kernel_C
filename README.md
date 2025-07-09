# Information_Kernel_C
#
# Este codigo escrito em linguagem C. Informa sobre o Kernel do seu sistema.
#
# Sobre Kernel?
# O que é Kernel?, Kernel é um software que gerencia recursos do hardware.
# Um programa antes de chegar no hardware, ele passa por etapas.
IV - Usuario

III - Shell

II - Kernel

I - Hardware

# Um Kernel pode gerenciar inicialização no bootloader, gerenciar arquivos.
# Sim todo OS possui um Kernel.
# O Kernel se localiza na memória RAM assim, que a máquina é ligado ele começa sua tarefa.
#
# Sobre o Codigo.
# Importando a bibliotecas stdio.h para utilizar printf() e perror. para saidas e entradas com C.
# Importando a biblioteca sys/utsname.h utilizar uname().
#
# Todo codigo C começa com uma função main()
#
# struct utfname buffer; 
# (struct)estrutura que armazena varias variaveis(int, char, float, _Bool) para armazenar dentro de buffer.
# chama as informações dentro de uname e localiza e guarda dentro da variavel buffer.   # Sinal de & localizar.
#
# sysname = nome do OS.
# nodename = nome da maquina na REDE.
# release = versao do kernel.
# version = versão completa do kernel.
# machine = arquitetura da maquina.

# cuidado ao executar codigos C a nivel de Kernel, podem travar o sistema.
# pratique em sistema virtuais.

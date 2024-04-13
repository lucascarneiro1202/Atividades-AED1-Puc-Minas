/*
Exemplo0106 - v0.0. - 27 / 02 / 2024
Author: Lucas Carneiro Nassau Malta
Para compilar em terminal (janela de comandos):
Linux : gcc -o exemplo0106 exemplo0106.c
Windows: gcc -o exemplo0106 exemplo0106.c
Para executar em terminal (janela de comandos):
Linux : ./exemplo0106
Windows: exemplo0106
*/

// dependencias
#include <stdio.h> // para as entradas e saidas
#include <stdlib.h> // para outras funcoes de uso geral
#include <stdbool.h> // para valores logicos
#include <string.h> // para cadeia de caracteres

// Method_01

void method_01 ( void )
{
    // definir dado
    int x = 0;  // definir variável com valor inicial
    // identificar
    printf ( "%s\n", "\n\nMethod_01" );
    // mostrar valor inicial
    printf ( "\n%s%d\n", "x = ", x );
    printf ( "&%s%p\n", "x = ", &x );
    // ler do teclado
    printf( "%s", "Entrar com um valor inteiro: " );
    scanf ( "%d", &x );
    getchar();
    // mostrar valor lido
    printf ( "%s%i\n", "x = ", x );
    // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar ( );
} // end method_01 ( )

// Method_02

void method_02 ( void )
{
    // definir dado
    double x = 0.0;
    // identificar
    printf ( "\n\n%s\n", "Method_02 - Programa - v0.0" );
    // mostrar valor inicial
    printf ( "\n%s%lf\n", "x = ", x );
    // ler do teclado
    printf ( "%s", "Entrar com um valor real: " );
    scanf ( "%lf", &x);
    // mostrar o valor lido
    printf ( "\n\n%s%lf\n", "x = ", x );
    // encerrar
    printf ( "\n\n%s\n", "Apertar ENTER para continuar." );
    getchar ();
} // end method_02 ()

// Method_03.

void method_03 ( void )
{
    // definir dado
    char x = 'A'; 
    // identificar
    printf ( "\n%s\n", "Method_03 - Programa - v0.0" );
    // mostrar valor inicial
    printf ( "\n%s%c\n", "x = ", x );
    // ler do teclado
    printf ( "%s", "Entrar com um caractere: " );
    scanf ( "%c", &x );
    getchar ( ); 
    // mostrar valor lido
    printf ( "%s%c\n", "x = ", x );
    // encerrar
    printf ( "\n\n%s\n", "Apertar ENTER para continuar." );
    getchar( ); 
} // end method_03 ()

// Method_04.

void method_04 ( void )
{
    // definir dado
    bool x = false; // definir variavel com valor inicial
    int y = 0; // definir variavel auxiliar
    // identificar
    printf ( "\n%s\n", "EXEMPLO0104 - Programa - v0.0" );
    // mostrar valor inicial
    printf ( "\n%s%d\n", "x = ", x );
    // ler do teclado
    printf ( "%s", "Entrar com um valor logico: " );
    scanf ( "%d", &y );
    getchar ( ); // OBS.: Limpar a entrada de dados
    // garantir valor logico no intervalo [0:1]
    x = (y!=0);
    // mostrar valor lido
    printf ( "%s%d\n", "x = ", x );
    // encerrar
    printf ( "\n\n%s\n", "Apertar ENTER para continuar." );
    getchar( ); 
} // end method_04 ( )

/*
Funcao principal.
@return codigo de encerramento
@param argc - quantidade de parametros na linha de comandos
@param argv - arranjo com o grupo de parametros na linha de comandos
*/

// Method_05.

void method_05 ( void )
{
    // definir dado
    char x [80] = "abc"; // definir variavel com tamanho e valor inicial
    char *px = &x[0]; // definir alternativa para acesso via endereco
    // identificar
    printf ( "\n%s\n", "Method_05 - Programa - v0.0" );
    // mostrar valor inicial
    printf ( "\n%s%s\n", "x = ", x );
    // ler do teclado
    printf ( "%s", "Entrar com uma cadeia de caracteres: " );
    scanf ( "%s", x );
    getchar ( ); 
    // mostrar valor lido
    printf ( "%s%s\n", "x = ", x );
    // ler do teclado (forma alternativa para acesso via endereco)
    printf ( "%s", "Entrar com outra cadeia de caracteres: " );
    scanf ( "%s", px );
    getchar ( ); // OBS.: Limpar a entrada de dados
    // mostrar valor lido (forma alternativa para acesso via endereco)
    printf ( "%s%s\n", "x = ", px );
    // encerrar
    printf ( "\n\n%s\n", "Apertar ENTER para continuar." );
    getchar( ); // aguardar por ENTER
} // end method_05 ( )

// Method_06.

void method_06 ( void )
{
    // definir dados
    int x = 0; // definir variavel com valor inicial
    int y = 0; // definir variavel com valor inicial
    int z = 0; // definir variavel com valor inicial
    int *py = &y; // definir acesso a y via endereco
    // identificar
    printf ( "\n%s\n", "Method_06 - Programa - v0.0" );
    // mostrar valores iniciais
    printf ( "%s%d\n", "x = ", x );
    printf ( "%s%i\n" , "y = ", y );
    // ler do teclado
    printf ( "%s", "Entrar com um valor inteiro: " );
    scanf ( "%d", &x );
    getchar ( ); 
    printf ( "%s", "Entrar com outro valor inteiro: " );
    scanf ( "%i", py );
    getchar ( ); 
    // operar valores
    z = x * y; 
    // mostrar valor resultante
    printf ( "%s(%i)*(%i) = (%d)\n", "z = ", x, y, z );
    // encerrar
    printf ( "\n\n%s\n", "Apertar ENTER para continuar." );
    getchar( ); 
} // end method_06 ( )

int main ( int argc, char* argv [ ] )
{
    // definir dado
    int opcao = 0;
    // identificar
    printf ( "%s\n", "Exemplo0106 - Programa = v0.0" );
    printf ( "%s\n", "Autor: Lucas Carneiro Nassau Malta" );
    printf ( "\n" ); // mudar de linha
    // acoes
    // repetir
    do
    {
        // para mostrar opcoes
        printf ( "\n%s\n", "Opcoes:" );
        printf ( "\n%s" , "0 - Terminar" );
        printf ( "\n%s" , "1 - Method_01" );
        printf ( "\n%s" , "2- Method_02" );
        printf ( "\n%s" , "3- Method_03" );
        printf ( "\n%s" , "4- Method_04" );
        printf ( "\n%s" , "5- Method_05" );
        printf ( "\n%s" , "6- Method_06" );
        printf ( "\n" );
        // ler a opcao do teclado
        printf ( "\n%s", "Opcao = " );
        scanf ( "%d", &opcao );
        getchar( ); // para limpar a entrada de dados
        // para mostrar a opcao lida
        printf ( "\n%s%d", "Opcao = ", opcao );
        // escolher acao dependente da opcao
        switch ( opcao )
        {
            case 0: // nao fazer nada
            break;
            case 1: // executar method_01
            method_01 ( );
            break;
            case 2: // executar method_02
            method_02 ( );
            break;
            case 3: // executar method_03
            method_03 ( );
            break;
            case 4: // executar method_04
            method_04 ( );
            case 5: // executar method_05
            method_05 ( );
            break;
            case 6: // executar method_06
            method_06 ( );
            break;
            default: // comportamento padrao
            printf ( "\n%s\n", "ERRO: Opcao invalida." );
            break;
        } // end switch
    }
    while ( opcao != 0 );
    // encerrar
    printf ( "\n\n%s", "Apertar ENTER para terminar." );
    getchar( ); // aguardar por ENTER
    return ( 0 ); // voltar ao SO (sem erros)
} // end main ( )

/*
---------------------------------------------- documentacao complementar
---------------------------------------------- notas / observacoes / comentarios
---------------------------------------------- previsao de testes
---------------------------------------------- historico
Versao Data Modificacao
0.1 27/02 esboco
0.2 27/02 mudanca de versao
---------------------------------------------- testes
Versao Teste
0.1 01. ( OK ) identificacao de programa
leitura e exibicao de inteiro
*/

/*
1 - Method_01
2- Method_02
3- Method_03
4- Method_04
5- Method_05
6- Method_06

Opcao = 6

Opcao = 6
Method_06 - Programa - v0.0
x = 0
y = 0
Entrar com um valor inteiro: 5
Entrar com outro valor inteiro: 45
z = (5)*(45) = (225)


Apertar ENTER para continuar.


Opcoes:

0 - Terminar
1 - Method_01
2- Method_02
3- Method_03
4- Method_04
5- Method_05
6- Method_06

Opcao = 
0

Opcao = 0

Apertar ENTER para terminar.
*/
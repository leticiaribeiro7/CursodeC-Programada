#include <stdio.h>
#include <stdlib.h>
#define MAX 100

 struct feira{
        char cursos[MAX];
        char modo[MAX];
        char titulo_propostas[MAX];
        char proponentes[MAX];
        int horario[MAX];
        int data[MAX];
        int aluno_prof[MAX];
    };

    struct feira f[MAX];

void cadastro_cursos();


int main(){
    cadastro_cursos();
}



void cadastro_cursos(){

    int qtd_cursos, i, j, k, qtd_proponentes, qtd_propostas[MAX];
    printf("Quantos cursos participarao da Feira de Graduacao?: ");
    scanf("%d", &qtd_cursos);

    for(i=1; i<=qtd_cursos; i++){
        printf("Digite o %d curso: ", i);
        scanf("%s", &f[i].cursos);
        printf("Curso %s quantas propostas vai oferecer?: ", f[i].cursos);
        scanf("%d", &qtd_propostas[i]);

            for(j=1; j<=qtd_propostas[i]; j++){
                printf("Curso %s digite sua %d proposta: ", f[i].cursos, j);
                scanf("%s", &f[j].titulo_propostas);
                printf("Modo de Apresentação, digite o numero correspondente:");
                printf("[1] Oral\n[2] Oficina\n[3]Poster\n[4]Laboratorio: ");
                scanf("%d", &f[j].modo);
                printf("Data da %s: [23]\n[24]: ", f[j].titulo_propostas);
                scanf("%d", &f[j].data);
                printf("Horario inicio da %s: ", f[j].titulo_propostas);
                scanf("%d", &f[j].horario);
                printf("Quantos proponentes para apresentar %s?: ", f[j].titulo_propostas);
                scanf("%d", &qtd_proponentes);
                for(k=1; k<=qtd_proponentes; k++){
                    printf("Nome do %d proponente: ", k);
                    scanf("%s", &f[k].proponentes);
                    printf("[1] Aluno\n[2] Professor: ");
                    scanf("%d", &f[k].aluno_prof);
                }
            }
    }
                  
    }
#include <stdio.h>

 struct feira{
        char cursos[25]; char titulo[60]; char modalidade[13];
        char responsavel[10];
        int data, horario;
    };

main(){
    int qtd_cursos, i;
    printf("Quantos cursos participarão da Feira de Graduação?");
    scanf("%d", &qtd_cursos);

    struct feira f[qtd_cursos];

    for(i=0; i<qtd_cursos; i++){
        printf("Digite o iº curso participante: ");
        scanf("%s", &f[i].cursos);
    }

}
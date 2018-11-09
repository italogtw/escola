#ifndef CURSO_H
#define CURSO_H
typedef struct {


}Curso;
void ordenaCursosInsertionsort(CrudCurso *c){
    int aux, i, j;
    for(i=0;i<c->qtdAtual -1;i++){
        for(j=i+1;j<c->qdtAtual;j++){
            if(strcmp(c->cursos[j].nome,c->cursos[i])<0){
                aux=c->cursos[j].nome;
                c->cursos[j].nome=c->cursos[i];
                c->cursos[i]=aux;
            }
        }
    }
}

#endif // CURSO_H

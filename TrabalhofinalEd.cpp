 #include <iostream>
 #include <stdio.h>
 #include <string>
 #include <stdlib.h>

 #define TAM 16
 using namespace std;

 void imprime(float vetor[TAM]){
     int cont;
     for(cont =0; cont<TAM; cont++){
         cout<< vetor[cont] << "-";
     }
 }
 void push_pilha(float pilha[TAM], float x, int *top){
     if (*top == TAM-1){
         cout<<"Pilha está Cheia\nFinalizando programa\n";
         _Exit(0);

     }
     else{
         cout<<"Digite um valor para inserir na pilha\n";
         cin>>x;

     *top =*top + 1;
     pilha[*top] = x;

     }
    
    

 }
 void pilha_pop(float pilha[TAM],int *top){
     if(*top == -1 ){
         cout<<"Pilha ja esta vazia\nFinalizando programa\n";
         _Exit(0);
     }
     else{
         cout << "Valor removido:"<< pilha[*top];
         pilha[*top] = NULL;
         *top = *top -1;
     }


 }
 void add(float pilha[TAM], int *top){
     float a,b,soma;
     if (*top == 0 || *top == -1){
        
         cout<<"Inserir pelo menos 2 numeros\nFinalizando programa\n";
         _Exit(0);
        
     }
     else{
         a = pilha[*top];
         pilha[*top] = NULL;
         *top = *top -1;  
         b = pilha[*top];
         pilha[*top] = NULL;
         soma = b+a;
         pilha[*top] = soma;
        

     }
 }
 void sub(float pilha[TAM], int *top){

 float a,b,subtracao;
     if(*top == 0 || *top == -1){
         cout<<"\nIincerir pelo menos 2 numeros\nFinalizando programa\n";
         _Exit(0);
     }
     else{
         a = pilha[*top];
         pilha[*top] = NULL;
         *top = *top -1;
         b = pilha[*top];
         pilha[*top] = NULL;
         subtracao = b - a;
         pilha[*top] = subtracao;
         imprime(pilha);

     }
 }
 void mul(float pilha[TAM], int *top){
    
     float a,b,multiplica;
     if(*top == 0 || *top == -1){
         cout<<"Inserir pelo menos 2 numeros\n Finalizando programa\n";
         imprime(pilha);
         _Exit(0);

     }
     else{
         a = pilha[*top];
         pilha[*top] = NULL;
         *top = *top -1;  
         b = pilha[*top];
         pilha[*top] = NULL;
         multiplica = b*a;
         pilha[*top] = multiplica;
         imprime(pilha);


     }

 }
 void div(float pilha[TAM], int *top){
    
     string n;
     float a,b,divide;
     if(*top == 0 || *top == -1){
         cout<<"Inserir pelo menos 2 numeros\nFinalizando programa\n";
         imprime(pilha);
         _Exit(0);
     }
     else{
         a = pilha[*top];
         pilha[*top] = NULL;
         *top = *top -1;  
         b = pilha[*top];
         pilha[*top] = NULL;
         divide = b/a;
         pilha[*top] = divide;
         imprime(pilha);
         if (b == 0)
         {
             cout<<"DIVISAO POR ZERO\n";
             cout<<"Programa encerrado\n";
             _Exit(0);
         }
        


     }

 }
 void drop(float pilha[TAM], int *top){

     if (*top == -1){
         cout<<"Nao ha valores para retirar\nFinalizando programa\n";
         _Exit(0);
     } 
     else{
         pilha[*top] = NULL;
     *top = *top -1;
     imprime(pilha);}

 }
 void dup(float pilha[TAM], int *top){

     float a;
     if(*top == -1){
         cout<<"Nao tem valores para duplicar\n";
         _Exit(0);

     }
     else{

         if(*top == 15){
             cout<<"Pilha cheia para duplicar o valor\n";
             _Exit(0);
         }
         a = pilha[*top];
         *top =*top+1;
         pilha[*top] = a;
         imprime(pilha);
     }
 }
 void swap(float pilha[TAM], int *top){
    
     float a , b;
     if(*top <= 0){
         cout<< "Nao ha valores suficiente para ocorrer a troca\nFinalizando programa\n";
         _Exit(0);
     }
     else{
         a = pilha[*top];
         *top = *top -1;
         b = pilha[*top];
         pilha[*top] = a;
         *top = *top + 1;
         pilha[*top] = b;
         imprime(pilha);
        
     }
 }



 int main(){

     int top=-1;
     float pilha[TAM] = {0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0},x;
     string n;
    

     cout<<"Digite algum dos seguintes comandos:\nINPUT\nPRINT\nADD\nSUB\nMUL\nDIV\nSWAP\nDROP\nDUP\nSTOP\n";
     cin>>n;

    
 while (n!="STOP")
 {

     if (n == "INPUT"){
    
         push_pilha(pilha,x,&top);
         imprime(pilha);

 }
     if (n == "PRINT"){
     pilha_pop(pilha,&top);
     cout<<"\nPilha atual:\n";
     imprime(pilha);
 }

     if (n == "ADD"){
     add(pilha,&top);
     imprime(pilha);
    
 }

     if (n == "SUB"){
         sub(pilha,&top);
 }

     if (n == "MUL"){
     mul(pilha,&top);
 }

     if (n == "DIV"){
     div(pilha,&top);

 }
     if (n == "SWAP"){
         swap(pilha,&top);
 }
     if (n == "DROP"){
         drop(pilha,&top);

 }
     if (n == "DUP"){
         dup(pilha,&top);
 }
 cout<<"\nproximo comando:\n";
 cin>>n;
 }

 cout<<"ENCERRANDO";
         return 0;
                                                                                                                        
 }

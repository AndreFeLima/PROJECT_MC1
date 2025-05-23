// FUNÇÃO PISO
#include "funcoes.h"
int floor(float A) {
    int number = 0; 
    if (A>0) {
        while (A>=1) {
            A--;
            number ++;
        }
        return number;}
    else {
        while (A<0) {
            A++;
            number--;
        }
        return number;}
    return number;}

// FUNÇÃO TETO

    int ceil (float B) {
        int number=0; 
        if (B>0) {
            while (B>0) {
                B--;
                number++;
}            return number;}
        else{
            while (B<=-1) {
                B++;
                number--;
}            return number;}
        return number;
    }

// FUNÇÃO DIV

int division(int A, int B) { // B DIVIDIDO POR A
    int quotient = 0;

    if ((A>0 && B>0)||(A<0 && B<0)) { // SE AMBOS TIVEREM O MESMO SINAL, O QUOCIENTE SERÁ POSITIVO E TERÁ QUE SUBTRAIR A DE B Q VEZES;
        while (A<=B) {
            B-=A;
            quotient++;}
        return quotient;}

    if ((A<0 && B>0)) { // SE A FOR NEGATIVO E B POSITIVO, O RESULTADO SERÁ NEGATIVO, E SÓ IRÁ SE REPETIR A SOMA DE A SE O MÓDULO DE A FOR MENOR QUE B;
        while (B>0 && (-A < B)) {
            B += A;
            quotient --;
        } return quotient;}

    if ((A>0 && B<0)) { // SE A FOR POSITIVO E B FOR NEGATIVO, REPETE-SE POR ENQUANTO QUE B FOR MENOR QUE 0; 
        while (B<0 and B!=0) {
            B+=A;
            quotient --;
        }return quotient;}
    return 0;
}
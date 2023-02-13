/*
49. Faça um programa para leia o horario (hora, minuto e segundo) de inicio e a duração, em segundos, 
de uma experiencia biológica. O programa deve resultar com o novo horário (hora, minuto e segundo) do termino da mesma.
*/

#include <stdio.h>

int main()
{
    //Variáveis
    int hi = 15, mi = 30, si = 15; //Onde hi = hora inicial, mi = minuto inicial e si = segundo inicial.
    printf("A hora inicial é: %d:%d:%d\n", hi, mi, si);
    
    int duracao = 10800;
    printf("A duração da experiência em segundos é: %d\n", duracao);

    int horas, minutos, segundos;
    
    int hf, mf, sf; //Onde hf = hora final, mf = minuto final e sf = segundo final.

    //Condições
    horas = duracao / 3600;
    minutos = (duracao -(horas * 3600))/60;
    segundos = duracao - (horas * 3600) - (minutos * 60);

    hf = hi + horas;
    mf = mi + minutos;
    sf = si + segundos;

    //Resultado
    printf("A experiência terminará às: %d:%d:%d\n", hf, mf, sf);
    return 0;
}


//
//  main.c
//  Cinema-Simples
//
//  Created by Danilo Mative on 25/09/2018.
//  Copyright © 2018 Danilo Mative. All rights reserved.
//

#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int trimestres = 8;
    
    int total_filmes = 0;
    int total_parcerias = 0;
    
    srand(time(NULL));
    
    for(int x = 1; x <= trimestres; x++) {
        
        int valor = rand() % 100;
        int filmes = 0;
        
        if(x % 4 == 1) {
            
            if(valor > 25 && valor <= 70) {
                filmes += 1;
            }
            
            else if(valor > 70 && valor <= 95) {
                filmes += 2;
            }
            
            else if(valor > 95) {
                filmes += 3;
            }
        }
        
        else if(x % 4 == 2) {
            
            if(valor > 5 && valor <= 40) {
                filmes += 1;
            }
            
            else if(valor > 40 && valor <= 85) {
                filmes += 2;
            }
            
            else if(valor > 85) {
                filmes += 3;
            }
        }
        
        else if(x % 4 == 3) {
            
            if(valor > 40 && valor <= 90) {
                filmes += 1;
            }
            
            else if(valor > 90 && valor <= 99) {
                filmes += 2;
            }
            
            else if(valor > 99) {
                filmes += 3;
            }
        }
        else if(x % 4 == 0) {
            
            if(valor > 10 && valor <= 60) {
                filmes += 1;
            }
            
            else if(valor > 60 && valor <= 90) {
                filmes += 2;
            }
            
            else if(valor > 90) {
                filmes += 3;
            }
        }
        
        for(int y = 0; y < filmes; y++) {
            
            valor = rand() % 100;
            
            if(valor >= 40) {
                total_parcerias++;
            }
        }
        
        total_filmes += filmes;
    }
    
    
    printf("Total de filmes blockbusters em %d trimestres: %d. Parcerias: %d\n", trimestres, total_filmes, total_parcerias);
    return 0;
}

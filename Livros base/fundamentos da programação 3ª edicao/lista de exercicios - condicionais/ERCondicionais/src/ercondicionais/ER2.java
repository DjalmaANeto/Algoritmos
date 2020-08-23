package ercondicionais;
import java.util.*;
public class ER2 {
    public float nota1, nota2, nota3, media, notaExame;
    Scanner input = new Scanner(System.in);
    public void er2(){
        System.out.println("Escreva a nota 1: ");
        nota1 = input.nextFloat();
        System.out.println("Escreva a nota 2: ");
        nota2 = input.nextFloat();
        System.out.println("Escreva a nota 3: ");
        nota3 = input.nextFloat();
        
        media = (nota1 + nota2 + nota3) / 3;
        
        if(media >= 0 && media < 3){
            System.out.println("Reprovado");
        }
        if(media >= 3 && media < 7){
            System.out.println("Exame");
            notaExame = 12 - media;
            System.out.print("Deve tirar a nota " + notaExame+ " para ser aprovado");
        }
        if(media >= 7 && media <= 10){
            System.out.println("Aprovado");
        }
    }
    
}

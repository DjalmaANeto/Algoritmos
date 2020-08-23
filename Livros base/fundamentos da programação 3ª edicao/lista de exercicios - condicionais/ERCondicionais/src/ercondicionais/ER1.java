package ercondicionais;
import java.util.*;

public class ER1 {
    public int trabalho, provaSem, exameFinal, media;
    Scanner input = new Scanner(System.in);

    public int getTrabalho() {
        return trabalho;
    }

    public void setTrabalho(int trabalho) {
        this.trabalho = trabalho;
    }

    public int getProvaSem() {
        return provaSem;
    }

    public void setProvaSem(int provaSem) {
        this.provaSem = provaSem;
    }

    public int getExameFinal() {
        return exameFinal;
    }

    public void setExameFinal(int exameFinal) {
        this.exameFinal = exameFinal;
    }
    
    public void Notas(){
        System.out.println("Escreva a nota do trabalho: ");
        trabalho = input.nextInt();
        System.out.println("Escreva  a nota da prova: ");
        provaSem = input.nextInt();
        System.out.println("Escreva a nota do exame final: ");
        exameFinal = input.nextInt();
        media = (trabalho * 2 + provaSem * 3 + exameFinal * 5) / 10;
        
        if(media >= 8 && media <=10){
            System.out.println("media A");
        }
        if(media >= 7 && media <=8){
            System.out.println("media B");
        }
        if(media >= 6 && media <=7){
            System.out.println("media C");
        }
        if(media >= 5 && media <= 6){
            System.out.println("media D");
        }
        if(media >= 0 && media <=5){
            System.out.println("media E");
        }
    }
}

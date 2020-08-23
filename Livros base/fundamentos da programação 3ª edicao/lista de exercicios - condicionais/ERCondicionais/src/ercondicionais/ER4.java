package ercondicionais;
import java.util.*;

public class ER4 {
    public int n1, n2, n3;
    Scanner input = new Scanner(System.in);
    public void er4(){
        System.out.println("Escreva o primeiro numero: ");
        n1 = input.nextInt();
        System.out.println("Escreva o segundo numero: ");
        n2 = input.nextInt();
        System.out.println("Escreva o terceiro numero: ");
        n3 = input.nextInt();
        if(n1<n2 && n1<n3){
            if(n2<n3){
                System.out.println("A ordem é: " + n1 + " " + n2 + " " + n3);
            }else {
                System.out.println("A ordem é: " + n1 + " " + n3 + " " + n2);
            }
        }
        if(n2<n1 && n2<n3){
            if(n1<n3){
                System.out.println("A ordem é: " + n2 + " " + n1 + " " + n3);
            }else {
                System.out.println("A ordem é: " + n2 + " " + n3 + " " + n1);
            }
        }
        if(n3<n1 && n3<n2){
            if(n2<n1){
                System.out.println("A ordem é: " + n3 + " " + n2 + " " + n1);
            }else {
                System.out.println("A ordem é: " + n3 + " " + n1 + " " + n2);
            }
        }
        
    }
}

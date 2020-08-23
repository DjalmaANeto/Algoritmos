package ercondicionais;
import java.util.*;

public class ERCondicionais {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = 0; 
        System.out.println("Escreva a opção:");
        System.out.println("Exercício - 1");
        System.out.println("Exercício - 2");
        System.out.println("Exercício - 4");
        n = input.nextInt();
        
        switch(n){
            case 1:
                ER1 er1 = new ER1();
                er1.Notas();
                break;
            case 2:
                ER2 er2 = new ER2();
                er2.er2();
                break;
            case 4: 
                ER4 er4 = new ER4();
                er4.er4();
                break;
            default: 
                System.out.println("Opção invalida.");
                
        }
        
    }
    
}

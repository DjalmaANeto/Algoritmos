package ERs_condicionais;
/**
 * @author Djalma
 */
import java.util.*;

public class ER_s {

    public static void main(String[] args) {
        Scanner input;
        input = new Scanner(System.in);
        int op;
        do {
            System.out.println("Escola o exercicio que deseja testar:\n"
                    + "1 - A nota final de um estudante é calculada a partir de três notas atribuídas \n"
                    + "2 - um programa que receba três notas de um aluno, calcule e mostre a média aritmética \n"
                    + "3 - Faça um programa que receba dois números e mostre o maior"
                    + "4 - Faça um programa que receba três números e mostre-os em ordem crescente."
                    + " Suponha que o usuário digitará três números diferentes \n"
                    + "0 - sair");
            op = input.nextInt();

            switch (op) {
                case 1:
                    float n1 = 0, n2 = 0, n3 = 0, media, conceito = 0;
                    ER_1 er1 = new ER_1(n1, n2, n3);
                    System.out.println("Entre com a nota 1: ");
                    er1.setTl(input.nextFloat());
                    n1 = er1.getTl();
                    System.out.println("Entre com a nota 2: ");
                    er1.setAs(input.nextFloat());
                    n2 = er1.getAs();
                    System.out.println("Entre com a nota 3: ");
                    er1.setEf(input.nextFloat());
                    n3 = er1.getEf();
                    media = er1.MediaPonderada(n1, n2, n3);
                    
                    System.out.println("Nota final: " + media
                            + ". Conceito: " + conceito);
                break;
                /*
                case 2:
                
                break;
                
                case 3:
                
                break;
                
                case 4:
                
                break;
                */
                default:
                    System.out.println("Opção invalida.");
            }
        } while (op != 0);
    }
}

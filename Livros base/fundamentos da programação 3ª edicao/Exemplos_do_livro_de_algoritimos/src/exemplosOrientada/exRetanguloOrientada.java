package exemplosOrientada;

import java.util.*;

public class exRetanguloOrientada {
    public static void main(String[] args){
       Retangulo r = new Retangulo();
       Scanner input = new Scanner(System.in);
       float altura, largura, area, perimetro;
       System.out.print("Digite o valor da altura do retângulo: ");
       r.setAltura(input.nextFloat());
       System.out.print("Escreva o valor da largura do retangulo: ");
       r.setLargura(input.nextFloat());
       System.out.print("O valor da area é " + r.areaRetanagulo());
       System.out.print("O valor do perimetro é " + r.perimetroRetangulo());
    }
}

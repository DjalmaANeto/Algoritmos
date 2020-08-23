package exemplosEstrutura;
import java.io.*;
import java.util.*;
/**
 * @author Djalma
 */
public class exCalculoRetanguloEstruturada {
    
    public static void main(String[] args) {
        float altura, largura, area, perimetro;
        Scanner input;
        input = new Scanner(System.in);
        System.out.print("Entre com a altura do retangulo: ");
        altura = input.nextFloat();
        System.out.print("Entre com a largura do retangulo: ");
        largura = input.nextFloat();
        area = calculoArea(largura, altura);
        perimetro = calculoPerimetro(largura, altura);
        mostraMensagem("O valor da area é ", area);
        mostraMensagem("Valor do perímetro é ", perimetro);
    }
    
    public static float calculoArea(float a, float b){
        return a*b;
    }
    
    public static float calculoPerimetro(float a, float b){
        return 2*a + 2*b;
    }
    
    public static void mostraMensagem(String msg, float vlr){
        System.out.println(msg+vlr);
    }

}


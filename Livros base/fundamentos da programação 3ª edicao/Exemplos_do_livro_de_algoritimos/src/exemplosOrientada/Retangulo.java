package exemplosOrientada;

public class Retangulo {
    private float altura;
    private float largura;
    
    public Retangulo(){
        altura = 0; 
        largura = 0;
    }

    public float getAltura() {
        return altura;
    }

    public void setAltura(float altura) {
        this.altura = altura;
    }

    public float getLargura() {
        return largura;
    }

    public void setLargura(float largura) {
        this.largura = largura;
    }
    
    public float areaRetanagulo(){
        return altura * largura;
    }
    
    public float perimetroRetangulo(){
        return 2*altura + 2*largura;
    }
}


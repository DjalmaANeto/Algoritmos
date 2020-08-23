package ERs_condicionais;
/*
 * @author Djalma
 */
public class ER_1 {
    private float tl, as, ef;

    public ER_1(float tl, float as, float ef) {
        this.tl = 0l;
        this.as = 0;
        this.ef = 0;
    }

    public float getTl() {
        return tl;
    }

    public void setTl(float tl) {
        this.tl = tl;
    }

    public float getAs() {
        return as;
    }

    public void setAs(float as) {
        this.as = as;
    }

    public float getEf() {
        return ef;
    }

    public void setEf(float ef) {
        this.ef = ef;
    }
    
    public float MediaPonderada(float tl, float as, float ef){
        return as*2 + ef*3 + tl*5 / 10;
    }
    
    public void conceito(float mediaP){
        if(mediaP >= 8 && mediaP == 10){
            System.out.println("A");
        }if(mediaP >= 7 && mediaP < 8){
            System.out.println("B");
        }if(mediaP >= 6 && mediaP < 7){
            System.out.println("C");
        }if(mediaP >= 5 && mediaP < 6){
            System.out.println("D");
        }if(mediaP >= 0 && mediaP < 5){
            System.out.println("E");
        }
    }
    
}

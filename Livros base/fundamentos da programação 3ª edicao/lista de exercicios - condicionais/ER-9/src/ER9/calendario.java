package ER9;

import java.util.Calendar;
import java.util.Date;

public class calendario {
        int dia, mes, ano, hora, min;
        
        //instanciando objetos Calendar e Date
        Calendar cal = Calendar.getInstance();
        Date d = new Date();
        
    public int getDia(){
            return dia = cal.get(Calendar.DAY_OF_MONTH);
    }
    
    public int getMes(){
            return mes = cal.get(Calendar.MONTH) + 1;
    }

    public String Mes(){
        if(getMes() == 1){
            return "Janeiro";
         }if(getMes() == 2){
            return "Fevereiro";
         }if(getMes() == 3){
            return "Março";
         }if(getMes() == 4){
            return "Abril";
         }if(getMes() == 5){
            return "Maio";
         }if(getMes() == 6){
            return "Junho";
         }if(getMes() == 7){
            return "Julho";
         }if(getMes() == 8){
            return "Agosto";
         }if(getMes() == 9){
            return "Setembro";
         }if(getMes() == 10){
            return "Outubro";
         }if(getMes() == 11){
            return "Novembro";
         }if(getMes() == 12){
            return "Dezembro";
         }else
            return null;
    }
    
    public int getAno(){
            return ano = cal.get(Calendar.YEAR);
    }
    
    public int getHora(){
            return hora = cal.get(Calendar.HOUR);
    }
    
    public int getMinuto(){
            return min = cal.get(Calendar.MINUTE);
    }
        
    public void imprime(){
        System.out.println(getDia() + "/" + Mes() + "/" + getAno() + " Horarário: " + getHora() + "h" + getMinuto());
    }
}

package com.company;
import java.util.*;
import java.io.*;


public class Main {

    public static void main(String[] args) {
        try {
            System.out.println("Press enter to create objs");
            System.in.read();
            long totalTime = 0;
            for (int i = 0; i < 10; i++)
            {
                System.gc();
                System.out.println("beginning cycle " + i);
                TestModel t = new TestModel(10000);
                t = null;
                long beginTime = System.nanoTime();
                System.gc();
                long endTime = System.nanoTime();
                long loopTime = endTime - beginTime;
                totalTime += loopTime;
                System.out.println("Garbage collection took " + loopTime);
                System.out.println("--");
            }
            System.out.println("GC took " + totalTime + " milliseconds");
            System.out.println("Average time " + (totalTime / 10) + " milliseconds");
            System.in.read();
        } catch (IOException ex) {
            System.out.println(ex.getMessage() + " " + ex.getStackTrace());
        }
    }

}

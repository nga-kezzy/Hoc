package com.company;

public class array {
    public static void main(String[] args){
        int[][] a ={
                {1,4,6,8},
                {7,8 ,9},
                {4,5,6},
        };
        for(int i= 0; i<a.length; i++){
            for(int j=0; j<a[i].length; j++){
                System.out.println("cac pt cua row 1 la:"+ a[i][j]);
            }
        }
    }
}

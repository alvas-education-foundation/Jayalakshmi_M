//Write a Java Program to find the largest and smallest word in a string.
Description:
ALGORITHM
STEP 1: START
STEP 2: DEFINE String string="Hardships often prepare ordinary people for an extraordinary destiny"
STEP 3: DEFINE word = " ", small = " ", large = " ".
STEP 4: Make object of String[] words.
STEP 5: SET length =0
STEP 6: string = string + " "
STEP 7: SET i=0. REPEAT STEP 8 to 9 STEP UNTIL i
STEP 8: IF(string.charAt(i) != ' ') then
word =word + string.charAt(i)
else
word[length]=word
length =length + 1
word = " "
STEP 9: i=i+1
STEP 10: small = large =words[0]
STEP 11: SET k = 0. REPEAT STEP 12 to STEP 14 UNTIL k
STEP 12: IF(small.length() > words[k].length())
then
small = words[k]
STEP 13: IF(large.length() < words[k].length())
then
large = words[k]
STEP 14: k = k + 1
STEP 15: PRINT small
STEP 16: PRINT large
STEP 17: END
//



import java.io.*;
import java.util.*;
 
public class Main{
    // Method to split the string and find the largest and smallest word 
    static void printLargestAndSmallestWord(String str){
        String[] arr=str.split(" ");
        int i=0;
        int maxlength,minlength;
        maxlength=Integer.MIN_VALUE;
        minlength=Integer.MAX_VALUE;
        String largest,smallest;
        largest = smallest = "";
        for(i=0;i<arr.length;i++){
            if(arr[i].length() < minlength){
                smallest=arr[i];
                minlength=arr[i].length();
            } 
            if(arr[i].length() > maxlength) {
                largest=arr[i];
                maxlength=arr[i].length();
            }
        }
        System.out.println("The largest and smallest word is \"" + largest +
                                               "\" and \"" + smallest + "\"");
    }
    // Main function to read the string
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the text string");
        String str;
        str=sc.nextLine();
        printLargestAndSmallestWord(str);
    }
}
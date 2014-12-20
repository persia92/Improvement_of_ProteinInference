/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication2;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.io.PrintWriter;
import java.util.StringTokenizer;
import java.util.logging.Level;
import java.util.logging.Logger;
import javax.security.auth.login.Configuration;

/**
 *
 * @author Muntasir
 */
public class JavaApplication2 {
static PrintWriter parameterWriter;
    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) throws IOException {
        
        String inputData = "det2_protein.txt";
        String outputData= "det2_protein_split.txt";
        
                    FileReader testReader=null;
        try {
            testReader = new FileReader(inputData);
            BufferedReader testBufferReader=new BufferedReader(testReader);
            
            FileWriter outputWriter = new FileWriter(outputData,true);
            BufferedWriter outputBufferWriter = new BufferedWriter(outputWriter);
            
            PrintWriter writer = new PrintWriter(outputData, "UTF-8");
            while(true){
            String testString = testBufferReader.readLine();
            if(testString==null) break;
            StringTokenizer tokens = new StringTokenizer(testString,"|");
            
            String protein=tokens.nextToken(); //protenPeptideMap er pr, pep alada kora holo
            //String name=tokens.nextToken();
            System.out.println(protein + " ");

            writer.println(protein);

        }
            writer.close();
           // outputBufferWriter.close();
        } catch (FileNotFoundException ex) {
            Logger.getLogger(JavaApplication2.class.getName()).log(Level.SEVERE, null, ex);
        } finally {
            try {
                testReader.close();
            } catch (IOException ex) {
                Logger.getLogger(JavaApplication2.class.getName()).log(Level.SEVERE, null, ex);
            }
        }
    }
}

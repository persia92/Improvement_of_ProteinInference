/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package outputproteinpepteinlist;

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

/**
 *
 * @author Muntasir
 */
public class OutputProteinPepteinList {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) throws IOException {
        // TODO code application logic here
        
               String inputData = "MSbayesPro_Output_Protein_Peptide.txt";
        String outputData= "magpi_database.txt";
        
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
            StringTokenizer token1 = new StringTokenizer(testString,";");
            String mypro=token1.nextToken();
            String mypep=token1.nextToken();
            StringTokenizer tokens = new StringTokenizer(mypep,",");
            String peptides;
            int k=tokens.countTokens();
            k--;
 
            while(k!=0)
            {
                peptides=tokens.nextToken();
                //if(peptides!="")
               // {
                    System.out.println(mypro +" "+ peptides);
                    writer.println(mypro +" "+ peptides);
               // }
                k--;
            }
            
           
        }
            writer.close();
           // outputBufferWriter.close();
        } catch (FileNotFoundException ex) {
            Logger.getLogger(OutputProteinPepteinList.class.getName()).log(Level.SEVERE, null, ex);
        } finally {
            try {
                testReader.close();
            } catch (IOException ex) {
                Logger.getLogger(OutputProteinPepteinList.class.getName()).log(Level.SEVERE, null, ex);
            }
        }
    }
}

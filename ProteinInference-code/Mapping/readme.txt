//last update 20/12/14 Persia

//Summery Of Mapping process
//Start reading from Sigma49/readme.txt

det2.txt : input of MSBayesPro.exe .

Det2_peptide_map_Generator.cpp : Generates peptide list and map it ;

det2_peptide_map.txt: output of  Det2_peptide_map_Generator.cpp ;

Det2_protein_List_Generator.cpp: generate protein list;

det2_protein.txt: output of Det2_protein_List_Generator.cpp ;

ProteinSplit: this is a JAVA Application. Open it in Netbeans. In det2_protein.txt, proteins are in XXXXX|ABCD_EFG form, 
here XXXXX is the protein accession number which we are using, so we have to split it.

det2_protein_split.txt:  output of ProteinSplit. List of Proteins.

det2_protein_map.txt: proteins of det2_protein_split.txt are mapped (Taking account of sigma_49_map.txt)

CreatDatabase: this is a JAVA Application. Open it in Netbeans. It is creating a .txt file of main_database.txt in the format 
"protein peptide", here the input is det2Converted.txt which is generated from convert_det2/convert_det2.cpp ;



MSBayesPro_output_formatted.txt: Output of MSBayesPro is pospep2.txt.quantify.bayes53. "MSBayesPro_output_formatted.txt" is the 
the formatted version of it.



msPro_output_protein_Generator.cpp: Extracts the proteins from "MSBayesPro_output_formatted.txt." whose MAP Probability is 1.

msPro_Output_Protein.txt: output of msPro_output_protein_Generator.cpp . 62 Protein are present.



msPro_output_peptide_Generator.cpp: Extracts of peptides of 62 proteins from MSBayesPro_output_formatted.txt.

msPro_Output_Peptide.txt: output of msPro_output_peptide_Generator.cpp . 


MSBayesProOutputProteinPepteinList : Netbeans Project. Creating magpi_database.txt . this folder "MSBayesProOutputProteinPepteinList" includes
readme.txt 


msPro_output_peptide_Map_Generator.cpp: Mapping  of msPro_output_peptide.txt 

msPro_Output_Peptide_map.txt: output of  msPro_output_peptide_Map_Generator.cpp;
 

 msPro_output_protein_Map_Generator.cpp: Mapping of msPro_output_protein.txt 
 
 msPro_Output_Protein_map.txt: output of  msPro_output_protein_Map_Generator.cpp;
 
 MAgPI_Database_Map.cpp:  This is the final database for MagPI. It is mapped using magpi_database.txt, msPro_Output_Protein_map.txt and 
 msPro_Output_Peptide_map.txt.


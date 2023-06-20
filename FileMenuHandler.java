
import javax.swing.*;
import java.awt.event.*;
import java.io.*;
import java.util.StringTokenizer;

public class FileMenuHandler implements ActionListener {
    UnsortedWordList unSWL;
    SortedWordList sortWL;
    WordGUI WG;
    public FileMenuHandler (WordGUI original, UnsortedWordList UWL, SortedWordList SWL) {
        unSWL = UWL;
        sortWL = SWL;
        WG = original;
    }


    public void actionPerformed(ActionEvent event) {
        String  menuName;

        menuName = event.getActionCommand();
        if (menuName.equals("Open"))
            openFile( );
        else if (menuName.equals("Quit")){
            JOptionPane.showMessageDialog(null, " Quit was clicked");
            System.exit(0);
        }
    }

    private void openFile( ) {
        JFileChooser chooser;
        int status;
        chooser = new JFileChooser( );
        status = chooser.showOpenDialog(null);
        if (status == JFileChooser.APPROVE_OPTION)

            readSource(chooser.getSelectedFile(), unSWL, sortWL );
        else
            JOptionPane.showMessageDialog(null, "Open File dialog canceled");
    }


    private void readSource(File chosenFile, UnsortedWordList unSWL, SortedWordList sortWL ) {
        String chosenFileName = chosenFile.getAbsolutePath();
        TextFileInput in = new TextFileInput(chosenFileName);


        String line = in.readLine();
        Word subWord;
        while (line != null ) {

            StringTokenizer st = new StringTokenizer(line, ",");

            while(st.hasMoreTokens()){
                /
                try{
                    subWord = new Word(st.nextToken());

                    unSWL.add(subWord);


                    sortWL.add(subWord);
                }


                catch (IllegalWordException iwe){
                    System.out.println(iwe.getMessage());

                }


            }

            line = in.readLine();
        }

        //Prints the unsorted/sorted word list to the GUI
        WG.printUnsorted(unSWL);
        WG.printSorted(sortWL);
        in.close();
        //while
    }

}

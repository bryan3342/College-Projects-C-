import javax.swing.*;
import java.awt.*;

public class RomanANumeralGUIisolated{
	public static void main(String[] args) {
		mainFrame();
	}
static TextArea Roman, Arabic;
static Container textAreas;
	
private static void mainFrame() {
	JFrame frame = new JFrame("Roman Numberals to Arabic Numerals");
	Roman = new TextArea();
	Arabic = new TextArea();
	frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	frame.setSize(500,500);// (width, height);
	frame.setLocation(200,200);// (x, y);
	frame.setLayout(new GridLayout(1,2)); // split JFrame into 1 rows and 2 column to display the two numerals.
	textAreas = frame.getContentPane();
	textAreas.add(Roman);
	textAreas.add(Arabic);
	//Display the window.
	frame.pack();
	frame.setVisible(true);
	}
}
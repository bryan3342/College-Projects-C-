

public class createFileMenu {
    public void createFileMenu() {
        JMenuBar menuBar = new JMenuBar();
        JMenu fileMenu = new JMenu("File");
        JMenuItem item;


        FileMenuHandler fmh = new FileMenuHandler(this, unsort, sort);

        item = new JMenuItem("Open");
        item.addActionListener(fmh);



        fileMenu.add(item);
        item.setFont(new Font("Times New Roman", Font.PLAIN, 30));
        fileMenu.addSeparator();


        item = new JMenuItem("Quit");
        item.addActionListener(fmh);

        fileMenu.add(item);
        item.setFont(new Font("Times New Roman", Font.PLAIN, 30));


        fileMenu.setFont(new Font("Times New Roman", Font.PLAIN, 30));
        menuBar.add(fileMenu);

        setJMenuBar(menuBar);
    }
}
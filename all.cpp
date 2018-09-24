import java.awt.*;
import java.awt.event.*;
import java.io.File;
import java.util.Random;
import javax.swing.*;
public class ExamTaking extends JFrame
{
    Test object;
    int lowerBound,lastIndext;
    JTextField text;
    JLabel toShowImage,verdict;
    JPanel Panel1;
    int bool[];
    int rannum;
    int success,count;
    String str;
    ImageIcon toShowelement,wrong,correct;
    public ExamTaking(Test t,int lowerBound,int lastIndext, JPanel panel1 )
    {
        wrong=new ImageIcon(getClass().getResource("wrong.png"));
        correct=new ImageIcon(getClass().getResource("correct.png"));
        success=0;
        count=0;
        bool=new int[15];
        for(int i=0; i<15; i++)
        {
            bool[i]=0;

        }
        object=t;
        this.lowerBound=lowerBound;
        this.lastIndext=lastIndext;
        this.Panel1=panel1;
        text=new JTextField();
        TextFieldHandler handler=new TextFieldHandler();
        text.addActionListener(handler);

    }
	public Timer timer; //edited..........
    private class TextFieldHandler implements ActionListener
    {
        public void actionPerformed( ActionEvent event )
        {
            str="";
            if(event.getSource()==text)
            {
                str=str+event.getActionCommand();
				timer = new Timer(2000, new TimerListener()); //edited........
                ShowVerdict();
				timer.start(); //edited.......
                //ExamTime();  //edited.......
            }
        }
    }


	class TimerListener implements ActionListener //edited.......
	{
		public void actionPerformed(ActionEvent event)
		{
			ExamTime();
			timer.stop();
		}
	}

    void ShowVerdict()
    {

      Panel1.removeAll();
        Panel1.repaint();
        Panel1.revalidate();
        Panel1.setLayout(null);
        object.setContentPane(Panel1);
        if(str.equalsIgnoreCase(object.string1[rannum]))
        {
            success++;
          verdict=new JLabel(correct);
          verdict.setBounds(0,0,800,600);
        }
        else
        {
         verdict=new JLabel(wrong);
         verdict.setBounds(0,0,800,600);
        }
        Panel1.add(verdict);
				Panel1.repaint();
    }

    public void ExamTime()
    {

        Panel1.removeAll();
        Panel1.repaint();
        Panel1.revalidate();
        Panel1.setLayout(null);
        Panel1.setBackground(Color.CYAN);
        object.setContentPane(Panel1);



        while(true)
        {
            //System.out.println("ok");

            // rannum=rand.nextInt(lastIndext-lowerBound+1)+lowerBound;
            rannum=(int)(Math.random()*15);
            int  mod=rannum%15;
            System.out.println("mod"+"  "+rannum);

            if(bool[mod]==0)
            {
                 System.out.println(">>>"+mod);
                bool[mod]=1;
                break;
            }

        }
        toShowelement= new ImageIcon(getClass().getResource(object.string1[rannum]+".png"));
        toShowImage=new JLabel(toShowelement);
        toShowImage.setBounds(250,70,300,350);
        Panel1.add(toShowImage);
        Font f2=new Font("SansSerif",Font.ITALIC,40);
        text.setBackground(Color.MAGENTA);
        text.setFont(f2);
        text.setBounds(280, 450, 250,50);

        Panel1.add(text);

    }
}

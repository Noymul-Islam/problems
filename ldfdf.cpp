


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
    int rannum,multiple;
    int success,count;
    String str;
    ImageIcon toShowelement,wrong,correct,thumsup,thumsDown;
    Random ran;
    JButton NEXT,RESULT,TRYAGAIN;
    public ExamTaking(Test t,int lowerBound,int lastIndext, JPanel panel1,int multiple )
    {
        //System.out.println(lowerBound);
        NEXT=new JButton("NEXT");
        RESULT=new JButton("RESULT");
        TRYAGAIN=new JButton("Try Again");
        wrong=new ImageIcon(getClass().getResource("wrong.png"));
        correct=new ImageIcon(getClass().getResource("correct.png"));
        thumsDown=new ImageIcon(getClass().getResource("Thumbs_down.png"));
        thumsup=new ImageIcon(getClass().getResource("Thumbs_Up.png"));
        success=0;
        this.multiple=multiple;
        count=0;
                ran=new Random();
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
       ButtonFieldHandler handler1=new ButtonFieldHandler();
        TextFieldHandler handler=new TextFieldHandler();
        text.addActionListener(handler);
        NEXT.addActionListener(handler1);
         RESULT.addActionListener(handler1);
         TRYAGAIN.addActionListener(handler1);
    }
    private class ButtonFieldHandler implements ActionListener{
     public void actionPerformed( ActionEvent event ){
       if(event.getSource()==NEXT)
       {
       ExamTime();

       }
       else if(event.getSource()==RESULT)
       {
         ShowResult();
       }
       else if(event.getSource()==TRYAGAIN)
       {/*Panel1.removeAll();
        Panel1.repaint();
        Panel1.revalidate();
           /*Test object1=new Test()*/;
           //object.showOptions()
                   ;}
     }
    }
    private class TextFieldHandler implements ActionListener
    {
        public void actionPerformed( ActionEvent event )
        {
            str="";
            if(event.getSource()==text)
            {
                str=str+event.getActionCommand();
                //System.out.println(str);
                text.setText("");
                ShowVerdict();


                //try{
                //Thread.sleep(1000);}catch(Exception e){};
               //System.out.println("ok ekhane");
                //ExamTime();


            }
        }
    }
    void ShowResult()
    {
        Panel1.removeAll();
        Panel1.repaint();
        Panel1.revalidate();
        Panel1.setLayout(null);
        Panel1.setBackground(Color.CYAN);
        object.setContentPane(Panel1);
        Font f=new Font("SansSerif",Font.BOLD,30);
        JLabel UP=new JLabel(thumsup);
           JLabel DOWN=new JLabel(thumsDown);
           UP.setBounds(250,70,300,350);
           DOWN.setBounds(250,70,300,350);
           TRYAGAIN.setBounds(350, 500, 100, 50);
             TRYAGAIN.setBounds(400, 500, 120, 50);
        TRYAGAIN.setBackground(Color.BLUE);

         if(success>=12)
         {
             String st="You have given"+" "+success+" "+"correct answers!!!!!!!";
     JLabel msg=new JLabel(st);
     msg.setBounds(50,80,800,50);
     msg.setFont(f);
         Panel1.add(msg);
         Panel1.add(UP);
         Panel1.add(TRYAGAIN);
         }
         else {
             String st="You have given"+" "+success+" "+"correct answers";
     JLabel msg=new JLabel(st);
     msg.setBounds(50,80,800,50);
     msg.setFont(f);

     Panel1.add(msg);
         Panel1.add(DOWN);
         Panel1.add(TRYAGAIN);
         }
    }

    void ShowVerdict()
    {
      remove(Panel1);

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
              Font f=new Font("SansSerif",Font.BOLD,20);
        NEXT.setBounds(400, 500, 120, 50);
        NEXT.setBackground(Color.BLUE);

          NEXT.setForeground(Color.green);
          NEXT.setFont(f);
          RESULT.setBounds(400, 500, 120, 50);
        RESULT.setBackground(Color.BLUE);

         RESULT.setForeground(Color.green);
          RESULT.setFont(f);
          if(count<15)
        verdict.add(NEXT);
          else
              verdict.add(RESULT);

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

            // rannum=ran.nextInt((lastIndext-lowerBound)+1)-lowerBound;
            rannum=(int)(Math.random()*15);
            System.out.println("befor"+rannum);
            rannum=rannum+(15*multiple);
            System.out.println("multiple"+rannum);
            int  mod=rannum%15;
            System.out.println("mod"+"  "+rannum);

            if(bool[mod]==0)
            {
                count++;
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

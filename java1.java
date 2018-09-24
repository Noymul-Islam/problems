import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class gui13 extends JFrame{
JButton add,substract,muliply,divide;
JTextfield num,num2;
Jlabel result,enter1,enter2;

 public gui13(){
 setLayout(new GridBagLayout());
 GridBagConstraints c = new GridBagConstraints();

  enter1= new JLabel("1st: ");
  c.fill=GridBagConstraints.HORIZONTAL;
  c.gridx=0;
  c.gridy=0;
  add(enter1,c);
  num1=new JTextField(10);
  c.fill=GridBagConstraints.HORIZONTAL;
  c.gridx=1;
  c.gridy=0;
  c.gridwidth=3;
  add(num1,c);

  enter2=new JLabel("2nd: ");
  c.fill=GridBagConstraints.HORIZONTAL;
  c.gridx=0;
  c.gridy=1;
  c.gridwidth=1;
   add(enter2,c);
   num2=new JTextField(10);
   c.fill=GridBagConstraints.HORIZONTAL;
   c.gridx=1;
   c.gridy=1;
   c.gridwidth=3;
   add(num2,c);
   add = new JButton("+");
   c.fill=GridBagConstraints.HORIZONTAL;
   c.gridx=0;
   c.gridy=2;
   c.gridwidth=1;
   add(add,c);
   substract = new JButton("-");
   c.fill=GridBagConstraints.HORIZONTAL;
   c.gridx=1;
   c.gridy=2;
   add(substract, c);

   multiply = new JButton("*");
   c.fill=GridBagConstraints.HORIZONTAL;
   c.gridx=2;
   c.gridy=2;
   add(multiply,c);
   divide= new JButton("/");
   c.fill=GridBagConstraints.HORIZONTAL;
   c.gridx=3;
   c.gridy=2;
   add(divide,c);
   result = new JLabel("");
   c.fill=GridBagConstraints.HORIZONTAL;
   c.gridx=0;
   c.gridy=4;
   c.gridwidth=4;
   add(result,c);
   event a=  new event();
   add.addActionListener(a);
   substract.addActionListener(a);
   multiply.addActionListener(a);
   divide.addActionListener(a);
   }
   public class event implements ActionListener{
    public void ActionPerformed(ActionEvent)
    {
        double number1, number2;
        try{

         number 1=Double.parseDouble(num1.getText());
        }catch(NumberFormatException e){
          result.setText("Illegal data in 1st");
          result.setForeground(Color.RED);
          return ;
        }
        try {

         number2=Double.parseDouble(num2.getText());

        }catch(NumberFormationException e)
        {
            result.setText("Illegal data in 2nd");
            result.setForeground(Color.RED);
            return;
        }
        String op=a.getActionCommand();
        if(op.equals("+")){

            double sum=number1 + number2;
            result.setText(number+ "+"+number2+"="+sum);
            result.setForeground(Color.RED);
        } else if(op.equals("-"))
        {

            double diff= number1-number2;
            result.setText(number+"-"+ number2+"="+diff);
            result.setForeground(Color.RED);
             return ;
         } else if(op.equals("*"))
         {

             double factor=number1* number2;
             result.setText(number1+"*"+number2+"="+factor);
             result.setForeground(Color.RED);

         } else if(op.equals("/"))
         {
              if(number2==0)
              {
                  result.setText("cannot divide by 0");
                  result.setForeground(Color.RED);
              } else {
                 double quotient=number1/number2;
                 result.setText(number1+"/"+number2+"="+quotient);
                 result.setForeground(Color.RED);
              }

         }



    }

   }
   public static void main(String args[])
   {
         gui13 g= new gui13();
         g.setDefaultCloseOperation(J.Frame.EXIT_ON_CLOSE);
         g.setVisible(true);
         g.setSize(250,175);

   }

}

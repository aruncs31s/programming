import javax.print.event.PrintJobListener;

public class WhileLoop {
    public static void main(String[] args) {
        boolean a=true;
        int n=0;
        do
        {
            System.out.println(n++);
            if(n==5) a=false;
        }while(a);
    }
}

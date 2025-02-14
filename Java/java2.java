class operatorDemo
{
    public static void main(String[] args) 
    {
        int x = 10000000;
        System.out.println(x);
        x = x + 1;
        System.out.println(x);    
    }
}

class opearatorDemo1
{
    public static void main(String args[])
    {
        int x = 10000000;
        System.out.println(x);
        x++; // post increment x = x + 1 
        System.out.println(x);

    }
}

class operatorDemo2
{
    public static void main(String args[])
    {
        int x = 10000000;
        System.out.println(x);
        ++x;  //pre increment;
        System.out.println(x);
    }
}

class operatorDemo3
{
    public static void main(String[] args)
    {
        int x = 5;
        System.out.println(x);
        x = x - 1;
        System.out.println(x);
    }
}

class operatorDemo4
{
    public static void main(String args[])
    {
        int x = 5;
        System.out.println(x);
        x--;
        System.out.println(x);
    }
}

class operatorDemo5
{
    public static void main(String args[])
    {
        int x = 5;
        System.out.println(x);
        --x;
        System.out.println(x);
    }
}

class operatorDemo6
{
    public static void main(String args[])
    {
        int x = 5;
        int result = ++x * 4;
        System.out.println("result = " + result + "\nx = " + x);
    }
}

class operatorDemo7
{
    public static void main(String args[])
    {
        int x = 5;
        int result = x++ * 4;
        System.out.println("result = " + result + "\nx = " + x);
    }
}

class operatorDemo8
{
    public static void main(String args[])
    {
        int x = 5;
        int result = x-- * 4;
        System.out.println("result = " + result + "\nx = " + x);
    }
}

class operatorDemo9
{
    public static void main(String args[])
    {
        int x = 5;
        int result = --x * 4;
        System.out.println("result = " + result + "\nx = " + x);
    }
}

// also 
class operatorDemo10
{
    public static void main(String[] args)
    {
        byte b = 5;
        System.out.println(~b);
    }
}
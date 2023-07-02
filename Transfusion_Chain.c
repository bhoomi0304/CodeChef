/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t!=0){
		    int x = sc.nextInt();
		    String s[] = new String[x];
		    for(int i=0;i<x;i++){
		        s[i]=sc.next();
		    }
		    int a=0;
		    int b=0;
		    int ab=0;
		    int o=0;
		    for(int i=0;i<x;i++){
		        if(s[i].equals("A")){
		            a++;
		        }else if(s[i].equals("B")){
		            b++;
		        }else if(s[i].equals("AB")){
		            ab++;
		        }else if(s[i].equals("O")){
		            o++;
		        }
		    }
		    int var=Math.max(a,b);
		    int ans=var+ab+o;
		    System.out.println(ans);
		    
		    t--;
		}
	}
}

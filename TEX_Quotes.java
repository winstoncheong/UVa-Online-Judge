/*
 * 272 - TEX Quotes
 * 
 */

import java.util.*;

public class TEX_Quotes {
	
	public static void main (String args[]) {
		Scanner sc = new Scanner(System.in);
		String line;
		boolean open = true;
		while(sc.hasNextLine()){
			line = sc.nextLine();
			for(char c : line.toCharArray()){
				if (c == '"'){
					if (open)
						System.out.print("``");
					else
						System.out.print("''");
					open = !open;
				}
				else
					System.out.print(c);
			}
			System.out.println();
		}
	}
}


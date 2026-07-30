import java.util.*;
public static boolean check_parantesis(String s){
    Stack<Character>s=new Stack();
    for(char ch : s.toCharArray()){
        if(ch=='(' || ch=='{' || ch=='['){
            s.push(ch);
        }
        else{
            if(s.isEmpty()) return false;
            if(ch==')') && s.peek()!='(' return false;
            if(ch=='}') && s.peek()!='{' return false;
            if(ch==']') && s.peek()!='[' return false;
            s.pop();
        }
        return s.isEmpty();
    }
}
public class Stack2 {
    public static void main(String[] args) {
        String s="{[{({})}]}";
        check_parantesis(s);
        }
    }
    
}

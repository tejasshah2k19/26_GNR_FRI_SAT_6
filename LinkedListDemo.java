
import java.util.LinkedList;

class LinkedListDemo {

    public static void main(String args[]) {

        LinkedList<Integer> obj = new LinkedList<>();

        obj.addLast(10);//end 
        obj.addLast(20);
        obj.addLast(30);
        obj.addLast(40);
        obj.add(50);
        obj.addFirst(100);//beg 

        System.out.println(obj);// 100 10 20 30 40 50

        //index 
        obj.add(3, 33);// 

        System.out.println(obj);//100:0 10:1 20:2 33 30 40 50

        obj.get(0);//
        obj.size(); // 7 

        System.out.println(obj.get(0));// 100 
        System.out.println(obj.size());//7 

        System.out.println("all elements ====> ");
        for (int i = 0; i < obj.size(); i++) {
            System.out.println(obj.get(i));//0 ---- size
        }

        obj.remove();//100 
        obj.removeFirst();//10 
        obj.removeLast(); //50 
        obj.remove(2);

        System.out.println(obj);//20 33  40 
        System.out.println("all elements ====> ");
        for(int x:obj){
            System.out.println(x);
        }
    }

}

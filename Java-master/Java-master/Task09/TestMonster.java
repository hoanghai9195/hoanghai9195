package Java1_19;

public class TestMonster {
    public static void main(String[] args){
        Monster m1 = new FireMonster("r2u2");//Upcast
        Monster m2 = new WaterMonster("u2r2");
        Monster m3 = new StoneMonster("r2r2");

        System.out.println(m1.attack());
        System.out.println(m2.attack());
        System.out.println(m3.attack());
        //m1 dies, generate a new instance and re-assign to m1
        m1 = new StoneMonster("a2b2");//upcast
        System.out.println(m1.attack());

//        Monster m4 = new Monster("u2u2");
//        System.out.println(m4.attack());
    }
}

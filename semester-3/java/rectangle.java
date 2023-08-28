public class rectangle{
    int length, width, area;
    String color;

    void set_width(int w){
        this.width = w;
    }

    void set_length(int l){
        this.length = l;
    }

    void set_color(String c){
        this.color = c;
    }

    void find_area(){
        this.area = this.length * this.width;
    }

    boolean is_equal(rectangle r){
        return (this.area == r.area && this.color == r.color);
    }

    public static void main(String[] args){
        rectangle r1 = new rectangle();
        r1.set_length(5);
        r1.set_width(2);
        r1.set_color("White");

        rectangle r2 = new rectangle();
        r2.set_length(2);
        r2.set_width(5);
        r2.set_color("White");

        if(r1.is_equal(r2)){
            System.out.println("Rects are equal");
        }else{
            System.out.println("Rects are not equal");
        }

    }
}

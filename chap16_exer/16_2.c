int main(){
    // q_a
    // struct{
    //     double real;
    //     double imaginary;
    // }c1, c2, c3;

    // q_b
    struct{
        double real;
        double imaginary;
    }c1 = {0.0, 1.0}, c2 = {1.0, 0.0}, c3;

    // q_c
    c1 = c2;

    // q_d
    c3.real = c1.real + c2.real;
    c3.imaginary = c1.imaginary + c2.imaginary;
}
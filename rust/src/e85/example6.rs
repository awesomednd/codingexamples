pub fn main() {
    let num1 = 10;
    let num2 = 20;
    if num1 > num2 {
        println!("{}", num1);
    } else if num2 > num1 {
        println!("{}", num2);
    } else {
        println!("They are the same");
    }
}
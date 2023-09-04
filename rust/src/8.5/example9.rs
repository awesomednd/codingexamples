fn main() {
    let mut number1s = String::new();
    let mut number2s = String::new();
    let mut number3s = String::new();
    println!("Enter a number");
    std::io::stdin().read_line(&mut number1s).unwrap();
    println!("Enter a number");
    std::io::stdin().read_line(&mut number2s).unwrap();
    println!("Enter a number");
    std::io::stdin().read_line(&mut number3s).unwrap();
    let number1 = number1s.trim().parse::<i32>().unwrap();
    let number2 = number2s.trim().parse::<i32>().unwrap();
    let number3 = number3s.trim().parse::<i32>().unwrap();
    if number1 > number2 && number1 > number3 {
        println!("{}", number1);
    } else if number2 > number3 {
        println!("{}", number2);
    } else {
        println!("{}", number3)
    }
}
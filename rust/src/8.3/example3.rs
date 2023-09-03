fn main() {
    let number1 = 5;
    let mut number2s = String::new();
    println!("Enter a number");
    std::io::stdin().read_line(&mut number2s).unwrap();
    let number2 = number2s.trim().parse::<i32>().unwrap();
    let result = number1 * number2;
    println!("The rsesult is {}", result);
}
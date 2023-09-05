pub fn main() {
    let mut num1s = String::new();
    let mut num2s = String::new();
    println!("Enter a number");
    std::io::stdin().read_line(&mut num1s).unwrap();
    println!("Enter a seccond number");
    std::io::stdin().read_line(&mut num2s).unwrap();
    let num1 = num1s.trim().parse::<i32>().unwrap();
    let num2 = num2s.trim().parse::<i32>().unwrap();
    let total = num1 + num2;
    println!("The total is {}", total);
}
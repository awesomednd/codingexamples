fn main() {
    let mut numberstr = String::new();
    println!("Enter a number");
    std::io::stdin().read_line(&mut numberstr).unwrap();
    let number = numberstr.trim().parse::<i32>().unwrap();
    println!("The number written is {}", number);
}
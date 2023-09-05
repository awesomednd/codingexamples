pub fn main() {
    let mut total = 0;
    let mut numbers = String::new();
    for counter in 1..11 {
        numbers = "".to_string();
        println!("Enter a number");
        std::io::stdin().read_line(&mut numbers).unwrap();
        let number = numbers.trim().parse::<i32>().unwrap();
        total += number;
    }
    println!("The total is {}", total)
}
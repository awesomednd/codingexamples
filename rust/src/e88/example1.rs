pub fn main() {
    let mut total = 0;
    for counter in 1..11 {
        println!("Enter a number");
        let mut numbers = String::new();
        std::io::stdin().read_line(&mut numbers).unwrap();
        let number = numbers.trim().parse::<i32>().unwrap();
        total += number;
    }
    println!("The total is {}", total);
}
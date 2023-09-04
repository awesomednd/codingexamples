fn main() {
    let mut ages = String::new();
    println!("Enter your age");
    std::io::stdin().read_line(&mut ages).unwrap();
    let age = ages.trim().parse::<i32>().unwrap();
    if age < 14 {
        println!("You are not old enough");
    } else if age < 16 {
        println!("You need an adult present.")
    }
}
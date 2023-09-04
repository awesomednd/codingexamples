fn main() {
    let num = 10;
    let mut guesss = String::new();
    println!("Enter a number");
    std::io::stdin().read_line(&mut guesss).unwrap();
    let guess = guesss.trim().parse::<i32>().unwrap();
    if num == guess {
        println!("Thats correct");
    } else {
        println!("Incorrect");
    }
}
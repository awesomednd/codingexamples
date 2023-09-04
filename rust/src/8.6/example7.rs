fn main() {
    let number = 5;
    let mut gussed = false;
    while gussed == false {
        let mut guesss = String::new();
        guesss = "".to_string();
        println!("Guess the number");
        std::io::stdin().read_line(&mut guesss).unwrap();
        let guess = guesss.trim().parse::<i32>().unwrap();
        if guess == number {
            gussed = true;
            println!("You gussed correct")
        }
    }
}
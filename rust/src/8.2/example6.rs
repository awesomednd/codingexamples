fn main() {
    let mut word = String::new();
    println!("Enter a word");
    std::io::stdin().read_line(&mut word).unwrap();
    println!("The word entered is {}", word)
}
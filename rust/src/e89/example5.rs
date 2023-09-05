pub fn main() {
    let mut substring = String::new();
    println!("Enter a string");
    std::io::stdin().read_line(&mut substring).unwrap();
    println!("{} is {} charictors long", substring.trim(), substring.trim().len());
}
use substring::Substring;

pub fn main() {
    let mut inputstring = String::new();
    println!("Enter a string");
    std::io::stdin().read_line(&mut inputstring).unwrap();
    for count in 0..inputstring.trim().len() {
        let charitor = inputstring.trim().substring(count, count+1);
        println!("{}", charitor);
    }
}
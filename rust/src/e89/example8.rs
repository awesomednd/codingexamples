use substring::Substring;

pub fn main() {
    let mut stringinput = String::new();
    println!("Enter a string");
    std::io::stdin().read_line(&mut stringinput).unwrap();
    let newstring = stringinput.trim().substring(stringinput.trim().len()-3, stringinput.trim().len());
    println!("{}", newstring);
}